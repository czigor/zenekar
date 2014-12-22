<?php
/**
 * @file
 * mez_videos_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mez_videos_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Videók';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmazás';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'file_managed|timestamp';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_0'] = 'preview';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_1'] = 'short_teaser';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_2'] = 'short_teaser';
  /* Mező: Fájl: Név */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  /* Rendezési szempont: Fájl: Dátum (field_day_date) */
  $handler->display->display_options['sorts']['field_day_date_value']['id'] = 'field_day_date_value';
  $handler->display->display_options['sorts']['field_day_date_value']['table'] = 'field_data_field_day_date';
  $handler->display->display_options['sorts']['field_day_date_value']['field'] = 'field_day_date_value';
  $handler->display->display_options['sorts']['field_day_date_value']['order'] = 'DESC';
  /* Szűrési feltétel: Fájl: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmazás';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'file_managed|timestamp';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_0'] = 'preview';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_1'] = 'preview';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_2'] = 'preview';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Szűrési feltétel: Fájl: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Szűrési feltétel: Mező: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'media';
  /* Szűrési feltétel: Mező: Concert (field_concert) */
  $handler->display->display_options['filters']['field_concert_target_id']['id'] = 'field_concert_target_id';
  $handler->display->display_options['filters']['field_concert_target_id']['table'] = 'field_data_field_concert';
  $handler->display->display_options['filters']['field_concert_target_id']['field'] = 'field_concert_target_id';
  $handler->display->display_options['filters']['field_concert_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_concert_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_concert_target_id']['expose']['operator_id'] = 'field_concert_target_id_op';
  $handler->display->display_options['filters']['field_concert_target_id']['expose']['label'] = 'Concert';
  $handler->display->display_options['filters']['field_concert_target_id']['expose']['operator'] = 'field_concert_target_id_op';
  $handler->display->display_options['filters']['field_concert_target_id']['expose']['identifier'] = 'field_concert_target_id';
  $handler->display->display_options['filters']['field_concert_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_concert_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Szűrési feltétel: Fájl: Pieces (field_pieces) */
  $handler->display->display_options['filters']['field_pieces_target_id']['id'] = 'field_pieces_target_id';
  $handler->display->display_options['filters']['field_pieces_target_id']['table'] = 'field_data_field_pieces';
  $handler->display->display_options['filters']['field_pieces_target_id']['field'] = 'field_pieces_target_id';
  $handler->display->display_options['filters']['field_pieces_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_pieces_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pieces_target_id']['expose']['operator_id'] = 'field_pieces_target_id_op';
  $handler->display->display_options['filters']['field_pieces_target_id']['expose']['label'] = 'Pieces';
  $handler->display->display_options['filters']['field_pieces_target_id']['expose']['operator'] = 'field_pieces_target_id_op';
  $handler->display->display_options['filters']['field_pieces_target_id']['expose']['identifier'] = 'field_pieces_target_id';
  $handler->display->display_options['filters']['field_pieces_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_pieces_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Szűrési feltétel: Mező: Location (field_location_reference) */
  $handler->display->display_options['filters']['field_location_reference_target_id']['id'] = 'field_location_reference_target_id';
  $handler->display->display_options['filters']['field_location_reference_target_id']['table'] = 'field_data_field_location_reference';
  $handler->display->display_options['filters']['field_location_reference_target_id']['field'] = 'field_location_reference_target_id';
  $handler->display->display_options['filters']['field_location_reference_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_location_reference_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_reference_target_id']['expose']['operator_id'] = 'field_location_reference_target_id_op';
  $handler->display->display_options['filters']['field_location_reference_target_id']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_location_reference_target_id']['expose']['operator'] = 'field_location_reference_target_id_op';
  $handler->display->display_options['filters']['field_location_reference_target_id']['expose']['identifier'] = 'field_location_reference_target_id';
  $handler->display->display_options['filters']['field_location_reference_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_reference_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Szűrési feltétel: Fájl: Dátum (field_day_date) */
  $handler->display->display_options['filters']['field_day_date_value']['id'] = 'field_day_date_value';
  $handler->display->display_options['filters']['field_day_date_value']['table'] = 'field_data_field_day_date';
  $handler->display->display_options['filters']['field_day_date_value']['field'] = 'field_day_date_value';
  $handler->display->display_options['filters']['field_day_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_day_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_day_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_day_date_value']['expose']['operator_id'] = 'field_day_date_value_op';
  $handler->display->display_options['filters']['field_day_date_value']['expose']['label'] = 'Dátum';
  $handler->display->display_options['filters']['field_day_date_value']['expose']['operator'] = 'field_day_date_value_op';
  $handler->display->display_options['filters']['field_day_date_value']['expose']['identifier'] = 'field_day_date_value';
  $handler->display->display_options['filters']['field_day_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_day_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['path'] = 'videos';
  $export['videos'] = $view;

  return $export;
}
