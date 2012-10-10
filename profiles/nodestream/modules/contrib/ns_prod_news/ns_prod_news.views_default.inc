<?php
/**
 * @file
 * ns_prod_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ns_prod_news_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ns_prod_news_ad';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ns_prod_news_ad';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Advertisement';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'ad-text';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_ns_ad_link']['id'] = 'field_ns_ad_link';
  $handler->display->display_options['fields']['field_ns_ad_link']['table'] = 'field_data_field_ns_ad_link';
  $handler->display->display_options['fields']['field_ns_ad_link']['field'] = 'field_ns_ad_link';
  $handler->display->display_options['fields']['field_ns_ad_link']['label'] = '';
  $handler->display->display_options['fields']['field_ns_ad_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['text'] = '[field_ns_ad_media] ';
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['path'] = '[field_ns_ad_link-url]';
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ns_ad_link']['element_class'] = 'ad';
  $handler->display->display_options['fields']['field_ns_ad_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_ad_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_link']['hide_alter_empty'] = 0;
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_ns_ad_media']['id'] = 'field_ns_ad_media';
  $handler->display->display_options['fields']['field_ns_ad_media']['table'] = 'field_data_field_ns_ad_media';
  $handler->display->display_options['fields']['field_ns_ad_media']['field'] = 'field_ns_ad_media';
  $handler->display->display_options['fields']['field_ns_ad_media']['label'] = '';
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['path'] = '[field_ns_ad_link]';
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_ad_media']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_ad_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ns_ad_media']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_ns_ad_media']['settings'] = array(
    'file_view_mode' => 'ns_styles_grid_13',
  );
  $handler->display->display_options['fields']['field_ns_ad_media']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'ns_prod_news_topic' => 'ns_prod_news_topic',
    'ns_ch_rss_topic' => 0,
    'ns_prod_news_topic_region' => 0,
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ns_ad' => 'ns_ad',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );
  $translatables['ns_prod_news_ad'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advertisement'),
    t('[field_ns_ad_media] '),
    t('[field_ns_ad_link-url]'),
    t('_blank'),
    t('[field_ns_ad_link]'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['ns_prod_news_ad'] = $view;

  $view = new view;
  $view->name = 'ns_prod_news_article_polls';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_revision';
  $view->human_name = 'ns_prod_news_article_polls';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view revisions';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'field_ns_poll_ns_article_poll_nid';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_ns_poll_ns_article_poll_nid']['id'] = 'field_ns_poll_ns_article_poll_nid';
  $handler->display->display_options['relationships']['field_ns_poll_ns_article_poll_nid']['table'] = 'field_revision_field_ns_poll_ns_article_poll';
  $handler->display->display_options['relationships']['field_ns_poll_ns_article_poll_nid']['field'] = 'field_ns_poll_ns_article_poll_nid';
  $handler->display->display_options['relationships']['field_ns_poll_ns_article_poll_nid']['label'] = 'polls';
  $handler->display->display_options['relationships']['field_ns_poll_ns_article_poll_nid']['required'] = 1;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Contextual filter: Content revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['vid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['vid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['vid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_ns_poll_ns_article_poll_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Article polls */
  $handler = $view->new_display('panel_pane', 'Article polls', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
    'vid' => array(
      'type' => 'context',
      'context' => 'entity:node.vid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content revision: Vid',
    ),
  );
  $translatables['ns_prod_news_article_polls'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('polls'),
    t('All'),
    t('Article polls'),
    t('View panes'),
  );
  $export['ns_prod_news_article_polls'] = $view;

  $view = new view;
  $view->name = 'ns_prod_news_article_promos';
  $view->description = '';
  $view->tag = 'ns_prod_news';
  $view->base_table = 'node';
  $view->human_name = 'ns_prod_news_article_promos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit own ns_prod_news_promo content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'status' => 'status',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<a href="node/add/ns-ch-web-promo">Create new promo</a>';
  $handler->display->display_options['header']['area']['format'] = 'html_editor';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No promos has been attached to this article';
  $handler->display->display_options['empty']['area']['format'] = 'html_editor';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Article (field_ns_prod_news_promo_article) */
  $handler->display->display_options['arguments']['field_ns_prod_news_promo_article_target_id']['id'] = 'field_ns_prod_news_promo_article_target_id';
  $handler->display->display_options['arguments']['field_ns_prod_news_promo_article_target_id']['table'] = 'field_data_field_ns_prod_news_promo_article';
  $handler->display->display_options['arguments']['field_ns_prod_news_promo_article_target_id']['field'] = 'field_ns_prod_news_promo_article_target_id';
  $handler->display->display_options['arguments']['field_ns_prod_news_promo_article_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_ns_prod_news_promo_article_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ns_prod_news_promo_article_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_ns_prod_news_promo_article_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ns_prod_news_promo_article_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ns_prod_news_promo_article_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ns_prod_news_promo_article_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_ns_prod_news_promo_article_target_id']['not'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ns_prod_news_promo' => 'ns_prod_news_promo',
  );

  /* Display: Article promos */
  $handler = $view->new_display('panel_pane', 'Article promos', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_ns_prod_news_promo_article_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Article (field_ns_prod_news_promo_article:target_id)',
    ),
  );
  $translatables['ns_prod_news_article_promos'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<a href="node/add/ns-ch-web-promo">Create new promo</a>'),
    t('No promos has been attached to this article'),
    t('Published'),
    t('Operations'),
    t('Delete'),
    t('All'),
    t('Article promos'),
    t('View panes'),
  );
  $export['ns_prod_news_article_promos'] = $view;

  $view = new view;
  $view->name = 'ns_prod_news_footer_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ns_prod_news_footer_content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'footer-content grid-12';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_ns_footer_content_body']['id'] = 'field_ns_footer_content_body';
  $handler->display->display_options['fields']['field_ns_footer_content_body']['table'] = 'field_data_field_ns_footer_content_body';
  $handler->display->display_options['fields']['field_ns_footer_content_body']['field'] = 'field_ns_footer_content_body';
  $handler->display->display_options['fields']['field_ns_footer_content_body']['label'] = '';
  $handler->display->display_options['fields']['field_ns_footer_content_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_footer_content_body']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ns_footer_content' => 'ns_footer_content',
  );
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['ns_prod_news_footer_content'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Translations'),
    t('Content pane'),
    t('View panes'),
  );
  $export['ns_prod_news_footer_content'] = $view;

  $view = new view;
  $view->name = 'ns_prod_news_topic';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ns_prod_news_topic';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'dynamic_formatters_style';
  $handler->display->display_options['style_options']['grouping'] = 'parent';
  $handler->display->display_options['style_options']['dynamic_grouping'] = 1;
  $handler->display->display_options['style_options']['parent'] = 'nid';
  $handler->display->display_options['row_plugin'] = 'dynamic_formatters_row';
  $handler->display->display_options['row_options']['preset_name'] = 'ns_prod_news_left_attachment_left_attachment_two_col';
  $handler->display->display_options['row_options']['preset_field'] = 'field_ns_prod_news_promo_style';
  $handler->display->display_options['row_options']['preset_options'] = array(
    'parent' => array(
      'tid' => array(
        'id' => 'term',
      ),
      'uuid' => array(
        'id' => 'entity_uuid:taxonomy_term',
      ),
    ),
    'child' => array(
      'tid' => array(
        'id' => 'term',
      ),
      'uuid' => array(
        'id' => 'entity_uuid:taxonomy_term',
      ),
    ),
  );
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_ns_prod_news_promo_article_target_id']['id'] = 'field_ns_prod_news_promo_article_target_id';
  $handler->display->display_options['relationships']['field_ns_prod_news_promo_article_target_id']['table'] = 'field_data_field_ns_prod_news_promo_article';
  $handler->display->display_options['relationships']['field_ns_prod_news_promo_article_target_id']['field'] = 'field_ns_prod_news_promo_article_target_id';
  $handler->display->display_options['relationships']['field_ns_prod_news_promo_article_target_id']['label'] = 'article';
  $handler->display->display_options['relationships']['field_ns_prod_news_promo_article_target_id']['required'] = 0;
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = 1;
  /* Relationship: Content: Region (field_ns_prod_news_region) */
  $handler->display->display_options['relationships']['field_ns_prod_news_region_tid']['id'] = 'field_ns_prod_news_region_tid';
  $handler->display->display_options['relationships']['field_ns_prod_news_region_tid']['table'] = 'field_data_field_ns_prod_news_region';
  $handler->display->display_options['relationships']['field_ns_prod_news_region_tid']['field'] = 'field_ns_prod_news_region_tid';
  $handler->display->display_options['relationships']['field_ns_prod_news_region_tid']['required'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_ns_prod_news_promo_article_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['id'] = 'field_ns_prod_news_promo_style';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['table'] = 'field_data_field_ns_prod_news_promo_style';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['field'] = 'field_ns_prod_news_promo_style';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['label'] = '';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['hide_alter_empty'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value1']['id'] = 'value1';
  $handler->display->display_options['fields']['value1']['table'] = 'draggableviews_structure_node1';
  $handler->display->display_options['fields']['value1']['field'] = 'value1';
  $handler->display->display_options['fields']['value1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['value1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value1']['hide_alter_empty'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['id'] = 'field_ns_prod_news_promo_media';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['table'] = 'field_data_field_ns_prod_news_promo_media';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['field'] = 'field_ns_prod_news_promo_media';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['label'] = '';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['hide_alter_empty'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'promo-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['id'] = 'field_ns_prod_news_promo_kicker';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['table'] = 'field_data_field_ns_prod_news_promo_kicker';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['field'] = 'field_ns_prod_news_promo_kicker';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['label'] = '';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['element_class'] = 'promo-kicker';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_kicker']['hide_alter_empty'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['id'] = 'field_ns_prod_news_promo_lead';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['table'] = 'field_data_field_ns_prod_news_promo_lead';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['field'] = 'field_ns_prod_news_promo_lead';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['element_class'] = 'promo-lead';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_lead']['hide_alter_empty'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_ns_prod_news_promo_article_nid';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_type'] = 'span';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'read-more';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'ns_prod_news_topic:panel_pane_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_ns_prod_news_region_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uuid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['glossary'] = 0;
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['arguments']['uuid']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['uuid']['break_phrase'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_ns_prod_news_promo_article_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Topic Listing */
  $handler = $view->new_display('panel_pane', 'Topic Listing', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['id'] = 'field_ns_prod_news_promo_style';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['table'] = 'field_data_field_ns_prod_news_promo_style';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['field'] = 'field_ns_prod_news_promo_style';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['label'] = '';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_style']['hide_alter_empty'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Draggableviews: Parent */
  $handler->display->display_options['fields']['parent']['id'] = 'parent';
  $handler->display->display_options['fields']['parent']['table'] = 'draggableviews_structure';
  $handler->display->display_options['fields']['parent']['field'] = 'parent';
  $handler->display->display_options['fields']['parent']['label'] = '';
  $handler->display->display_options['fields']['parent']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['parent']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['parent']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['parent']['alter']['external'] = 0;
  $handler->display->display_options['fields']['parent']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['parent']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['parent']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['parent']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['parent']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['parent']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['parent']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['parent']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['parent']['alter']['html'] = 0;
  $handler->display->display_options['fields']['parent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['parent']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['parent']['hide_empty'] = 0;
  $handler->display->display_options['fields']['parent']['empty_zero'] = 0;
  $handler->display->display_options['fields']['parent']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['parent']['format_plural'] = 0;
  $handler->display->display_options['pane_title'] = 'Topic Listing';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID',
    ),
    'uuid' => array(
      'type' => 'user',
      'context' => 'entity:taxonomy_term.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Region',
    ),
  );

  /* Display: Topic editor */
  $handler = $view->new_display('panel_pane', 'Topic editor', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ns_prod_news_promo_media' => 'field_ns_prod_news_promo_media',
    'field_ns_prod_news_topic' => 'field_ns_prod_news_topic',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'value0' => 'value0',
    'value1' => 'value1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ns_prod_news_promo_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ns_prod_news_topic' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value0' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Headline';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'promo-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['id'] = 'field_ns_prod_news_promo_media';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['table'] = 'field_data_field_ns_prod_news_promo_media';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['field'] = 'field_ns_prod_news_promo_media';
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_promo_media']['hide_alter_empty'] = 0;
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['id'] = 'field_ns_prod_news_topic';
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['table'] = 'field_data_field_ns_prod_news_topic';
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['field'] = 'field_ns_prod_news_topic';
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['label'] = 'Topics';
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_news_topic']['field_api_classes'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit promo';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_alter_empty'] = 0;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['draggableviews']['hide_empty'] = 0;
  $handler->display->display_options['fields']['draggableviews']['empty_zero'] = 0;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['hierarchy_handler'] = 'draggableviews_hierarchy_handler_native';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
    'uuid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Taxonomy term UUID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['ns_prod_news_topic'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('article'),
    t('Translations'),
    t('term from field_ns_prod_news_region'),
    t('Broken handler draggableviews_structure_node1.value1'),
    t('node/[nid]'),
    t('Read more'),
    t('All'),
    t('Topic Listing'),
    t('.'),
    t(','),
    t('View panes'),
    t('Topic editor'),
    t('Headline'),
    t('Broken handler field_data_field_ns_prod_news_promo_media.field_ns_prod_news_promo_media'),
    t('Topics'),
    t('Operations'),
    t('Edit promo'),
    t('Delete'),
  );
  $export['ns_prod_news_topic'] = $view;

  return $export;
}
