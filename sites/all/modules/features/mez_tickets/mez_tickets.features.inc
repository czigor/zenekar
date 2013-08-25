<?php
/**
 * @file
 * mez_tickets.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function mez_tickets_commerce_product_default_types() {
  $items = array(
    'ticket' => array(
      'type' => 'ticket',
      'name' => 'Ticket',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_tickets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mez_tickets_node_info() {
  $items = array(
    'concert_hall' => array(
      'name' => t('Concert hall'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
    'seat' => array(
      'name' => t('Seat'),
      'base' => 'node_content',
      'description' => t('A seat in a concert hall'),
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
  );
  return $items;
}
