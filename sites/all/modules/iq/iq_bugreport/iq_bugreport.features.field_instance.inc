<?php
/**
 * @file
 * iq_bugreport.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function iq_bugreport_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-bugreport-field_bugreport_details'
  $field_instances['entityform-bugreport-field_bugreport_details'] = array(
    'bundle' => 'bugreport',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please provide as much info about the related details as you can to help us fix the bug.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_bugreport_details',
    'label' => 'Details',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-bugreport-field_bugreport_reporter_email'
  $field_instances['entityform-bugreport-field_bugreport_reporter_email'] = array(
    'bundle' => 'bugreport',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your email for receiving feedback from IssueQ developers.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_bugreport_reporter_email',
    'label' => 'Your email',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-bugreport-field_bugreport_reporter_name'
  $field_instances['entityform-bugreport-field_bugreport_reporter_name'] = array(
    'bundle' => 'bugreport',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_bugreport_reporter_name',
    'label' => 'Your name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-bugreport-field_bugreport_reproduce'
  $field_instances['entityform-bugreport-field_bugreport_reproduce'] = array(
    'bundle' => 'bugreport',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please describe the steps that lead to the bug, ie. what did you do right before you ran into the bug? If we cannot reproduce the bug, then probably we cannot fix it.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_bugreport_reproduce',
    'label' => 'How to reproduce the bug',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-bugreport-field_bugreport_url'
  $field_instances['entityform-bugreport-field_bugreport_url'] = array(
    'bundle' => 'bugreport',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The URL of the bug.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_bugreport_url',
    'label' => 'URL',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Details');
  t('How to reproduce the bug');
  t('Please describe the steps that lead to the bug, ie. what did you do right before you ran into the bug? If we cannot reproduce the bug, then probably we cannot fix it.');
  t('Please provide as much info about the related details as you can to help us fix the bug.');
  t('The URL of the bug.');
  t('URL');
  t('Your email');
  t('Your email for receiving feedback from IssueQ developers.');
  t('Your name');

  return $field_instances;
}
