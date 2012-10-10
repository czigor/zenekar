<?php

/**
 * @file
 * Views plugin definitions.
 */

/**
 * Implements hook_views_plugins().
 */
function dynamic_formatters_views_plugins() {
  $path = drupal_get_path('module', 'dynamic_formatters');
  return array(
    'style' => array(
      'dynamic_formatters_style' => array(
        'title' => t('Dynamic style'),
        'help' => t('Renders dynamic rows one after another.'),
        'handler' => 'dynamic_formatters_plugin_style',
        'path' => $path . '/views/plugins',
        'theme' => 'dynamic_formatters_style',
        'theme file' => 'dynamic_formatters.theme.inc',
        'theme path' => $path . '/theme',
        // We don't really use fields, we just use them to fetch grouping fields.
        'uses fields' => TRUE,
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'uses grouping' => TRUE,
        'type' => 'normal',
      ),
    ),
    'row' => array(
      'dynamic_formatters_row' => array(
        'title' => t('Dynamic row'),
        'help' => t('Display a row with a dynamic formatters preset.'),
        'handler' => 'dynamic_formatters_plugin_row',
        'path' => $path . '/views/plugins',
        'base' => array('node'), // @todo support more base tables.
        'uses options' => TRUE,
        'uses fields' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}

