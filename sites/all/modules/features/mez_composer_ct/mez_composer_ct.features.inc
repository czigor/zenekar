<?php
/**
 * @file
 * mez_composer_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_composer_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mez_composer_ct_node_info() {
  $items = array(
    'composer' => array(
      'name' => t('Composer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
