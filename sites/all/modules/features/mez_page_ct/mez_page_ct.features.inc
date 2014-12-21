<?php
/**
 * @file
 * mez_page_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_page_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mez_page_ct_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Oldal'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
