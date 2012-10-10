<?php
/**
 * @file
 * panels_ref_formatter_test.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panels_ref_formatter_test_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function panels_ref_formatter_test_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
