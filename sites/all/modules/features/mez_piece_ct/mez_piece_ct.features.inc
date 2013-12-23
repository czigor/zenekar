<?php
/**
 * @file
 * mez_piece_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_piece_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mez_piece_ct_node_info() {
  $items = array(
    'piece' => array(
      'name' => t('Piece'),
      'base' => 'node_content',
      'description' => t('A piece played on a concert.'),
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
  );
  return $items;
}
