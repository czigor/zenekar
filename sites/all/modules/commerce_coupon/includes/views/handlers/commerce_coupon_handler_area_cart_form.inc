<?php
/**
 * @file
 * Display a commerce coupon form field on the cart form.
 *
 * Most of this logic has been taken from commerce_coupon.checkout_pane.inc.
 * There is probably quite a bit of room for improvement here by reusing
 * code instead of copying it.
 */

class commerce_coupon_handler_area_cart_form extends views_handler_area {

  function option_definition() {
    $options = parent::option_definition();

    $options['coupon_cart_form_view']['default'] = 'order_coupon_list|checkout';
    $options['weight']['default'] = 99;

    return $options;
  }

  /**
   * Options form
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    unset($form['empty']);

    // Build an options array of Views available for the cart contents pane.
    $options = array();

    // Generate an option list from all user defined and module defined views.
    foreach (views_get_all_views() as $view_id => $view_value) {
      // Only include line item Views.
      if ($view_value->base_table == 'commerce_coupon') {
        foreach ($view_value->display as $display_id => $display_value) {
          $options[check_plain($view_id)][$view_id . '|' . $display_id] = check_plain($display_value->display_title);
        }
      }
    }

    $form['coupon_cart_form_view'] = array(
      '#type' => 'select',
      '#title' => t('Coupons Cart View'),
      '#description' => t('Specify the View to render the cart summary.'),
      '#options' => array('none' => t('None')) + $options,
      '#default_value' => $this->options['coupon_cart_form_view'],
    );

    $form['weight'] = array(
      '#type' => 'textfield',
      '#title' => t('Form item weight'),
      '#default_value' => $this->options['weight'],
      '#required' => TRUE,
    );
  }

  function options_validate(&$form, &$form_state) {
    $weight = $form_state['values']['options']['weight'];
    // Weight must be an integer:
    if (!is_null($weight )&& (!is_numeric($weight)) || (int) $weight != $weight) {
      form_set_error('options][weight', t('!name field must be an integer.', array('!name' => $form['weight']['#title'])));
    }
  }

  function render($values = FALSE) {
    // Render a Views form item placeholder.
    // This causes Views to wrap the View in a form.
    return '<!--form-item-' . $this->options['id'] . '-->';
  }

  /**
   * This handler never outputs data when the view is empty.
   */
  function views_form_empty($empty) {
    return $empty;
  }

  function views_form(&$form, &$form_state) {
    // Ensure this include file is loaded when the form is rebuilt from the cache.
    $form_state['build_info']['files']['coupon_cart_form'] = drupal_get_path('module', 'commerce_coupon') . '/includes/views/handlers/commerce_coupon_handler_area_cart_form.inc';

    $form[$this->options['id']] = array(
      '#prefix' => '<div id="commerce-coupon-cart-form-wrapper">',
      '#suffix' => '</div>',
      '#weight' => $this->options['weight'],
    );

    $form[$this->options['id']]['coupon_code'] = array(
      '#type' => 'textfield',
      '#title' => t('Coupon code'),
      '#description' => t('Enter your coupon code here.'),
    );

    $form[$this->options['id']]['coupon_add'] = array(
      '#type' => 'submit',
      '#value' => t('Add coupon'),
      '#name' => 'coupon_add',
      // Limit validation to the coupon code.
      '#limit_validation_errors' => array(array('coupon_code')),
      '#validate' => array('commerce_coupon_handler_area_cart_form_validate'),
      '#submit' => array('commerce_coupon_handler_area_cart_form_submit'),
    );
    // Attach ajax if views ajax enabled.
    if ($this->view->use_ajax) {
      // @todo implement AJAX.
    }

    // First look for an order_id argument.
    foreach ($this->view->argument as $name => $argument) {
      if ($argument instanceof commerce_order_handler_argument_order_order_id) {
        // If it is single value...
        if (count($argument->value) == 1) {
          $order_id = reset($argument->value);
          break;
        }
      }
    }
    $order = !empty($order_id) ? commerce_order_load($order_id) : commerce_cart_order_load($GLOBALS['user']->uid);

    // Extract the View and display keys from the cart contents pane setting.
    $coupon_summary_view = $this->options['coupon_cart_form_view'];
    if ($coupon_summary_view != 'none') {
      list($view_id, $display_id) = explode('|', $coupon_summary_view);
      if (!empty($view_id) && !empty($display_id) && views_get_view($view_id)) {
        $form[$this->options['id']]['redeemed_coupons'] = array(
          '#type' => 'markup',
          '#markup' => commerce_embed_view($view_id, $display_id, array($order->order_id)),
        );
      }
    }
  }
}

