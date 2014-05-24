<?php
/**
 * @file
 * iq_flags.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function iq_flags_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_default_flag_status';
  $strongarm->value = array(
    'subscription_to_node_type' => FALSE,
    'subscription_to_node' => TRUE,
    'subscription_to_all' => FALSE,
    'og_subscription_to_node_type' => FALSE,
  );
  $export['flag_default_flag_status'] = $strongarm;

  return $export;
}
