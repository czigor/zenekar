<?php
/**
 * @file
 * mez_commerce_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_commerce_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
