<?php
/**
 * @file
 * Expose Flippy variables to the Variable module.
 * See https://drupal.org/project/variable
 *
 * The main benefit of going through the Variable module
 * is the support for translating variable values.
 */

/**
 * Implements hook_variable_group_info().
 */
function flippy_variable_group_info() {
  $groups['flippy'] = array(
    'title' => t('Flippy'),
    'description' => t('Flippy settings'),
    'access' => 'administer content types',
  );
  return $groups;
}

/**
 * Implements hook_variable_info().
 */
function flippy_variable_info($options) {
  $variable['flippy_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Pager', array(), $options),
    'description' => t('Build a pager for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'boolean',
      'default' => FALSE,
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_head_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Add semantic previous and next links to the document HEAD', array(), $options),
    'description' => t('Add semantic previous and next links to the document HEAD for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'boolean',
      'default' => FALSE,
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_show_empty_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Show empty links', array(), $options),
    'description' => t('Show empty links for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'boolean',
      'default' => TRUE,
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_prev_label_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Previous link label', array(), $options),
    'description' => t('Label for "Previous" link for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'string',
      'default' => t('Previous', array(), $options),
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_next_label_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Next link label', array(), $options),
    'description' => t('Label for "Next" link for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'string',
      'default' => t('Next', array(), $options),
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_firstlast_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Show first/last links', array(), $options),
    'description' => t('Show first/last links for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'boolean',
      'default' => FALSE,
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_first_label_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Label for "First" link', array(), $options),
    'description' => t('Label for "First" link for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'string',
      'default' => t('First', array(), $options),
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_last_label_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Label for "Last" link', array(), $options),
    'description' => t('Label for "Last" link for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'string',
      'default' => t('Last', array(), $options),
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_loop_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Loop through nodes', array(), $options),
    'description' => t('Loop through nodes for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'boolean',
      'default' => FALSE,
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_random_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Show random link', array(), $options),
    'description' => t('Show random link for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'boolean',
      'default' => FALSE,
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_random_label_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Label for "Random" link', array(), $options),
    'description' => t('Label for "Random" link for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'string',
      'default' => t('Random', array(), $options),
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_truncate_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Truncate label length', array(), $options),
    'description' => t('Optionally provide a maximum amount length that link labels can be. Labels will be shortened to this length if they exceed the amount of characters (for this content type).', array(), $options),
    'repeat' => array(
      'type' => 'string',
      'default' => NULL,
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_ellipse_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Truncate ellipse', array(), $options),
    'description' => t('If a maximum label length is set above, an ellipse can be provided here which will be appended to the label after it is shortened (for this content type).', array(), $options),
    'repeat' => array(
      'type' => 'string',
      'default' => t('...', array(), $options),
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_custom_sorting_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Sort the pager by something other than ascending post date', array(), $options),
    'description' => t('Sort the pager by something other than ascending post date for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'boolean',
      'default' => FALSE,
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  // Allow certain base table properties for sorting
  $sort_options = _flippy_sorting_properties();
  // Also allow some entity fields
  $content_types = field_info_instances('node');
  foreach ($content_types as $content_type) {
    foreach ($content_type as $sort_field) {
      $field_info = field_info_field($sort_field['field_name']);
      if (isset($field_info['columns']) && isset($field_info['columns']['value'])) {
        // only allow fields that have a 'value' column
        $sort_options[$sort_field['field_name']] = $sort_field['label'];
      }
    }
  }
  $variable['flippy_sort_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Select a field for sorting the pager', array(), $options),
    'description' => t('Select a field for sorting the pager for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'select',
      'options' => $sort_options,
      'default' => 'created',
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  $variable['flippy_order_[node_type]'] = array(
    'type' => 'multiple',
    'title' => t('Select a direction to order the pager', array(), $options),
    'description' => t('Select a direction to order the pager for this content type.', array(), $options),
    'repeat' => array(
      'type' => 'select',
      'options' => array('ASC' => 'Ascending', 'DESC' => 'Descending'),
      'default' => 'ASC',
    ),
    'localize' => TRUE,
    'group' => 'flippy',
  );
  return $variable;
}
