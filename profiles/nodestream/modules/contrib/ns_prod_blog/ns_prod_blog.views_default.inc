<?php
/**
 * @file
 * ns_prod_blog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ns_prod_blog_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ns_prod_blog_blog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ns_prod_blog_blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All blogs';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'blog';
  $handler->display->display_options['row_plugin'] = 'panels_ref_formatter_row';
  $handler->display->display_options['row_options']['mini_panel'] = 'ns_prod_blog_teaser';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no blogs available.';
  $handler->display->display_options['empty']['area']['format'] = 'html_editor';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ns_blog_image']['id'] = 'field_ns_blog_image';
  $handler->display->display_options['fields']['field_ns_blog_image']['table'] = 'field_data_field_ns_blog_image';
  $handler->display->display_options['fields']['field_ns_blog_image']['field'] = 'field_ns_blog_image';
  $handler->display->display_options['fields']['field_ns_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_ns_blog_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ns_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_blog_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ns_blog_image']['settings'] = array(
    'image_style' => 'ns_blog_preview',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ns_blog_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
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
  $handler->display->display_options['fields']['title']['element_class'] = 'blog-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_ns_blog_description_short']['id'] = 'field_ns_blog_description_short';
  $handler->display->display_options['fields']['field_ns_blog_description_short']['table'] = 'field_data_field_ns_blog_description_short';
  $handler->display->display_options['fields']['field_ns_blog_description_short']['field'] = 'field_ns_blog_description_short';
  $handler->display->display_options['fields']['field_ns_blog_description_short']['label'] = '';
  $handler->display->display_options['fields']['field_ns_blog_description_short']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ns_blog_description_short']['element_class'] = 'blog-short-description';
  $handler->display->display_options['fields']['field_ns_blog_description_short']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_description_short']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
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
  $handler->display->display_options['fields']['view_node']['text'] = 'read more';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'ns_blog' => 'ns_blog',
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

  /* Display: Blog preview large */
  $handler = $view->new_display('panel_pane', 'Blog preview large', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Blog preview large';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['ns_prod_blog_blog'] = array(
    t('Master'),
    t('All blogs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('There are no blogs available.'),
    t('Translations'),
    t('read more'),
    t('Blog preview large'),
    t('View panes'),
  );
  $export['ns_prod_blog_blog'] = $view;

  $view = new view;
  $view->name = 'ns_prod_blog_post';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ns_prod_blog_post';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'post';
  $handler->display->display_options['row_plugin'] = 'panels_ref_formatter_row';
  $handler->display->display_options['row_options']['mini_panel'] = 'ns_prod_blog_teaser_large';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no blog posts available.';
  $handler->display->display_options['empty']['area']['format'] = 'html_editor';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Published: [created]';
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
  $handler->display->display_options['fields']['created']['element_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_class'] = 'post-published';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j, Y';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['text'] = 'Updated: [changed]';
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_type'] = 'span';
  $handler->display->display_options['fields']['changed']['element_class'] = 'post-updated';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'F j, Y';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
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
  $handler->display->display_options['fields']['title']['element_class'] = 'post-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_ns_blog_post_media']['id'] = 'field_ns_blog_post_media';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['table'] = 'field_data_field_ns_blog_post_media';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['field'] = 'field_ns_blog_post_media';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['label'] = '';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['element_class'] = 'post-image';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['settings'] = array(
    'file_view_mode' => 'ns_styles_grid_22',
  );
  $handler->display->display_options['fields']['field_ns_blog_post_media']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_ns_blog_post_body']['id'] = 'field_ns_blog_post_body';
  $handler->display->display_options['fields']['field_ns_blog_post_body']['table'] = 'field_data_field_ns_blog_post_body';
  $handler->display->display_options['fields']['field_ns_blog_post_body']['field'] = 'field_ns_blog_post_body';
  $handler->display->display_options['fields']['field_ns_blog_post_body']['label'] = '';
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['field_api_classes'] = 0;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['path'] = 'node/[nid]#comments';
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count']['element_type'] = 'div';
  $handler->display->display_options['fields']['comment_count']['element_class'] = 'post-comment-count';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['comment_count']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = 1;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Blog (field_ns_blog_post_blog) */
  $handler->display->display_options['arguments']['field_ns_blog_post_blog_target_id']['id'] = 'field_ns_blog_post_blog_target_id';
  $handler->display->display_options['arguments']['field_ns_blog_post_blog_target_id']['table'] = 'field_data_field_ns_blog_post_blog';
  $handler->display->display_options['arguments']['field_ns_blog_post_blog_target_id']['field'] = 'field_ns_blog_post_blog_target_id';
  $handler->display->display_options['arguments']['field_ns_blog_post_blog_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ns_blog_post_blog_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_ns_blog_post_blog_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ns_blog_post_blog_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ns_blog_post_blog_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ns_blog_post_blog_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_ns_blog_post_blog_target_id']['not'] = 0;
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
    'ns_blog_post' => 'ns_blog_post',
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
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['language']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['language']['expose']['multiple'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Blog posts';
  $handler->display->display_options['argument_input'] = array(
    'field_ns_blog_post_blog_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Blog (field_ns_blog_post_blog:target_id)',
    ),
  );
  $translatables['ns_prod_blog_post'] = array(
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
    t('There are no blog posts available.'),
    t('Translations'),
    t('Published: [created]'),
    t('Updated: [changed]'),
    t('node/[nid]#comments'),
    t('.'),
    t(','),
    t('All'),
    t('Language'),
    t('Content pane'),
    t('Blog posts'),
    t('View panes'),
  );
  $export['ns_prod_blog_post'] = $view;

  $view = new view;
  $view->name = 'ns_prod_blog_post_contributor';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ns_prod_blog_post_contributor';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blog post Bloggers';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'blog-contributor';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_ns_blog_post_blogger_nid']['id'] = 'field_ns_blog_post_blogger_nid';
  $handler->display->display_options['relationships']['field_ns_blog_post_blogger_nid']['table'] = 'field_data_field_ns_blog_post_blogger';
  $handler->display->display_options['relationships']['field_ns_blog_post_blogger_nid']['field'] = 'field_ns_blog_post_blogger_nid';
  $handler->display->display_options['relationships']['field_ns_blog_post_blogger_nid']['required'] = 0;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_ns_contributor_photo']['id'] = 'field_ns_contributor_photo';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['table'] = 'field_data_field_ns_contributor_photo';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['field'] = 'field_ns_contributor_photo';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['relationship'] = 'field_ns_blog_post_blogger_nid';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['label'] = '';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['element_class'] = 'photo';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['settings'] = array(
    'image_style' => 'grid-6',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ns_contributor_photo']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_ns_blog_post_blogger_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
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
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_ns_contributor_email']['id'] = 'field_ns_contributor_email';
  $handler->display->display_options['fields']['field_ns_contributor_email']['table'] = 'field_data_field_ns_contributor_email';
  $handler->display->display_options['fields']['field_ns_contributor_email']['field'] = 'field_ns_contributor_email';
  $handler->display->display_options['fields']['field_ns_contributor_email']['relationship'] = 'field_ns_blog_post_blogger_nid';
  $handler->display->display_options['fields']['field_ns_contributor_email']['label'] = '';
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['path'] = 'mailto:[field_ns_contributor_email-value]';
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ns_contributor_email']['element_class'] = 'email';
  $handler->display->display_options['fields']['field_ns_contributor_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_contributor_email']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_email']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_ns_contributor_email']['field_api_classes'] = 0;
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_ns_contributor_about']['id'] = 'field_ns_contributor_about';
  $handler->display->display_options['fields']['field_ns_contributor_about']['table'] = 'field_data_field_ns_contributor_about';
  $handler->display->display_options['fields']['field_ns_contributor_about']['field'] = 'field_ns_contributor_about';
  $handler->display->display_options['fields']['field_ns_contributor_about']['relationship'] = 'field_ns_blog_post_blogger_nid';
  $handler->display->display_options['fields']['field_ns_contributor_about']['label'] = '';
  $handler->display->display_options['fields']['field_ns_contributor_about']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_contributor_about']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_contributor_about']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_ns_contributor_about']['element_label_class'] = 'about';
  $handler->display->display_options['fields']['field_ns_contributor_about']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_contributor_about']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_about']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_ns_blog_post_blogger_nid';
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'ns_blog_post' => 'ns_blog_post',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_ns_blog_post_blogger_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_ns_blog_post_blogger_nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ns_contributor' => 'ns_contributor',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['ns_prod_blog_post_contributor'] = array(
    t('Master'),
    t('Blog post Bloggers'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_ns_blog_post_blogger_nid'),
    t('mailto:[field_ns_contributor_email-value]'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['ns_prod_blog_post_contributor'] = $view;

  $view = new view;
  $view->name = 'ns_prod_blog_post_latest';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ns_prod_blog_post_latest';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest blog posts';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'post clearfix';
  $handler->display->display_options['row_plugin'] = 'panels_ref_formatter_row';
  $handler->display->display_options['row_options']['mini_panel'] = 'ns_prod_blog_post';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
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
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_ns_blog_post_media']['id'] = 'field_ns_blog_post_media';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['table'] = 'field_data_field_ns_blog_post_media';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['field'] = 'field_ns_blog_post_media';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['label'] = '';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['settings'] = array(
    'file_view_mode' => 'ns_styles_grid_10',
  );
  $handler->display->display_options['fields']['field_ns_blog_post_media']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ns_blog_post_media']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_media']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'post-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_ns_blog_post_blog_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
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
  $handler->display->display_options['fields']['title_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'post-blog';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_ns_blog_post_body']['id'] = 'field_ns_blog_post_body';
  $handler->display->display_options['fields']['field_ns_blog_post_body']['table'] = 'field_data_field_ns_blog_post_body';
  $handler->display->display_options['fields']['field_ns_blog_post_body']['field'] = 'field_ns_blog_post_body';
  $handler->display->display_options['fields']['field_ns_blog_post_body']['label'] = '';
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ns_blog_post_body']['element_class'] = 'post-body';
  $handler->display->display_options['fields']['field_ns_blog_post_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_body']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
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
  $handler->display->display_options['fields']['view_node']['text'] = 'read more';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['path'] = 'node/[nid]#comments';
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count']['element_type'] = 'div';
  $handler->display->display_options['fields']['comment_count']['element_class'] = 'post-comment-count';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = 1;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = 1;
  $handler->display->display_options['fields']['comment_count']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = 1;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'ns_blog_post' => 'ns_blog_post',
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
  $handler->display->display_options['pane_title'] = 'Latest blogs';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['ns_prod_blog_post_latest'] = array(
    t('Master'),
    t('Latest blog posts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Translations'),
    t('read more'),
    t('node/[nid]#comments'),
    t('.'),
    t(','),
    t('All'),
    t('Content pane'),
    t('Latest blogs'),
    t('View panes'),
  );
  $export['ns_prod_blog_post_latest'] = $view;

  $view = new view;
  $view->name = 'ns_prod_blog_post_latest_header';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ns_prod_blog_post_latest_header';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_ns_blog_blogger_target_id']['id'] = 'field_ns_blog_blogger_target_id';
  $handler->display->display_options['relationships']['field_ns_blog_blogger_target_id']['table'] = 'field_data_field_ns_blog_blogger';
  $handler->display->display_options['relationships']['field_ns_blog_blogger_target_id']['field'] = 'field_ns_blog_blogger_target_id';
  $handler->display->display_options['relationships']['field_ns_blog_blogger_target_id']['required'] = 0;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_ns_contributor_photo']['id'] = 'field_ns_contributor_photo';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['table'] = 'field_data_field_ns_contributor_photo';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['field'] = 'field_ns_contributor_photo';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['relationship'] = 'field_ns_blog_blogger_target_id';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['label'] = '';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['element_class'] = 'contributor-photo';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_contributor_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ns_contributor_photo']['settings'] = array(
    'image_style' => 'ns_latest_blog_post_header',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ns_contributor_photo']['field_api_classes'] = 0;
  /* Field: Content: Blog */
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['id'] = 'field_ns_blog_post_blog';
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['table'] = 'field_data_field_ns_blog_post_blog';
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['field'] = 'field_ns_blog_post_blog';
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['label'] = '';
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['max_length'] = '26';
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['element_class'] = 'blog-title';
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ns_blog_post_blog']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '28';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'blog-post-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
    'ns_blog_post' => 'ns_blog_post',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Latest blog entry for header';
  $translatables['ns_prod_blog_post_latest_header'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_ns_blog_blogger_target_id'),
    t('Content pane'),
    t('Latest blog entry for header'),
    t('View panes'),
  );
  $export['ns_prod_blog_post_latest_header'] = $view;

  return $export;
}
