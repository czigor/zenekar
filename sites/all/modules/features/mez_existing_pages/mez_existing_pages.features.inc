<?php
/**
 * @file
 * mez_existing_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_existing_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "pm_existing_pages" && $api == "pm_existing_pages") {
    return array("version" => "1");
  }
}
