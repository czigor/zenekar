<?php

/**
 * @file
 * Views plugin definitions.
 */

/**
 * Implements hook_views_plugins().
 */
function panels_ref_formatter_views_plugins() {
  $path = drupal_get_path('module', 'panels_ref_formatter');
  return array(
    'row' => array(
      'panels_ref_formatter_row' => array(
        'title' => t('Mini panel'),
        'help' => t('Display a row with a mini panel.'),
        'handler' => 'panels_ref_formatter_plugin_row',
        'path' => $path . '/views/plugins',
        'base' => array('node'), // @todo support more base tables.
        'uses options' => TRUE,
        'uses fields' => FALSE,
        'type' => 'normal',
      ),
    ),
  );
}

