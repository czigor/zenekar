<?php
/**
 * @file
 * mez_media_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mez_media_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mez_audio';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MEZ Audio';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kapcsolat: Tartalom: Media (field_media:fid) */
  $handler->display->display_options['relationships']['field_media_fid']['id'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['table'] = 'field_data_field_media';
  $handler->display->display_options['relationships']['field_media_fid']['field'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['label'] = 'media';
  $handler->display->display_options['relationships']['field_media_fid']['required'] = TRUE;
  /* Mező: Fájl: Rendered Fájl */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_media_fid';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'colorbox';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Rendezési szempont: Tartalom: Media (field_media:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_media';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Szövegkörnyezeti szűrő: Tartalom: Tartalom azonosító */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Minden';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'concert' => 'concert',
    'news' => 'news',
    'page' => 'page',
  );
  /* Szűrési feltétel: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Szűrési feltétel: Fájl: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_media_fid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
  );
  $export['mez_audio'] = $view;

  $view = new view();
  $view->name = 'mez_document';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MEZ Document';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kapcsolat: Tartalom: Media (field_media:fid) */
  $handler->display->display_options['relationships']['field_media_fid']['id'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['table'] = 'field_data_field_media';
  $handler->display->display_options['relationships']['field_media_fid']['field'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['label'] = 'media';
  $handler->display->display_options['relationships']['field_media_fid']['required'] = TRUE;
  /* Mező: Fájl: Rendered Fájl */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_media_fid';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'colorbox';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Rendezési szempont: Tartalom: Media (field_media:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_media';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Szövegkörnyezeti szűrő: Tartalom: Tartalom azonosító */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Minden';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'concert' => 'concert',
    'news' => 'news',
    'page' => 'page',
  );
  /* Szűrési feltétel: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Szűrési feltétel: Fájl: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_media_fid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $export['mez_document'] = $view;

  $view = new view();
  $view->name = 'mez_image';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MEZ Image';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kapcsolat: Tartalom: Media (field_media:fid) */
  $handler->display->display_options['relationships']['field_media_fid']['id'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['table'] = 'field_data_field_media';
  $handler->display->display_options['relationships']['field_media_fid']['field'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['label'] = 'media';
  $handler->display->display_options['relationships']['field_media_fid']['required'] = TRUE;
  /* Mező: Fájl: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['relationship'] = 'field_media_fid';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'colorbox';
  /* Rendezési szempont: Tartalom: Media (field_media:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_media';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Szövegkörnyezeti szűrő: Tartalom: Tartalom azonosító */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Minden';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'concert' => 'concert',
    'news' => 'news',
    'page' => 'page',
  );
  /* Szűrési feltétel: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Szűrési feltétel: Fájl: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_media_fid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  $export['mez_image'] = $view;

  $view = new view();
  $view->name = 'mez_video';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MEZ Video';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kapcsolat: Tartalom: Media (field_media:fid) */
  $handler->display->display_options['relationships']['field_media_fid']['id'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['table'] = 'field_data_field_media';
  $handler->display->display_options['relationships']['field_media_fid']['field'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['label'] = 'media';
  $handler->display->display_options['relationships']['field_media_fid']['required'] = TRUE;
  /* Mező: Fájl: Rendered Fájl */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_media_fid';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'colorbox';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Rendezési szempont: Tartalom: Media (field_media:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_media';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Szövegkörnyezeti szűrő: Tartalom: Tartalom azonosító */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Minden';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'concert' => 'concert',
    'news' => 'news',
    'page' => 'page',
  );
  /* Szűrési feltétel: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Szűrési feltétel: Fájl: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_media_fid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  $export['mez_video'] = $view;

  return $export;
}
