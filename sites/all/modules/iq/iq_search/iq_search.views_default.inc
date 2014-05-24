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
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'search_api_multi';
  $handler->display->display_options['row_options']['view_mode'] = array(
    'comment' => 'teaser',
    'node' => 'teaser',
  );
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No search results found for given criteria.';
  /* Field: Search: CommentIndex results */
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
  /* Field: Search: ContentIndex results */
  $handler->display->display_options['fields']['contentindex']['id'] = 'contentindex';
  $handler->display->display_options['fields']['contentindex']['table'] = 'search_api_multi';
  $handler->display->display_options['fields']['contentindex']['field'] = 'contentindex';
  $handler->display->display_options['fields']['contentindex']['label'] = '';
  $handler->display->display_options['fields']['contentindex']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contentindex']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['contentindex']['display'] = 'view';
  $handler->display->display_options['fields']['contentindex']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['contentindex']['bypass_access'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_multi';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Multi Search: Author */
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
  /* Filter criterion: Multi Search: Node type */
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
  /* Filter criterion: Multi Search: Project */
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
  /* Filter criterion: Search: Fulltext search */
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
  $translatables['search_multi'] = array(
    t('Master'),
    t('Search'),
    t('more'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No search results found for given criteria.'),
    t('Author'),
    t('Node type'),
    t('Project'),
    t('Page'),
  );
  $export['search_multi'] = $view;

  return $export;
}
