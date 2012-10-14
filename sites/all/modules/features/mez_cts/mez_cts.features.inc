<?php
/**
 * @file
 * mez_cts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_cts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mez_cts_node_info() {
  $items = array(
    'member' => array(
      'name' => t('Member'),
      'base' => 'node_content',
      'description' => t('Member of the orchestra'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
