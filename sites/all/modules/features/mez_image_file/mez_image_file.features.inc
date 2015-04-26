<?php
/**
 * @file
 * mez_image_file.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_image_file_ctools_plugin_api($module = NULL, $api = NULL) {
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

/**
 * Implements hook_image_default_styles().
 */
function mez_image_file_image_default_styles() {
  $styles = array();

  // Exported image style: square_thumbnail.
  $styles['square_thumbnail'] = array(
    'label' => 'Square thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
