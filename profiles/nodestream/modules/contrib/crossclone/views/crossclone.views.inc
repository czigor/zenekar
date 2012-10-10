<?php

/**
 * @file
 * handler definitions for views.
 */

/**
 * Implements hook_views_data().
 */
function crossclone_views_data() {
  $data['node']['crossclone_clone'] = array(
    'field' => array(
      'title' => t('Crossclone: Clone node'),
      'help' => t('Display a clone node link.'),
      'handler' => 'crossclone_views_handler_field_node_clone',
    ),
  );
  return $data;
}

/**
 * Implements hook_views_handlers().
 */
function crossclone_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'crossclone') . '/views',
    ),
    'handlers' => array(
      'crossclone_views_handler_field_node_clone' => array(
        'parent' => 'views_handler_field_node_link',
      ),
    ),
  );
}
