<?php
/**
 * @file
 * mez_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function mez_settings_image_default_styles() {
  $styles = array();

  // Exported image style: colorbox.
  $styles['colorbox'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'colorbox',
  );

  return $styles;
}
