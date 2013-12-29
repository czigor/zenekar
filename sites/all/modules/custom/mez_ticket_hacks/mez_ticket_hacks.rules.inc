<?php
/**
 * Rules include file.
 */

/**
 * Implements hook_rules_event_info().
 */
function mez_ticket_hacks_rules_event_info() {
  $defaults = array(
      'group' => t('MEZ'),
      'module' => 'mez_ticket_hacks',
      //'access callback' => 'commerce_order_rules_access',
  );

  return array(
    'mez_ticket_pdfs_generated' => $defaults + array(
      'label' => t('MEZ ticket pdfs generated'),
      'variables' => array(
        'commerce_order' => array(
          'type' => 'commerce_order',
          'label' => t('Order'),
        ),
      ),
    ),
    'mez_ticket_pdfs_failure' => $defaults + array(
      'label' => t('MEZ ticket pdfs generation failed'),
      'variables' => array(
        'commerce_order' => array(
          'type' => 'commerce_order',
          'label' => t('Order'),
        ),
      ),
    ),
  );
}

/**
 * Implements hook_rules_action_info().
 */
function mez_ticket_hacks_rules_action_info() {
  return array(
    'mez_ticket_out_of_stock_check' => array(
      'label' => t('Redirect if a product in the cart is being purchased'),
      'parameter' => array(
        'commerce_order' => array('type' => 'commerce_order', 'label' => t('Order')),
      ),
      'group' => t('MEZ'),
      'base' => 'mez_ticket_out_of_stock_check',
    ),
    'mez_create_ticket_pdf' => array(
      'label' => t('Create ticket pdf'),
      'parameter' => array(
        'commerce_order' => array('type' => 'commerce_order', 'label' => t('Order')),
      ),
      'group' => t('MEZ'),
      'base' => 'mez_create_ticket_pdf_action',
    ),
  );
}

/**
 * Rules action callback.
 *
 * @param object $order The commerce order object.
 */
function mez_create_ticket_pdf_action($order) {
  // Attach ticket pdf to email.
  $order_w = entity_metadata_wrapper('commerce_order', $order);
  $payment_method = commerce_payment_method_instance_load($order->data['payment_method']);

  $tickets = array();
  foreach ($order_w->commerce_line_items as $cli) {
    $seat = $cli->commerce_product->field_seat->title_field->value();
    $price = $cli->commerce_unit_price->amount->value();
    $tickets[] = array(
      'seat' => $seat,
      'price' => $price,
    );
  }
  $tex = theme('mez_ticket_pdf', array('tickets' => $tickets, 'env' => $payment_method['settings']['env']));

  // Get the destination directory from the pdf sending rule
  $rule = rules_config_load('rules_mez_ticket_pdf_sending');
  foreach ($rule->actions() as $action) {
    if (isset($action->settings['attachments'])) {
      $pdf_filename = token_replace($action->settings['attachments'], array('commerce_order' => $order));
      $path_components = explode('/', $pdf_filename);
      array_pop($path_components);
      $dir = implode('/', $path_components);
    }
  }

  if (file_prepare_directory($dir, FILE_CREATE_DIRECTORY)) {
    $filesdir = drupal_realpath($dir);
    $filename = 'mez_concert_tickets_' . $order->order_id;
    $texfile = file_save_data($tex, $dir . "/$filename.tex");

    $output = array();
    $return_val = 0;
    $cmd = "cd $filesdir;/usr/bin/pdflatex $filename";
    exec($cmd, $output, $return_val);
    rules_invoke_event('mez_ticket_pdfs_generated', $order);
  }
  else {
    rules_invoke_event('mez_ticket_pdfs_failure', $order);
  }
}

/**
 * Rules action callback.
 *
 * @param object $order The commerce order object.
 */
function mez_ticket_out_of_stock_check($order) {
  $order_w = entity_metadata_wrapper('commerce_order', $order);
  $already_ordered = array();
  // Checking if a selected ticket has not been selected by someone else
  // at the same time.
  // Act only if that someone else has already proceeded at least to the
  // checkout_payment phase.
  foreach ($order_w->commerce_line_items as $line_item_w) {
    $query = db_select('field_data_commerce_product', 'fdcp')
      ->fields('fdcp', array('entity_id'))
      ->condition('fdcp.entity_type', 'commerce_line_item')
      ->condition('fdcp.bundle', 'product')
      ->condition('fdcp.entity_id', $line_item_w->line_item_id->value(), '!=')
      ->condition('fdcp.commerce_product_product_id', $line_item_w->commerce_product->product_id->value());
    $line_items_alias = $query->innerJoin('field_data_commerce_line_items', 'fdcli', '%alias.commerce_line_items_line_item_id = fdcp.entity_id');
    $order_alias = $query->innerJoin('commerce_order', 'co', "%alias.order_id = {$line_items_alias}.entity_id");
    $line_items = $query->condition("{$line_items_alias}.entity_type", 'commerce_order')
      ->condition("{$line_items_alias}.bundle", 'commerce_order')
      ->condition("{$order_alias}.status", array('checkout_payment', 'pending', 'processing', 'completed'))
      ->execute()
      ->fetchAll();
    if (!empty($line_items)) {
      $already_ordered[] = $line_item_w;
    }
  }
  if (!empty($already_ordered)) {
    commerce_order_status_update($order, 'cart');
    $message = t('Sorry, some tickets have just been or are just being purchased by someone else. For this reason the following tickets have been removed from your cart:');
    $ticket_list = array();
    foreach ($already_ordered as $line_item_w) {
      $ticket_list[] = $line_item_w->commerce_product->field_seat->title_field->value() . "\n";
      commerce_cart_order_product_line_item_delete($order, $line_item_w->line_item_id->value());
    }
    $message .= theme('item_list', array('items' => $ticket_list));
    $message .= t('Please start over choosing tickets!') . "\n";
    drupal_set_message($message, 'status');
    drupal_goto('node/' . $order_w->commerce_line_items[0]->commerce_product->field_concert->nid->value());
  }
}
