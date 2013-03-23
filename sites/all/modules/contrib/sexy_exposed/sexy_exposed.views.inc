<?php

/**
 * @file
 *
 * Adds Views3 exposed plugin.
 */

/**
 * Implements hook_views_plugins().
 */
function sexy_exposed_views_plugins() {
  return array(
    'exposed_form' => array(
      'sexy_exposed' => array(
        'title' => t('Sexy Exposed'),
        'help' => t('Use some jQuery magic to make this filter sexy.'),
        'handler' => 'sexy_exposed_exposed_form_plugin',
        'uses row plugin' => FALSE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'parent' => 'basic',
      ),
    ),
  );
}

