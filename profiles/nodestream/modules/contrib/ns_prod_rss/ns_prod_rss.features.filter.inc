<?php
/**
 * @file
 * ns_prod_rss.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ns_prod_rss_filter_default_formats() {
  $formats = array();

  // Exported format: RSS config.
  $formats['ns_prod_rss_format'] = array(
    'format' => 'ns_prod_rss_format',
    'name' => 'RSS config',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'pathologic' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(
          'local_paths' => '',
          'protocol_style' => 'full',
          'absolute' => 0,
        ),
      ),
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
    ),
  );

  return $formats;
}
