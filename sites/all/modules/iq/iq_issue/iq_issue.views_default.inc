<?php
/**
 * @file
 * iq_issue.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iq_issue_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'comments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Comments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Comments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'title' => 'title',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'cid' => 'cid',
    'created' => 'created',
    'seconds' => 'seconds',
    'status' => 'status',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'cid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'seconds' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No comments found.';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid]: [title]';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Comment: ID */
  $handler->display->display_options['fields']['cid']['id'] = 'cid';
  $handler->display->display_options['fields']['cid']['table'] = 'comment';
  $handler->display->display_options['fields']['cid']['field'] = 'cid';
  $handler->display->display_options['fields']['cid']['label'] = '';
  $handler->display->display_options['fields']['cid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cid']['link_to_comment'] = FALSE;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Submitted';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[nid_1]#comment-[cid]';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Comment: Time */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_comment';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  /* Field: Comment: Time status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'comment_timer_comment';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Billable';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'project';
  $handler->display->display_options['filters']['nid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['nid']['group_info']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['group_info']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['nid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Comment: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'comment';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Submitted between';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'date';
  $handler->display->display_options['filters']['created']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Comment: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'comment';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'author';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Comment: Time status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'comment_timer_comment';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = 'All';
  $handler->display->display_options['filters']['status_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status_1']['expose']['label'] = 'Billable';
  $handler->display->display_options['filters']['status_1']['expose']['operator'] = 'status_1_op';
  $handler->display->display_options['filters']['status_1']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'comments';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Comments';
  $handler->display->display_options['menu']['name'] = 'user-menu';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'comments-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid]: [title]';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Comment: ID */
  $handler->display->display_options['fields']['cid']['id'] = 'cid';
  $handler->display->display_options['fields']['cid']['table'] = 'comment';
  $handler->display->display_options['fields']['cid']['field'] = 'cid';
  $handler->display->display_options['fields']['cid']['label'] = '';
  $handler->display->display_options['fields']['cid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cid']['link_to_comment'] = FALSE;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Submitted';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[nid_1]#comment-[cid]';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Comment: Time */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_comment';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  /* Field: Comment: Time */
  $handler->display->display_options['fields']['seconds_1']['id'] = 'seconds_1';
  $handler->display->display_options['fields']['seconds_1']['table'] = 'comment_timer_comment';
  $handler->display->display_options['fields']['seconds_1']['field'] = 'seconds';
  $handler->display->display_options['fields']['seconds_1']['label'] = 'Seconds';
  $handler->display->display_options['fields']['seconds_1']['separator'] = '';
  $handler->display->display_options['fields']['seconds_1']['comment_timer_seconds'] = 1;
  /* Field: Comment: Time status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'comment_timer_comment';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Billable';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['path'] = 'comments/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['comments'] = array(
    t('Master'),
    t('Comments'),
    t('more'),
    t('Apply'),
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
    t('No comments found.'),
    t('Content'),
    t('OG membership from node'),
    t('Group node from OG membership'),
    t('Project'),
    t('Issue'),
    t('#[nid]: [title]'),
    t('Submitted'),
    t('Time'),
    t('.'),
    t(','),
    t('Billable'),
    t('Author'),
    t('Nid'),
    t('Submitted between'),
    t('Page'),
    t('Data export'),
    t('Seconds'),
  );
  $export['comments'] = $view;

  $view = new view();
  $view->name = 'issue_attachments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Issue attachments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attachments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  /* Relationship: Content: Attachments (field_issue_attachments:fid) */
  $handler->display->display_options['relationships']['field_issue_attachments_fid']['id'] = 'field_issue_attachments_fid';
  $handler->display->display_options['relationships']['field_issue_attachments_fid']['table'] = 'field_data_field_issue_attachments';
  $handler->display->display_options['relationships']['field_issue_attachments_fid']['field'] = 'field_issue_attachments_fid';
  $handler->display->display_options['relationships']['field_issue_attachments_fid']['label'] = 'File from field_issue_attachments';
  $handler->display->display_options['relationships']['field_issue_attachments_fid']['required'] = TRUE;
  /* Field: File: Mime type */
  $handler->display->display_options['fields']['filemime']['id'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filemime']['field'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['relationship'] = 'field_issue_attachments_fid';
  $handler->display->display_options['fields']['filemime']['label'] = '';
  $handler->display->display_options['fields']['filemime']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filemime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filemime']['filemime_image'] = TRUE;
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['relationship'] = 'field_issue_attachments_fid';
  $handler->display->display_options['fields']['filename']['label'] = 'Filename';
  $handler->display->display_options['fields']['filename']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['filename']['alter']['text'] = '[filemime] [filename]';
  $handler->display->display_options['fields']['filename']['link_to_file'] = TRUE;
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_issue_attachments_fid';
  /* Field: File: Upload date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['relationship'] = 'field_issue_attachments_fid';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Uploaded at';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'field_issue_attachments_fid';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'issue' => 'issue',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'issue' => 'issue',
  );
  /* Filter criterion: Content: Attachments (field_issue_attachments:display) */
  $handler->display->display_options['filters']['field_issue_attachments_display']['id'] = 'field_issue_attachments_display';
  $handler->display->display_options['filters']['field_issue_attachments_display']['table'] = 'field_data_field_issue_attachments';
  $handler->display->display_options['filters']['field_issue_attachments_display']['field'] = 'field_issue_attachments_display';
  $handler->display->display_options['filters']['field_issue_attachments_display']['value']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Issue: Node ID',
    ),
  );
  $translatables['issue_attachments'] = array(
    t('Master'),
    t('Attachments'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('File from field_issue_attachments'),
    t('Filename'),
    t('[filemime] [filename]'),
    t('Size'),
    t('Uploaded at'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['issue_attachments'] = $view;

  $view = new view();
  $view->name = 'issue_comments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Issue comments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Comments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'comment';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Comment: Thread */
  $handler->display->display_options['sorts']['thread']['id'] = 'thread';
  $handler->display->display_options['sorts']['thread']['table'] = 'comment';
  $handler->display->display_options['sorts']['thread']['field'] = 'thread';
  /* Contextual filter: Comment: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'comment';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Comments */
  $handler = $view->new_display('panel_pane', 'Comments', 'panel_pane_default');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.field-issue-comment-attachments',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Comment: Nid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['issue_comments'] = array(
    t('Master'),
    t('Comments'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content'),
    t('All'),
    t('View panes'),
  );
  $export['issue_comments'] = $view;

  $view = new view();
  $view->name = 'issues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Issues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Issues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'changed' => 'changed',
    'field_issue_business_value' => 'field_issue_business_value',
    'field_issue_status_term' => 'field_issue_status_term',
    'field_issue_type' => 'field_issue_type',
    'field_issue_assigned_to' => 'field_issue_assigned_to',
    'comment_count' => 'comment_count',
    'seconds' => 'seconds',
  );
  $handler->display->display_options['style_options']['default'] = 'field_issue_business_value';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_business_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_status_term' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_assigned_to' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'seconds' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'There are no issues available';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no issues available.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Project node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Project node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue number';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid] ';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d H:i';
  /* Field: Content: Business value */
  $handler->display->display_options['fields']['field_issue_business_value']['id'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['table'] = 'field_data_field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['field'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_issue_status_term']['id'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['field'] = 'field_issue_status_term';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_issue_type']['id'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['field'] = 'field_issue_type';
  /* Field: Content: Assigned to */
  $handler->display->display_options['fields']['field_issue_assigned_to']['id'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['field'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['type'] = 'iq_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Field: Content: Comment Time */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_node';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Project (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'issue' => 'issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'project';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Content: Status (field_issue_status_term) */
  $handler->display->display_options['filters']['field_issue_status_term_tid']['id'] = 'field_issue_status_term_tid';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['field'] = 'field_issue_status_term_tid';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['operator_id'] = 'field_issue_status_term_tid_op';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['operator'] = 'field_issue_status_term_tid_op';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_issue_status_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['vocabulary'] = 'issue_status';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Type (field_issue_type) */
  $handler->display->display_options['filters']['field_issue_type_value']['id'] = 'field_issue_type_value';
  $handler->display->display_options['filters']['field_issue_type_value']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['filters']['field_issue_type_value']['field'] = 'field_issue_type_value';
  $handler->display->display_options['filters']['field_issue_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['operator_id'] = 'field_issue_type_value_op';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['operator'] = 'field_issue_type_value_op';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Content: Assigned to (field_issue_assigned_to) */
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['id'] = 'field_issue_assigned_to_target_id';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['field'] = 'field_issue_assigned_to_target_id';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['operator_id'] = 'assigned_to_op';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['label'] = 'Assigned to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['operator'] = 'field_issue_assigned_to_target_id_op';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['identifier'] = 'assigned_to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group_info']['label'] = 'Assigned to (field_issue_assigned_to)';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group_info']['identifier'] = 'field_issue_assigned_to_target_id';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Tag';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'tag';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'issue_tags';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';

  /* Display: All issues page */
  $handler = $view->new_display('page', 'All issues page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'nid' => 'nid',
    'title' => 'title',
    'changed' => 'changed',
    'field_issue_business_value' => 'field_issue_business_value',
    'field_issue_status_term' => 'field_issue_status_term',
    'field_issue_type' => 'field_issue_type',
    'field_issue_assigned_to' => 'field_issue_assigned_to',
    'comment_count' => 'comment_count',
    'seconds' => 'seconds',
  );
  $handler->display->display_options['style_options']['default'] = 'field_issue_business_value';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_business_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_status_term' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_assigned_to' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'seconds' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Group node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Group node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue number';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid] ';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d H:i';
  /* Field: Content: Business value */
  $handler->display->display_options['fields']['field_issue_business_value']['id'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['table'] = 'field_data_field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['field'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_issue_status_term']['id'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['field'] = 'field_issue_status_term';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_issue_type']['id'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['field'] = 'field_issue_type';
  /* Field: Content: Assigned to */
  $handler->display->display_options['fields']['field_issue_assigned_to']['id'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['field'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['type'] = 'iq_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Field: Content: Comment Time */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_node';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'issues';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Issues';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue number';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid] ';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d H:i';
  /* Field: Content: Business value */
  $handler->display->display_options['fields']['field_issue_business_value']['id'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['table'] = 'field_data_field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['field'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_issue_status_term']['id'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['field'] = 'field_issue_status_term';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_issue_type']['id'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['field'] = 'field_issue_type';
  /* Field: Content: Assigned to */
  $handler->display->display_options['fields']['field_issue_assigned_to']['id'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['field'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['type'] = 'iq_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Field: Content: Comment Time */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_node';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  /* Field: Content: Comment Time */
  $handler->display->display_options['fields']['seconds_1']['id'] = 'seconds_1';
  $handler->display->display_options['fields']['seconds_1']['table'] = 'comment_timer_node';
  $handler->display->display_options['fields']['seconds_1']['field'] = 'seconds';
  $handler->display->display_options['fields']['seconds_1']['label'] = 'Comment Time (seconds)';
  $handler->display->display_options['fields']['seconds_1']['separator'] = '';
  $handler->display->display_options['fields']['seconds_1']['comment_timer_seconds'] = 1;
  $handler->display->display_options['path'] = 'issues/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'panel_pane_1' => 0,
    'panel_pane_3' => 0,
    'panel_pane_4' => 0,
    'panel_pane_2' => 0,
  );

  /* Display: Project issues */
  $handler = $view->new_display('panel_pane', 'Project issues', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue number';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid] ';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d H:i';
  /* Field: Content: Business value */
  $handler->display->display_options['fields']['field_issue_business_value']['id'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['table'] = 'field_data_field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['field'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_issue_status_term']['id'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['field'] = 'field_issue_status_term';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_issue_type']['id'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['field'] = 'field_issue_type';
  /* Field: Content: Assigned to */
  $handler->display->display_options['fields']['field_issue_assigned_to']['id'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['field'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['type'] = 'iq_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Field: Content: Comment Time */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_node';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NID of the Project */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['ui_name'] = 'NID of the Project';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['validate_options']['types'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['arguments']['og_group_ref_target_id']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'issue' => 'issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Status (field_issue_status_term) */
  $handler->display->display_options['filters']['field_issue_status_term_tid']['id'] = 'field_issue_status_term_tid';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['field'] = 'field_issue_status_term_tid';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['operator_id'] = 'field_issue_status_term_tid_op';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['operator'] = 'field_issue_status_term_tid_op';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_issue_status_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['vocabulary'] = 'issue_status';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Type (field_issue_type) */
  $handler->display->display_options['filters']['field_issue_type_value']['id'] = 'field_issue_type_value';
  $handler->display->display_options['filters']['field_issue_type_value']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['filters']['field_issue_type_value']['field'] = 'field_issue_type_value';
  $handler->display->display_options['filters']['field_issue_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['operator_id'] = 'field_issue_type_value_op';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['operator'] = 'field_issue_type_value_op';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Content: Assigned to (field_issue_assigned_to) */
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['id'] = 'field_issue_assigned_to_target_id';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['field'] = 'field_issue_assigned_to_target_id';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['operator_id'] = 'assigned_to_op';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['label'] = 'Assigned to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['operator'] = 'field_issue_assigned_to_target_id_op';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['identifier'] = 'assigned_to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Tag';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'tag';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'issue_tags';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'og_group_ref_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Project (og_group_ref)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Related issues */
  $handler = $view->new_display('panel_pane', 'Related issues', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related issues';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Project node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Project node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_issue_related_node']['id'] = 'reverse_field_issue_related_node';
  $handler->display->display_options['relationships']['reverse_field_issue_related_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_issue_related_node']['field'] = 'reverse_field_issue_related_node';
  $handler->display->display_options['relationships']['reverse_field_issue_related_node']['label'] = 'Issue referencing via field_issue_related';
  $handler->display->display_options['relationships']['reverse_field_issue_related_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue number';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid] ';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d H:i';
  /* Field: Content: Business value */
  $handler->display->display_options['fields']['field_issue_business_value']['id'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['table'] = 'field_data_field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['field'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_issue_status_term']['id'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['field'] = 'field_issue_status_term';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_issue_type']['id'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['field'] = 'field_issue_type';
  /* Field: Content: Assigned to */
  $handler->display->display_options['fields']['field_issue_assigned_to']['id'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['field'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['type'] = 'iq_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Field: Content: Comment Time */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_node';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_issue_related_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'issue' => 'issue',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'issue' => 'issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Status (field_issue_status_term) */
  $handler->display->display_options['filters']['field_issue_status_term_tid']['id'] = 'field_issue_status_term_tid';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['field'] = 'field_issue_status_term_tid';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['operator_id'] = 'field_issue_status_term_tid_op';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['operator'] = 'field_issue_status_term_tid_op';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_issue_status_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['vocabulary'] = 'issue_status';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Type (field_issue_type) */
  $handler->display->display_options['filters']['field_issue_type_value']['id'] = 'field_issue_type_value';
  $handler->display->display_options['filters']['field_issue_type_value']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['filters']['field_issue_type_value']['field'] = 'field_issue_type_value';
  $handler->display->display_options['filters']['field_issue_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['operator_id'] = 'field_issue_type_value_op';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['operator'] = 'field_issue_type_value_op';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Content: Assigned to (field_issue_assigned_to) */
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['id'] = 'field_issue_assigned_to_target_id';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['field'] = 'field_issue_assigned_to_target_id';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['operator_id'] = 'assigned_to_op';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['label'] = 'Assigned to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['operator'] = 'field_issue_assigned_to_target_id_op';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['identifier'] = 'assigned_to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group_info']['label'] = 'Assigned to (field_issue_assigned_to)';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group_info']['identifier'] = 'field_issue_assigned_to_target_id';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Tag';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'tag';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'issue_tags';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Issue status taxonomy term */
  $handler = $view->new_display('panel_pane', 'Issue status taxonomy term', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'issue_status' => 'issue_status',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'issue' => 'issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'project';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Content: Type (field_issue_type) */
  $handler->display->display_options['filters']['field_issue_type_value']['id'] = 'field_issue_type_value';
  $handler->display->display_options['filters']['field_issue_type_value']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['filters']['field_issue_type_value']['field'] = 'field_issue_type_value';
  $handler->display->display_options['filters']['field_issue_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['operator_id'] = 'field_issue_type_value_op';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['operator'] = 'field_issue_type_value_op';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Content: Assigned to (field_issue_assigned_to) */
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['id'] = 'field_issue_assigned_to_target_id';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['field'] = 'field_issue_assigned_to_target_id';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['operator_id'] = 'assigned_to_op';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['label'] = 'Assigned to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['operator'] = 'field_issue_assigned_to_target_id_op';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['identifier'] = 'assigned_to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Content: Tags (field_issue_tags) */
  $handler->display->display_options['filters']['field_issue_tags_tid']['id'] = 'field_issue_tags_tid';
  $handler->display->display_options['filters']['field_issue_tags_tid']['table'] = 'field_data_field_issue_tags';
  $handler->display->display_options['filters']['field_issue_tags_tid']['field'] = 'field_issue_tags_tid';
  $handler->display->display_options['filters']['field_issue_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_issue_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_tags_tid']['expose']['operator_id'] = 'field_issue_tags_tid_op';
  $handler->display->display_options['filters']['field_issue_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_issue_tags_tid']['expose']['operator'] = 'field_issue_tags_tid_op';
  $handler->display->display_options['filters']['field_issue_tags_tid']['expose']['identifier'] = 'tag';
  $handler->display->display_options['filters']['field_issue_tags_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_issue_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_issue_tags_tid']['vocabulary'] = 'issue_tags';
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Issue tag taxonomy term */
  $handler = $view->new_display('panel_pane', 'Issue tag taxonomy term', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'issue_tags' => 'issue_tags',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'issue' => 'issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'project';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Content: Status (field_issue_status_term) */
  $handler->display->display_options['filters']['field_issue_status_term_tid']['id'] = 'field_issue_status_term_tid';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['field'] = 'field_issue_status_term_tid';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['operator_id'] = 'field_issue_status_term_tid_op';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['operator'] = 'field_issue_status_term_tid_op';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_issue_status_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['vocabulary'] = 'issue_status';
  $handler->display->display_options['filters']['field_issue_status_term_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Type (field_issue_type) */
  $handler->display->display_options['filters']['field_issue_type_value']['id'] = 'field_issue_type_value';
  $handler->display->display_options['filters']['field_issue_type_value']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['filters']['field_issue_type_value']['field'] = 'field_issue_type_value';
  $handler->display->display_options['filters']['field_issue_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['operator_id'] = 'field_issue_type_value_op';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['operator'] = 'field_issue_type_value_op';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Content: Assigned to (field_issue_assigned_to) */
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['id'] = 'field_issue_assigned_to_target_id';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['field'] = 'field_issue_assigned_to_target_id';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['operator_id'] = 'assigned_to_op';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['label'] = 'Assigned to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['operator'] = 'field_issue_assigned_to_target_id_op';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['identifier'] = 'assigned_to';
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned_to_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['issues'] = array(
    t('Master'),
    t('Issues'),
    t('more'),
    t('Apply'),
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
    t('There are no issues available'),
    t('There are no issues available.'),
    t('Group node from OG membership'),
    t('Project'),
    t('Issue number'),
    t('#[nid] '),
    t('Title'),
    t('Updated'),
    t('Business value'),
    t('Status'),
    t('Type'),
    t('Assigned to'),
    t('Comment count'),
    t('.'),
    t(','),
    t('Comment Time'),
    t('All'),
    t('Assigned to (field_issue_assigned_to)'),
    t('Tag'),
    t('All issues page'),
    t('Data export'),
    t('Comment Time (seconds)'),
    t('Project issues'),
    t('View panes'),
    t('Related issues'),
    t('Issue referencing via field_issue_related'),
    t('Issue status taxonomy term'),
    t('Tags'),
    t('Issue tag taxonomy term'),
  );
  $export['issues'] = $view;

  return $export;
}
