<?php
/**
 * @file
 * mez_concert_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mez_concert_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|concert|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'concert';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_programme' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
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
  );
  $export['node|concert|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|concert|mez_frontpage';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'concert';
  $ds_fieldsetting->view_mode = 'mez_frontpage';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => 'div',
        'class' => 'btn btn-primary btn-lg',
        'ft' => array(),
      ),
    ),
  );
  $export['node|concert|mez_frontpage'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|concert|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'concert';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_media' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|concert|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mez_concert_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_programme|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_programme';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_piece',
      ),
    ),
    'fields' => array(
      'field_piece' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_programme|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_programme|piece';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_programme';
  $ds_layout->view_mode = 'piece';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_piece',
      ),
    ),
    'fields' => array(
      'field_piece' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_programme|piece'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|concert|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'concert';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_4_8';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'regions' => array(
      'left' => array(
        0 => 'mez_concert_shopping_cart',
        1 => 'mez_concert_bank_info',
      ),
      'right' => array(
        0 => 'title_field',
        1 => 'field_time',
        2 => 'body',
        3 => 'field_ticket_selling',
        4 => 'field_programme',
        5 => 'field_media',
        6 => 'field_location_reference',
      ),
    ),
    'fields' => array(
      'mez_concert_shopping_cart' => 'left',
      'mez_concert_bank_info' => 'left',
      'title_field' => 'right',
      'field_time' => 'right',
      'body' => 'right',
      'field_ticket_selling' => 'right',
      'field_programme' => 'right',
      'field_media' => 'right',
      'field_location_reference' => 'right',
    ),
  );
  $export['node|concert|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|concert|mez_frontpage';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'concert';
  $ds_layout->view_mode = 'mez_frontpage';
  $ds_layout->layout = 'bootstrap_4_8';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_media',
      ),
      'right' => array(
        1 => 'title_field',
        2 => 'field_time',
        3 => 'body',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_media' => 'left',
      'title_field' => 'right',
      'field_time' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'limit' => array(
      'field_media' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|concert|mez_frontpage'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|concert|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'concert';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_time',
        2 => 'field_media',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_time' => 'ds_content',
      'field_media' => 'ds_content',
    ),
    'limit' => array(
      'field_media' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|concert|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function mez_concert_ct_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'mez_frontpage';
  $ds_view_mode->label = 'Frontpage';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['mez_frontpage'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'piece';
  $ds_view_mode->label = 'Piece';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['piece'] = $ds_view_mode;

  return $export;
}
