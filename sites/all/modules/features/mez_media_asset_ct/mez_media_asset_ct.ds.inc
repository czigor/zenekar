<?php
/**
 * @file
 * mez_media_asset_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mez_media_asset_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|media_asset|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'media_asset';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_day_date' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|media_asset|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mez_media_asset_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_asset|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_asset';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title_field',
        1 => 'body',
        2 => 'field_media',
        3 => 'field_day_date',
        4 => 'field_tags',
      ),
    ),
    'fields' => array(
      'title_field' => 'central',
      'body' => 'central',
      'field_media' => 'central',
      'field_day_date' => 'central',
      'field_tags' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|media_asset|full'] = $ds_layout;

  return $export;
}
