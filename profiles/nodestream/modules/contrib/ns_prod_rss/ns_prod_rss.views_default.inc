<?php
/**
 * @file
 * ns_prod_rss.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ns_prod_rss_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ns_prod_rss_promo_admin_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'RSS Promo Admin List';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'edit_term' => 'edit_term',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_term' => array(
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
  $handler->display->display_options['header']['area']['content'] = '<a href="admin/structure/taxonomy/ns_prod_rss_topic/add?destination=admin/content/rss-topic-list">Create topic</a>';
  $handler->display->display_options['header']['area']['format'] = 'ns_prod_rss_format';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'You haven\'t created any topics yet. <a href="admin/structure/taxonomy/ns_prod_rss_topic/add?destination=admin/content/rss-topic-list">Create topics here.</a>';
  $handler->display->display_options['empty']['area']['format'] = 'ns_prod_rss_format';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 1;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_term']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_term']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_term']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_term']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_term']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_term']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_term']['hide_alter_empty'] = 0;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'Edit RSS promos';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'Order RSS Promos';
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['path'] = 'admin/content/rss-topic-editor/[tid]';
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ns_prod_rss_topic' => 'ns_prod_rss_topic',
  );

  /* Display: RSS Topic List */
  $handler = $view->new_display('panel_pane', 'RSS Topic List', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'RSS Feed';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['ns_prod_rss_promo_admin_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="admin/structure/taxonomy/ns_prod_rss_topic/add?destination=admin/content/rss-topic-list">Create topic</a>'),
    t('You haven\'t created any topics yet. <a href="admin/structure/taxonomy/ns_prod_rss_topic/add?destination=admin/content/rss-topic-list">Create topics here.</a>'),
    t('Name'),
    t('Edit'),
    t('Edit RSS promos'),
    t('Order RSS Promos'),
    t('admin/content/rss-topic-editor/[tid]'),
    t('.'),
    t(','),
    t('RSS Topic List'),
    t('RSS Feed'),
  );
  $export['ns_prod_rss_promo_admin_list'] = $view;

  $view = new view;
  $view->name = 'ns_prod_rss_topic';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ns_prod_rss_topic';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Rss Topic no result';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There was no RSS Promos in this RSS Promo Channel';
  $handler->display->display_options['empty']['area']['format'] = 'html_editor';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ns_prod_rss_promo_article_target_id']['id'] = 'field_ns_prod_rss_promo_article_target_id';
  $handler->display->display_options['relationships']['field_ns_prod_rss_promo_article_target_id']['table'] = 'field_data_field_ns_prod_rss_promo_article';
  $handler->display->display_options['relationships']['field_ns_prod_rss_promo_article_target_id']['field'] = 'field_ns_prod_rss_promo_article_target_id';
  $handler->display->display_options['relationships']['field_ns_prod_rss_promo_article_target_id']['label'] = 'article';
  $handler->display->display_options['relationships']['field_ns_prod_rss_promo_article_target_id']['required'] = 0;
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_ns_prod_rss_promo_article_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['id'] = 'field_ns_prod_rss_promo_image';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['table'] = 'field_data_field_ns_prod_rss_promo_image';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['field'] = 'field_ns_prod_rss_promo_image';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['label'] = '';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_image']['hide_alter_empty'] = 0;
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
  /* Field: Content: Kicker */
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['id'] = 'field_ns_prod_rss_promo_kicker';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['table'] = 'field_data_field_ns_prod_rss_promo_kicker';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['field'] = 'field_ns_prod_rss_promo_kicker';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['label'] = '';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['element_class'] = 'promo-kicker';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['field_api_classes'] = 0;
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['id'] = 'field_ns_prod_rss_promo_lead';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['table'] = 'field_data_field_ns_prod_rss_promo_lead';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['field'] = 'field_ns_prod_rss_promo_lead';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['element_class'] = 'promo-lead';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_ns_prod_rss_promo_article_nid';
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'ns_prod_rss_topic:panel_pane_2';
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
  $handler->display->display_options['arguments']['tid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['tid']['title'] = '%1';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_ns_prod_rss_promo_article_target_id';
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

  /* Display: Topic editor */
  $handler = $view->new_display('panel_pane', 'Topic editor', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'nid' => 'nid',
    'field_ns_prod_rss_topic' => 'field_ns_prod_rss_topic',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ns_prod_rss_topic' => array(
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
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Rss Topic no result';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no RSS Promos for the <em>%1</em> RSS Promo Channel.
<br><a href="/node/add/ns-prod-rss-promo">Create RSS promo</a>
';
  $handler->display->display_options['empty']['area']['format'] = 'ns_prod_rss_format';
  $handler->display->display_options['empty']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Entity label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['label']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['label']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['label']['alter']['external'] = 0;
  $handler->display->display_options['fields']['label']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['label']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['label']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['label']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['label']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['label']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['label']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['label']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['label']['alter']['html'] = 0;
  $handler->display->display_options['fields']['label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['label']['element_class'] = 'title';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['label']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['label']['hide_empty'] = 0;
  $handler->display->display_options['fields']['label']['empty_zero'] = 0;
  $handler->display->display_options['fields']['label']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['label']['link_to_entity'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_ns_prod_rss_promo_article_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['id'] = 'field_ns_prod_rss_topic';
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['table'] = 'field_data_field_ns_prod_rss_topic';
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['field'] = 'field_ns_prod_rss_topic';
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_topic']['field_api_classes'] = 0;
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
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['draggableviews']['hide_empty'] = 0;
  $handler->display->display_options['fields']['draggableviews']['empty_zero'] = 0;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = 0;
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
  );

  /* Display: Topic Feed */
  $handler = $view->new_display('feed', 'Topic Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => '',
        'language' => '',
        'category' => '',
        'image' => '',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'label',
        'link' => 'path',
        'description' => 'nothing',
        'author' => 'title_1',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_ns_prod_rss_promo_article_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Kicker */
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['id'] = 'field_ns_prod_rss_promo_kicker';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['table'] = 'field_data_field_ns_prod_rss_promo_kicker';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['field'] = 'field_ns_prod_rss_promo_kicker';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['label'] = '';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['element_class'] = 'promo-kicker';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_kicker']['field_api_classes'] = 0;
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['id'] = 'field_ns_prod_rss_promo_lead';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['table'] = 'field_data_field_ns_prod_rss_promo_lead';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['field'] = 'field_ns_prod_rss_promo_lead';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['element_class'] = 'promo-lead';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_ns_prod_rss_promo_lead']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[created]
<p><strong>[field_ns_prod_rss_promo_kicker]</strong> [field_ns_prod_rss_promo_lead]</p>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_ns_article_byline_nid';
  $handler->display->display_options['fields']['title_1']['label'] = 'Author';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_ns_prod_rss_promo_article_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['path']['absolute'] = 1;
  /* Field: Content: Entity label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['label']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['label']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['label']['alter']['external'] = 0;
  $handler->display->display_options['fields']['label']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['label']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['label']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['label']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['label']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['label']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['label']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['label']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['label']['alter']['html'] = 0;
  $handler->display->display_options['fields']['label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['label']['element_class'] = 'title';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['label']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['label']['hide_empty'] = 0;
  $handler->display->display_options['fields']['label']['empty_zero'] = 0;
  $handler->display->display_options['fields']['label']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['label']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'feed/%/rss.xml';
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['ns_prod_rss_topic'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Rss Topic no result'),
    t('There was no RSS Promos in this RSS Promo Channel'),
    t('article'),
    t('Translations'),
    t('node/[nid]'),
    t('Read more'),
    t('Post date'),
    t('All'),
    t('%1'),
    t('Topic editor'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('There are no RSS Promos for the <em>%1</em> RSS Promo Channel.
<br><a href="/node/add/ns-prod-rss-promo">Create RSS promo</a>
'),
    t('Topic'),
    t('Operations'),
    t('Delete'),
    t('Content'),
    t('View panes'),
    t('Topic Feed'),
    t('[created]
<p><strong>[field_ns_prod_rss_promo_kicker]</strong> [field_ns_prod_rss_promo_lead]</p>'),
    t('Author'),
  );
  $export['ns_prod_rss_topic'] = $view;

  $view = new view;
  $view->name = 'ns_prod_rss_topic_footer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'ns_prod_rss_topic_footer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'RSS - News direct to you';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'feed/[tid]/rss.xml';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_class'] = 'rss-feed-title';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ns_prod_rss_topic' => 'ns_prod_rss_topic',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['ns_prod_rss_topic_footer'] = array(
    t('Master'),
    t('RSS - News direct to you'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('.'),
    t(','),
    t('feed/[tid]/rss.xml'),
    t('Content pane'),
    t('View panes'),
  );
  $export['ns_prod_rss_topic_footer'] = $view;

  return $export;
}
