<?php
/**
 * @file
 * iq_settings.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function iq_settings_filter_default_formats() {
  $formats = array();

  // Exported format: CKEditor.
  $formats['ckeditor'] = array(
    'format' => 'ckeditor',
    'name' => 'CKEditor',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <strike> <u> <sup> <sub> <table> <tr> <td> <thead> <tbody> <hr>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'interlink_node' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'node_types' => array(
            'issue' => 'issue',
            'documentation' => 0,
            'news' => 0,
            'project' => 0,
          ),
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
