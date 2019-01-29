<?php
/**
 * @file
 * Administrative pages for the structured_data module.
 */

/**
 * Form callback for admin settings page.
 */
function structured_data_settings_form($form, &$form_state) {
  $form['marketing'] = structured_data_marketing_form($form_state);
  $form['corporate'] = structured_data_corporate_form($form_state);
  $form['local'] = structured_data_local_form($form_state);
  $form['social_links'] = structured_data_social_form($form_state);

  $form = system_settings_form($form);
  array_unshift($form['#submit'], 'structured_data_settings_form_submit');

  return $form;
}

/**
 * Fieldset builder for the Marketing details settings form.
 */
function structured_data_marketing_form(&$form_state) {
  $fieldset = array(
    '#type' => 'fieldset',
    '#title' => t('Marketing details'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $site_name = variable_get('site_name', '');

  $fieldset['structured_data_site_name_custom'] = array(
    '#type' => 'textfield',
    '#title' => t('Official site name'),
    '#description' => t('Site name or Company name, must be reasonably similar to your domain name. If left blank, %name will be used.', array('%name' => $site_name)),
    '#default_value' => variable_get('structured_data_site_name_custom', ''),
    '#attributes' => array('placeholder' => check_plain($site_name)),
  );
  $fieldset['structured_data_site_name_alternative'] = array(
    '#type' => 'textfield',
    '#title' => t('Alternative site name (optional)'),
    '#description' => t('An alternate name you want Search Engines to consider.'),
    '#default_value' => variable_get('structured_data_site_name_alternative', ''),
  );

  $logo_path = structured_data_get_site_logo();
  $logo_info = getimagesize($logo_path);
  $logo_info['width'] = $logo_info[0];
  $logo_info['height'] = $logo_info[1];

  if ($logo_info['width'] > 600 || $logo_info['height'] > 60) {
    $problem_width = t('a width greater than 600px');
    $problem_height = t('a height greater than 60px');
    $problem_both = $problem_width . ' ' . t('or') . ' ' . $problem_height;

    if ($logo_info['width'] > 600 && $logo_info['height'] > 60) {
      $problem = $problem_both;
    }
    else {
      if ($logo_info['width'] > 600) {
        $problem = $problem_width;
      }
      elseif ($logo_info['height'] > 60) {
        $problem = $problem_height;
      }
    }

    drupal_set_message(t('Logos with @problem will be rejected by Google.', array('@problem' => $problem)), 'warning');
  }
  $fieldset['structured_data_site_logo_current'] = array(
    '#type' => 'item',
    '#title' => t('Image that will be presented to search engines as your logo:'),
    '#markup' => theme('image', array('path' => $logo_path)),
  );
  $fieldset['structured_data_site_logo_custom'] = array(
    '#type' => 'managed_file',
    '#title' => t('Custom site logo'),
    '#description' => t('Logos should be exactly 60px tall with width <= 600px. Allowed extensions: jpg, jpeg, png, gif.'),
    '#upload_location' => 'public://structured_data/',
    '#default_value' => variable_get('structured_data_site_logo_custom', ''),
    '#upload_location' => 'public://',
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg'),
      'file_validate_image_resolution' => array('600x60'),
    ),
  );

  if (variable_get('structured_data_site_name_custom', FALSE) != FALSE) {
    $fieldset['#collapsed'] = FALSE;
  }

  return $fieldset;
}

/**
 * Fieldset builder for the Corporate contacts settings form.
 */
function structured_data_corporate_form(&$form_state) {
  $fieldset = array(
    '#type' => 'fieldset',
    '#title' => t('Corporate contact details'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $fieldset['structured_data_phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone number'),
    '#default_value' => variable_get('structured_data_phone', ''),
  );
  $contact_types = array(
    'customer service' => t('customer service'),
    'technical support' => t('technical support'),
    'billing support' => t('billing support'),
    'bill payment' => t('bill payment'),
    'sales' => t('sales'),
    'reservations' => t('reservations'),
    'credit card support' => t('credit card support'),
    'emergency' => t('emergency'),
    'baggage tracking' => t('baggage tracking'),
    'roadside assistance' => t('roadside assistance'),
    'package tracking' => t('package tracking'),
  );
  $fieldset['structured_data_phone_type'] = array(
    '#type' => 'select',
    '#title' => t('Contact type'),
    '#options' => $contact_types,
    '#empty_option' => t('- None -'),
    '#default_value' => variable_get('structured_data_phone_type', ''),
  );
  $fieldset['structured_data_phone_options'] = array(
    '#type' => 'checkboxes',
    '#title' => t('About this line'),
    '#options' => array(
      'TollFree' => t('Toll free'),
      'HearingImpairedSupported' => t('Serves the hearing-impaired'),
    ),
    '#default_value' => variable_get('structured_data_phone_options', ''),
  );

  if (variable_get('structured_data_phone', FALSE) != FALSE) {
    $fieldset['#collapsed'] = FALSE;
  }

  // @todo Add area served, list all/common country codes?

  return $fieldset;
}

/**
 * Fieldset builder for the Local Business settings form.
 */
function structured_data_local_form(&$form_state) {
  $fieldset = array(
    '#type' => 'fieldset',
    '#title' => t('Local business details'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $fieldset['structured_data_business_type'] = array(
    '#type' => 'select',
    '#title' => t('Type of business'),
    '#options' => array(
      'Organization' => 'Organization',
      'Airline' => 'Airline',
      'Corporation' => 'Corporation',
      'GeneralContractor' => 'General Contractor',
      'EducationalOrganization' => 'Educational Organization',
      'GovernmentOrganization' => 'Government Organization',
      'LocalBusiness' => 'Local Business',
      'MedicalOrganization' => 'Medical Organization',
      'NGO' => 'NGO',
      'PerformingGroup' => 'Performing Group',
      'SportsOrganization' => 'Sports Organization',
    ),
    '#empty_option' => t('- None -'),
    '#default_value' => variable_get('structured_data_business_type', 'Organization'),
  );
  // Address fields.
  $fieldset['structured_data_address'] = array(
    '#type' => 'textfield',
    '#title' => t('Address'),
    '#size' => 120,
    '#default_value' => variable_get('structured_data_address', ''),
  );
  $fieldset['structured_data_city'] = array(
    '#type' => 'textfield',
    '#title' => t('City'),
    '#default_value' => variable_get('structured_data_city', ''),
  );
  $fieldset['structured_data_state'] = array(
    '#type' => 'textfield',
    '#title' => t('State'),
    '#default_value' => variable_get('structured_data_state', ''),
  );
  $fieldset['structured_data_zip'] = array(
    '#type' => 'textfield',
    '#title' => t('Zip'),
    '#default_value' => variable_get('structured_data_zip', ''),
  );

  if ((variable_get('structured_data_business_type', '') != '') || (variable_get('structured_data_address', '') != '') || (variable_get('structured_data_city', '') != '') || (variable_get('structured_data_state', '') != '') || (variable_get('structured_data_zip', '') != '')) {
    if (variable_get('structured_data_business_type', '') != 'Organization') {
      $fieldset['#collapsed'] = FALSE;
    }
  }

  return $fieldset;
}

/**
 * Fieldset builder for the Social links settings form.
 */
function structured_data_social_form(&$form_state) {
  $fieldset = array(
    '#type' => 'fieldset',
    '#title' => t('Social links'),
    // Set up the wrapper so that AJAX will be able to replace the fieldset.
    '#prefix' => '<div id="links-fieldset-wrapper">',
    '#suffix' => '</div>',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#tree' => TRUE,
  );

  $social_links = variable_get('structured_data_social_links', array());

  if (isset($social_links[0])) {
    if ($social_links[0] != '') {
      $fieldset['#collapsed'] = FALSE;
    }
  }

  // Build the fieldset with the proper number of links. We'll use
  // $form_state['num_links'] to determine the number of textfields to build.
  if (empty($form_state['num_links'])) {
    if (empty($social_links)) {
      $form_state['num_links'] = 1;
    }
    else {
      $form_state['num_links'] = count($social_links) + 1;
    }
  }

  for ($i = 0; $i < $form_state['num_links']; $i++) {
    $fieldset['links'][$i] = array(
      '#type' => 'textfield',
      '#title' => t('Social Network link'),
    );

    if (isset($social_links[$i])) {
      $fieldset['links'][$i]['#default_value'] = $social_links[$i];
    }
  }
  $fieldset['add_link'] = array(
    '#type' => 'submit',
    '#value' => t('Add one more'),
    '#submit' => array('structured_data_ajax_add_more_add_one'),
    // See the examples in ajax_example.module for more details on the
    // properties of #ajax.
    '#ajax' => array(
      'callback' => 'structured_data_ajax_add_more_callback',
      'wrapper' => 'links-fieldset-wrapper',
    ),
  );
  if ($form_state['num_links'] > 1) {
    $fieldset['remove_link'] = array(
      '#type' => 'submit',
      '#value' => t('Remove last'),
      '#submit' => array('structured_data_ajax_add_more_remove_one'),
      '#ajax' => array(
        'callback' => 'structured_data_ajax_add_more_callback',
        'wrapper' => 'links-fieldset-wrapper',
      ),
    );
  }

  return $fieldset;
}

/**
 * Callback for both ajax-enabled buttons.
 *
 * Selects and returns the fieldset with the links in it.
 */
function structured_data_ajax_add_more_callback($form, $form_state) {
  return $form['social_links'];
}

/**
 * Submit handler for the "add-one-more" button.
 *
 * Increments the max counter and causes a rebuild.
 */
function structured_data_ajax_add_more_add_one($form, &$form_state) {
  $form_state['num_links']++;
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for the "remove one" button.
 *
 * Decrements the max counter and causes a form rebuild.
 */
function structured_data_ajax_add_more_remove_one($form, &$form_state) {
  if ($form_state['num_links'] > 1) {
    $form_state['num_links']--;
  }
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for structured_data_settings_form().
 */
function structured_data_settings_form_submit($form, &$form_state) {
  variable_set('structured_data_social_links', $form_state['values']['social_links']['links']);
  unset($form_state['values']['social_links']);

  // Create a file usage record for the logo file uploaded.
  // global $user;
  // $form['structured_data_site_logo_custom']['#file']->status = FILE_STATUS_PERMANENT;
  // $file = file_save($form['structured_data_site_logo_custom']['#file']);
  // file_usage_add($file, 'structured_data', 'site_logo', $user->uid);
}


