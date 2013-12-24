<?php
/**
 * @file
 * mez_audio_file.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_audio_file_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
