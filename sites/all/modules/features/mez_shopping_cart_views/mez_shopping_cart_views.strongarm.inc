<?php
/**
 * @file
 * mez_shopping_cart_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mez_shopping_cart_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_cart_contents_pane_view';
  $strongarm->value = 'mez_shopping_cart_summary|default';
  $export['commerce_cart_contents_pane_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_cart_view_override_page_view';
  $strongarm->value = 'commerce_cart_form_mez';
  $export['commerce_cart_view_override_page_view'] = $strongarm;

  return $export;
}
