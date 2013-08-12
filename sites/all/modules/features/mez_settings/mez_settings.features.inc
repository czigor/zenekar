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
    'name' => 'colorbox',
    'effects' => array(
      1 => array(
        'label' => 'Aránytartó méretezés',
        'help' => 'Arányos átméretezés esetén az eredeti kép oldalarányai megmaradnak. Ha csak a szélesség, vagy a magasság van megadva, akkor a másik automatikusan lesz kiszámolva.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
