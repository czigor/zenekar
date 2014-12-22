<?php
/**
 * @file
 * iq_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iq_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_multi';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_multi';
  $view->human_name = 'Search Multi';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Keresés';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'search_api_multi';
  $handler->display->display_options['row_options']['view_mode'] = array(
    'comment' => 'teaser',
    'node' => 'teaser',
  );
  /* Viselkedés, ha nincs eredmény: Általános: Szűretlen szöveg */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No search results found for given criteria.';
  /* Mező: Keresés: CommentIndex results */
  $handler->display->display_options['fields']['commentindex']['id'] = 'commentindex';
  $handler->display->display_options['fields']['commentindex']['table'] = 'search_api_multi';
  $handler->display->display_options['fields']['commentindex']['field'] = 'commentindex';
  $handler->display->display_options['fields']['commentindex']['label'] = '';
  $handler->display->display_options['fields']['commentindex']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commentindex']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['commentindex']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['commentindex']['display'] = 'view';
  $handler->display->display_options['fields']['commentindex']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['commentindex']['bypass_access'] = 0;
  /* Mező: Keresés: ContentIndex results */
  $handler->display->display_options['fields']['contentindex']['id'] = 'contentindex';
  $handler->display->display_options['fields']['contentindex']['table'] = 'search_api_multi';
  $handler->display->display_options['fields']['contentindex']['field'] = 'contentindex';
  $handler->display->display_options['fields']['contentindex']['label'] = '';
  $handler->display->display_options['fields']['contentindex']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contentindex']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['contentindex']['display'] = 'view';
  $handler->display->display_options['fields']['contentindex']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['contentindex']['bypass_access'] = 0;
  /* Rendezési szempont: Keresés: Relevancia */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_multi';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Szűrési feltétel: Multi Search: Szerző */
  $handler->display->display_options['filters']['search_api_multi_author']['id'] = 'search_api_multi_author';
  $handler->display->display_options['filters']['search_api_multi_author']['table'] = 'search_api_multi';
  $handler->display->display_options['filters']['search_api_multi_author']['field'] = 'search_api_multi_author';
  $handler->display->display_options['filters']['search_api_multi_author']['value'] = 'All';
  $handler->display->display_options['filters']['search_api_multi_author']['group'] = 1;
  $handler->display->display_options['filters']['search_api_multi_author']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['search_api_multi_author']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['search_api_multi_author']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['search_api_multi_author']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_multi_author']['author_fields'] = array(
    'commentindex:author:uid' => 'commentindex:author:uid',
    'contentindex:author' => 'contentindex:author',
  );
  /* Szűrési feltétel: Multi Search: Tartalomtípus */
  $handler->display->display_options['filters']['search_api_multi_node_type']['id'] = 'search_api_multi_node_type';
  $handler->display->display_options['filters']['search_api_multi_node_type']['table'] = 'search_api_multi';
  $handler->display->display_options['filters']['search_api_multi_node_type']['field'] = 'search_api_multi_node_type';
  $handler->display->display_options['filters']['search_api_multi_node_type']['value'] = 'All';
  $handler->display->display_options['filters']['search_api_multi_node_type']['group'] = 1;
  $handler->display->display_options['filters']['search_api_multi_node_type']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['search_api_multi_node_type']['expose']['label'] = 'Node type';
  $handler->display->display_options['filters']['search_api_multi_node_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_multi_node_type']['node_type_fields'] = array(
    'commentindex:node:type' => 'commentindex:node:type',
    'contentindex:type' => 'contentindex:type',
  );
  /* Szűrési feltétel: Multi Search: Project */
  $handler->display->display_options['filters']['search_api_multi_project']['id'] = 'search_api_multi_project';
  $handler->display->display_options['filters']['search_api_multi_project']['table'] = 'search_api_multi';
  $handler->display->display_options['filters']['search_api_multi_project']['field'] = 'search_api_multi_project';
  $handler->display->display_options['filters']['search_api_multi_project']['value'] = 'All';
  $handler->display->display_options['filters']['search_api_multi_project']['group'] = 1;
  $handler->display->display_options['filters']['search_api_multi_project']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['search_api_multi_project']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['search_api_multi_project']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_multi_project']['project_fields'] = array(
    'commentindex:node:og_group_ref' => 'commentindex:node:og_group_ref',
    'contentindex:og_group_ref' => 'contentindex:og_group_ref',
  );
  /* Szűrési feltétel: Keresés: Fulltext search */
  $handler->display->display_options['filters']['search_api_multi_fulltext']['id'] = 'search_api_multi_fulltext';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['table'] = 'search_api_multi';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['field'] = 'search_api_multi_fulltext';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_multi_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['operator_id'] = 'search_api_multi_fulltext_op';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['operator'] = 'search_api_multi_fulltext_op';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['identifier'] = 'search_api_multi_fulltext';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_multi_fulltext']['fields'] = array(
    'commentindex:field_issue_comment_body:value' => 'commentindex:field_issue_comment_body:value',
    'contentindex:title' => 'contentindex:title',
    'contentindex:field_project_body:value' => 'contentindex:field_project_body:value',
    'contentindex:field_issue_description:value' => 'contentindex:field_issue_description:value',
    'contentindex:field_documentation_body:value' => 'contentindex:field_documentation_body:value',
    'contentindex:field_news_body:value' => 'contentindex:field_news_body:value',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Search';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['search_multi'] = $view;

  return $export;
}
