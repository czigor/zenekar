<?php
/**
 * @file
 * iq_cts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iq_cts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
