<?php
/**
 * @file
 * mez_concerts_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mez_concerts_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'concerts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Concerts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Koncertek';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'sexy_exposed';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmazás';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Mező: Tartalom: Media */
  $handler->display->display_options['fields']['field_media']['id'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['table'] = 'field_data_field_media';
  $handler->display->display_options['fields']['field_media']['field'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['label'] = '';
  $handler->display->display_options['fields']['field_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_media']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_media']['delta_offset'] = '0';
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Mező: Mező: Time */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['label'] = 'Dátum';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Mező: Tartalom: Programme */
  $handler->display->display_options['fields']['field_programme']['id'] = 'field_programme';
  $handler->display->display_options['fields']['field_programme']['table'] = 'field_data_field_programme';
  $handler->display->display_options['fields']['field_programme']['field'] = 'field_programme';
  $handler->display->display_options['fields']['field_programme']['label'] = 'Műsor';
  $handler->display->display_options['fields']['field_programme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_programme']['type'] = 'field_collection_one_field';
  $handler->display->display_options['fields']['field_programme']['settings'] = array(
    'field_name' => 'field_piece',
  );
  $handler->display->display_options['fields']['field_programme']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_programme']['multi_type'] = 'ol';
  $handler->display->display_options['fields']['field_programme']['separator'] = '<>';
  /* Rendezési szempont: Mező: Time -  kezdődátum (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['order'] = 'DESC';
  /* Szűrési feltétel: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Szűrési feltétel: Tartalom: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'concert' => 'concert',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'sexy_exposed';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmazás';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['exposed_form']['options']['sexy'] = array(
    'field_composer_target_id' => array(
      'needs_sexy_love' => 1,
      'sexy_number' => '0',
      'sexy_width' => '0',
    ),
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Kapcsolat: Tartalom: Programme (field_programme) */
  $handler->display->display_options['relationships']['field_programme_value']['id'] = 'field_programme_value';
  $handler->display->display_options['relationships']['field_programme_value']['table'] = 'field_data_field_programme';
  $handler->display->display_options['relationships']['field_programme_value']['field'] = 'field_programme_value';
  $handler->display->display_options['relationships']['field_programme_value']['delta'] = '-1';
  /* Kapcsolat: Entity Reference: Hivatkozott entitás */
  $handler->display->display_options['relationships']['field_piece_target_id']['id'] = 'field_piece_target_id';
  $handler->display->display_options['relationships']['field_piece_target_id']['table'] = 'field_data_field_piece';
  $handler->display->display_options['relationships']['field_piece_target_id']['field'] = 'field_piece_target_id';
  $handler->display->display_options['relationships']['field_piece_target_id']['relationship'] = 'field_programme_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Szűrési feltétel: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Szűrési feltétel: Tartalom: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'concert' => 'concert',
  );
  /* Szűrési feltétel: Mező: Time -  kezdődátum (field_time) */
  $handler->display->display_options['filters']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['filters']['field_time_value']['field'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_value']['expose']['operator_id'] = 'field_time_value_op';
  $handler->display->display_options['filters']['field_time_value']['expose']['label'] = 'Time';
  $handler->display->display_options['filters']['field_time_value']['expose']['operator'] = 'field_time_value_op';
  $handler->display->display_options['filters']['field_time_value']['expose']['identifier'] = 'field_time_value';
  $handler->display->display_options['filters']['field_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_time_value']['form_type'] = 'date_text';
  /* Szűrési feltétel: Tartalom: Composer (field_composer) */
  $handler->display->display_options['filters']['field_composer_target_id']['id'] = 'field_composer_target_id';
  $handler->display->display_options['filters']['field_composer_target_id']['table'] = 'field_data_field_composer';
  $handler->display->display_options['filters']['field_composer_target_id']['field'] = 'field_composer_target_id';
  $handler->display->display_options['filters']['field_composer_target_id']['relationship'] = 'field_piece_target_id';
  $handler->display->display_options['filters']['field_composer_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_composer_target_id']['expose']['operator_id'] = 'field_composer_target_id_op';
  $handler->display->display_options['filters']['field_composer_target_id']['expose']['label'] = 'Composer';
  $handler->display->display_options['filters']['field_composer_target_id']['expose']['operator'] = 'field_composer_target_id_op';
  $handler->display->display_options['filters']['field_composer_target_id']['expose']['identifier'] = 'field_composer_target_id';
  $handler->display->display_options['filters']['field_composer_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_composer_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'concerts';

  /* Display: Tartalomtábla */
  $handler = $view->new_display('panel_pane', 'Tartalomtábla', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 1;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_time|field_time_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['row_options']['alternating_fieldset']['alternating'] = TRUE;
  $handler->display->display_options['row_options']['alternating_fieldset']['item_1'] = 'short_teaser';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_2'] = 'short_teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
  $export['concerts'] = $view;

  return $export;
}
