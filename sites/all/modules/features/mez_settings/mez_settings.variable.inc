<?php
/**
 * @file
 * mez_settings.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function mez_settings_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['en'] = array(
  'site_name' => 'Budapest Technical University Orchestra',
  'site_slogan' => '',
);
  $realm_variables['language']['hu'] = array(
  'site_name' => 'Műegyetemi Zenekar',
  'site_slogan' => '',
);

return $realm_variables;
}
