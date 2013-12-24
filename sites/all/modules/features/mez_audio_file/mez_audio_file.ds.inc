<?php
/**
 * @file
 * mez_audio_file.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function mez_audio_file_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|audio|colorbox';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'audio';
  $ds_layout->view_mode = 'colorbox';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'file',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'file' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['file|audio|colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|audio|full';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'audio';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_day_date',
        2 => 'file',
        3 => 'description_field',
        4 => 'field_pieces',
        5 => 'field_tags',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_day_date' => 'ds_content',
      'file' => 'ds_content',
      'description_field' => 'ds_content',
      'field_pieces' => 'ds_content',
      'field_tags' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['file|audio|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|audio|preview';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'audio';
  $ds_layout->view_mode = 'preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'file',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'file' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['file|audio|preview'] = $ds_layout;

  return $export;
}
