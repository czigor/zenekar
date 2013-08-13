<?php
/**
 * @file
 * mez_cts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_cts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function mez_cts_image_default_styles() {
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

/**
 * Implements hook_node_info().
 */
function mez_cts_node_info() {
  $items = array(
    'composer' => array(
      'name' => t('Composer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'concert' => array(
      'name' => t('Concert'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Oldal'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Person'),
      'has_title' => '1',
      'title_label' => t('Név'),
      'help' => '',
    ),
    'piece' => array(
      'name' => t('Piece'),
      'base' => 'node_content',
      'description' => t('A piece played on a concert.'),
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
  );
  return $items;
}
