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
    'name' => 'square_thumbnail',
    'label' => 'Square thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Arányos átméretezés és méretre vágás',
        'help' => 'Az arányos átméretezés és kivágás megtartja a képarányt és azt követően kivágja a képet a hosszabbik oldal alapján. Ez a legáltalánosabban használt hatás négyzet alakú bélyegképek létrehozására anélkül, hogy a kép el lenne nyújtva.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
