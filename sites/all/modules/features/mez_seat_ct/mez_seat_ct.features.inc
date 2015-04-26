<?php
/**
 * @file
 * mez_seat_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_seat_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mez_seat_ct_node_info() {
  $items = array(
    'seat' => array(
      'name' => t('Seat'),
      'base' => 'node_content',
      'description' => t('A seat in a concert hall'),
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
