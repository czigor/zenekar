<?php
/**
 * @file
 * mez_ticket_product.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function mez_ticket_product_commerce_product_default_types() {
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
