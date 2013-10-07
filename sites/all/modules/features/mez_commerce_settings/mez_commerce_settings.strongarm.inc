<?php
/**
 * @file
 * mez_commerce_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mez_commerce_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_order_account_pane_auth_display';
  $strongarm->value = 0;
  $export['commerce_order_account_pane_auth_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_order_account_pane_mail_double_entry';
  $strongarm->value = 1;
  $export['commerce_order_account_pane_mail_double_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_payment_pane_require_method';
  $strongarm->value = 1;
  $export['commerce_payment_pane_require_method'] = $strongarm;

  return $export;
}