/**
 * Validate: function commerce_coupon_handler_area_cart_form
 */
function commerce_coupon_handler_area_cart_form_validate($form, $form_state) {
  // Get the form and values for the coupon form.
  $coupon_array_parents = array_slice($form_state['triggering_element']['#array_parents'], 0, -1);
  $coupon_parents = array_slice($form_state['triggering_element']['#parents'], 0, -1);
  $coupon_values = drupal_array_get_nested_value($form_state['values'], $coupon_parents);
  $coupon_form = drupal_array_get_nested_value($form, $coupon_array_parents);
  $coupon_code  = $coupon_values['coupon_code'];
  $order = $form_state['order'];

  $error = '';

  // No code provided
  if (empty($coupon_code)) {
    $error = t('Please enter a coupon code.');
  }
  else {
    // Check if the coupon code has already been applied.
    $coupon = commerce_coupon_load_by_code($coupon_code);

    if (empty($coupon)) {
      $error = t('Please enter a valid coupon code.');
    }
    else {
      // The same coupon cannot be added twice.
      $order_wrapper = entity_metadata_wrapper('commerce_order', $order);
      foreach ($order_wrapper->commerce_coupons as $order_coupon_wrapper) {
        if ($order_coupon_wrapper->coupon_id->value() == $coupon->coupon_id) {
          $error = t('The coupon you have entered has already been applied to your order');
        }
      }
    }
  }

  // If a coupon was invalidated during the cart refresh (e.g. if its
  // discounts failed their conditions), an error message will have been
  // set.
  if (empty($error)) {
    $error = &drupal_static('commerce_coupon_error_' . strtolower($coupon_code));
  }

  // If we have errors set the form error.
  if (!empty($error)) {
    form_set_error(implode('][', $coupon_form['coupon_code']['#parents']), $error);
  }
}

/**
 * Submit: function commerce_coupon_handler_area_cart_form
 *
 * @todo Anyway to rollback redeeming a coupon if we find an error during
 *   redemption?
 */
function commerce_coupon_handler_area_cart_form_submit($form, $form_state) {
  // Get the values for the coupon form.
  $coupon_parents = array_slice($form_state['triggering_element']['#parents'], 0, -1);
  $coupon_values = drupal_array_get_nested_value($form_state['values'], $coupon_parents);
  $coupon_code  = $coupon_values['coupon_code'];
  $order = $form_state['order'];

  $error = '';

  // Redeem the coupon.
  $coupon = commerce_coupon_redeem_coupon_code($coupon_code, $order, $error);
  $order = commerce_order_load($order->order_id);

  // Error found during redeem.
  if (!empty($error)) {
    watchdog('commerce_coupon', 'An error occurred redeeming a coupon: @error', array('@error' => $error), WATCHDOG_ERROR);
    drupal_set_message(t('Unable to redeem coupon.'), 'error');
    commerce_coupon_remove_coupon_from_order($order, $coupon);
  }

  if ($coupon) {
    // Allow modules/rules to act when a coupon has been successfully added
    // to the cart.
    rules_invoke_all('commerce_coupon_applied_to_cart', $coupon, $order);
  }
}
