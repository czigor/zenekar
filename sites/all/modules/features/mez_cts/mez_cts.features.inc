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
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
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
    'composer' => array(
      'name' => t('Composer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
    'concert' => array(
      'name' => t('Concert'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Oldal'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Person'),
      'has_title' => '1',
      'title_label' => t('Név'),
      'help' => '',
    ),
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
