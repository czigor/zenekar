<?php
/**
 * @file
 * mez_person_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_person_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mez_person_ct_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Person'),
      'has_title' => '1',
      'title_label' => t('Név'),
      'help' => '',
    ),
  );
  return $items;
}
