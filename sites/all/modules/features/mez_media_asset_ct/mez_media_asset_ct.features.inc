<?php
/**
 * @file
 * mez_media_asset_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_media_asset_ct_ctools_plugin_api($module = NULL, $api = NULL) {
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
function mez_media_asset_ct_node_info() {
  $items = array(
    'media_asset' => array(
      'name' => t('Media asset'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
