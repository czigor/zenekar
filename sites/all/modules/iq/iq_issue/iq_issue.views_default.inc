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
  $handler->display->display_options['title'] = 'Hozzászólások';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmazás';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
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
  /* Viselkedés, ha nincs eredmény: Általános: Szűretlen szöveg */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No comments found.';
  /* Kapcsolat: Hozzászólás: Tartalom */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Kapcsolat: OG membership: OG membership from Tartalom */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Kapcsolat: OG membership: Group Tartalom from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Mező: Tartalom: Tartalom azonosító */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid]: [title]';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Mező: Tartalom: Tartalom azonosító */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Mező: Hozzászólás: Azonosító */
  $handler->display->display_options['fields']['cid']['id'] = 'cid';
  $handler->display->display_options['fields']['cid']['table'] = 'comment';
  $handler->display->display_options['fields']['cid']['field'] = 'cid';
  $handler->display->display_options['fields']['cid']['label'] = '';
  $handler->display->display_options['fields']['cid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cid']['link_to_comment'] = FALSE;
  /* Mező: Hozzászólás: Beküldés dátuma */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Submitted';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[nid_1]#comment-[cid]';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Mező: Hozzászólás: Idő */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_comment';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  /* Mező: Hozzászólás: Time status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'comment_timer_comment';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Billable';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Mező: Hozzászólás: Szerző */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Szűrési feltétel: Hozzászólás: Elfogadott */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Szűrési feltétel: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Szűrési feltétel: Tartalom: Tartalom azonosító */
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
  /* Szűrési feltétel: Hozzászólás: Beküldés dátuma */
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
  /* Szűrési feltétel: Hozzászólás: Szerző egyedi azonosítója */
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
  /* Szűrési feltétel: Hozzászólás: Time status */
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
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Mező: Tartalom: Tartalom azonosító */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid]: [title]';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Mező: Tartalom: Tartalom azonosító */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Mező: Hozzászólás: Azonosító */
  $handler->display->display_options['fields']['cid']['id'] = 'cid';
  $handler->display->display_options['fields']['cid']['table'] = 'comment';
  $handler->display->display_options['fields']['cid']['field'] = 'cid';
  $handler->display->display_options['fields']['cid']['label'] = '';
  $handler->display->display_options['fields']['cid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cid']['link_to_comment'] = FALSE;
  /* Mező: Hozzászólás: Beküldés dátuma */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Submitted';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[nid_1]#comment-[cid]';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Mező: Hozzászólás: Idő */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_comment';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  /* Mező: Hozzászólás: Idő */
  $handler->display->display_options['fields']['seconds_1']['id'] = 'seconds_1';
  $handler->display->display_options['fields']['seconds_1']['table'] = 'comment_timer_comment';
  $handler->display->display_options['fields']['seconds_1']['field'] = 'seconds';
  $handler->display->display_options['fields']['seconds_1']['label'] = 'Seconds';
  $handler->display->display_options['fields']['seconds_1']['separator'] = '';
  $handler->display->display_options['fields']['seconds_1']['comment_timer_seconds'] = 1;
  /* Mező: Hozzászólás: Time status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'comment_timer_comment';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Billable';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Mező: Hozzászólás: Szerző */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['path'] = 'comments/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
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
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
  /* Mező: Tartalom: Attachments */
  $handler->display->display_options['fields']['field_issue_attachments']['id'] = 'field_issue_attachments';
  $handler->display->display_options['fields']['field_issue_attachments']['table'] = 'field_data_field_issue_attachments';
  $handler->display->display_options['fields']['field_issue_attachments']['field'] = 'field_issue_attachments';
  $handler->display->display_options['fields']['field_issue_attachments']['label'] = '';
  $handler->display->display_options['fields']['field_issue_attachments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_issue_attachments']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_issue_attachments']['delta_offset'] = '0';
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
    'issue' => 'issue',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
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
    'issue' => 'issue',
  );
  /* Szűrési feltétel: Tartalom: Attachments (field_issue_attachments:display) */
  $handler->display->display_options['filters']['field_issue_attachments_display']['id'] = 'field_issue_attachments_display';
  $handler->display->display_options['filters']['field_issue_attachments_display']['table'] = 'field_data_field_issue_attachments';
  $handler->display->display_options['filters']['field_issue_attachments_display']['field'] = 'field_issue_attachments_display';
  $handler->display->display_options['filters']['field_issue_attachments_display']['value']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
  $handler->display->display_options['title'] = 'Hozzászólások';
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
  $handler->display->display_options['row_plugin'] = 'comment';
  /* Kapcsolat: Hozzászólás: Tartalom */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Mező: Hozzászólás: Cím */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* Rendezési szempont: Hozzászólás: Szál */
  $handler->display->display_options['sorts']['thread']['id'] = 'thread';
  $handler->display->display_options['sorts']['thread']['table'] = 'comment';
  $handler->display->display_options['sorts']['thread']['field'] = 'thread';
  /* Szövegkörnyezeti szűrő: Hozzászólás: Tartalom azonosító */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'comment';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Minden';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  /* Szűrési feltétel: Hozzászólás: Elfogadott */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Szűrési feltétel: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Comments */
  $handler = $view->new_display('panel_pane', 'Comments', 'panel_pane_default');
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmazás';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
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
  /* Viselkedés, ha nincs eredmény: Általános: Szövegdoboz */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'There are no issues available';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no issues available.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Kapcsolat: Project node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Project node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Mező: Tartalom: Tartalom azonosító */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue number';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid] ';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Mező: Tartalom: Frissítési dátum */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d H:i';
  /* Mező: Tartalom: Business value */
  $handler->display->display_options['fields']['field_issue_business_value']['id'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['table'] = 'field_data_field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['field'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Mező: Tartalom: Status */
  $handler->display->display_options['fields']['field_issue_status_term']['id'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['field'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['label'] = 'Állapot';
  /* Mező: Tartalom: Type */
  $handler->display->display_options['fields']['field_issue_type']['id'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['field'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['label'] = 'Típus';
  /* Mező: Tartalom: Assigned to */
  $handler->display->display_options['fields']['field_issue_assigned_to']['id'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['field'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['type'] = 'iq_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['settings'] = array(
    'link' => 1,
  );
  /* Mező: Tartalom: Hozzászólások száma */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Mező: Tartalom: Comment Time */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_node';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  /* Rendezési szempont: Tartalom: Beküldés dátuma */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Szövegkörnyezeti szűrő: Tartalom: Project (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['exception']['title'] = 'Minden';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  /* Szövegkörnyezeti szűrő: Tartalom: Létezik hozzá taxonómia kifejezés azonosító (mélységgel) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Minden';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
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
    'issue' => 'issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Szűrési feltétel: Tartalom: Project (og_group_ref) */
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
  /* Szűrési feltétel: Tartalom: Status (field_issue_status_term) */
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
  /* Szűrési feltétel: Tartalom: Type (field_issue_type) */
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
  /* Szűrési feltétel: Tartalom: Assigned to (field_issue_assigned_to) */
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
  /* Szűrési feltétel: Tartalom: Léteznek hozzá taxonómia kifejezések (mélységgel) */
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
  /* Kapcsolat: Group node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Group node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Mező: Tartalom: Tartalom azonosító */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue number';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid] ';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Mező: Tartalom: Frissítési dátum */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d H:i';
  /* Mező: Tartalom: Business value */
  $handler->display->display_options['fields']['field_issue_business_value']['id'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['table'] = 'field_data_field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['field'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Mező: Tartalom: Status */
  $handler->display->display_options['fields']['field_issue_status_term']['id'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['field'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['label'] = 'Állapot';
  /* Mező: Tartalom: Type */
  $handler->display->display_options['fields']['field_issue_type']['id'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['field'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['label'] = 'Típus';
  /* Mező: Tartalom: Assigned to */
  $handler->display->display_options['fields']['field_issue_assigned_to']['id'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['field'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['type'] = 'iq_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['settings'] = array(
    'link' => 1,
  );
  /* Mező: Tartalom: Hozzászólások száma */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Mező: Tartalom: Comment Time */
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
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Mező: Tartalom: Tartalom azonosító */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue number';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid] ';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Mező: Tartalom: Frissítési dátum */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d H:i';
  /* Mező: Tartalom: Business value */
  $handler->display->display_options['fields']['field_issue_business_value']['id'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['table'] = 'field_data_field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['field'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Mező: Tartalom: Status */
  $handler->display->display_options['fields']['field_issue_status_term']['id'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['field'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['label'] = 'Állapot';
  /* Mező: Tartalom: Type */
  $handler->display->display_options['fields']['field_issue_type']['id'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['field'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['label'] = 'Típus';
  /* Mező: Tartalom: Assigned to */
  $handler->display->display_options['fields']['field_issue_assigned_to']['id'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['field'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['type'] = 'iq_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['settings'] = array(
    'link' => 1,
  );
  /* Mező: Tartalom: Hozzászólások száma */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Mező: Tartalom: Comment Time */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_node';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  /* Mező: Tartalom: Comment Time */
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
  /* Mező: Tartalom: Tartalom azonosító */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue number';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid] ';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Mező: Tartalom: Frissítési dátum */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d H:i';
  /* Mező: Tartalom: Business value */
  $handler->display->display_options['fields']['field_issue_business_value']['id'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['table'] = 'field_data_field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['field'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Mező: Tartalom: Status */
  $handler->display->display_options['fields']['field_issue_status_term']['id'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['field'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['label'] = 'Állapot';
  /* Mező: Tartalom: Type */
  $handler->display->display_options['fields']['field_issue_type']['id'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['field'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['label'] = 'Típus';
  /* Mező: Tartalom: Assigned to */
  $handler->display->display_options['fields']['field_issue_assigned_to']['id'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['field'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['type'] = 'iq_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['settings'] = array(
    'link' => 1,
  );
  /* Mező: Tartalom: Hozzászólások száma */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Mező: Tartalom: Comment Time */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_node';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Szövegkörnyezeti szűrő: NID of the Project */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['ui_name'] = 'NID of the Project';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['exception']['title'] = 'Minden';
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
    'issue' => 'issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Szűrési feltétel: Tartalom: Status (field_issue_status_term) */
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
  /* Szűrési feltétel: Tartalom: Type (field_issue_type) */
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
  /* Szűrési feltétel: Tartalom: Assigned to (field_issue_assigned_to) */
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
  /* Szűrési feltétel: Tartalom: Léteznek hozzá taxonómia kifejezések (mélységgel) */
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
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
  /* Kapcsolat: Project node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Project node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Kapcsolat: Entity Reference: Hivatkozó entitás */
  $handler->display->display_options['relationships']['reverse_field_issue_related_node']['id'] = 'reverse_field_issue_related_node';
  $handler->display->display_options['relationships']['reverse_field_issue_related_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_issue_related_node']['field'] = 'reverse_field_issue_related_node';
  $handler->display->display_options['relationships']['reverse_field_issue_related_node']['label'] = 'Issue referencing via field_issue_related';
  $handler->display->display_options['relationships']['reverse_field_issue_related_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Mező: Tartalom: Tartalom azonosító */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue number';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '#[nid] ';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Mező: Tartalom: Frissítési dátum */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d H:i';
  /* Mező: Tartalom: Business value */
  $handler->display->display_options['fields']['field_issue_business_value']['id'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['table'] = 'field_data_field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['field'] = 'field_issue_business_value';
  $handler->display->display_options['fields']['field_issue_business_value']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Mező: Tartalom: Status */
  $handler->display->display_options['fields']['field_issue_status_term']['id'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['table'] = 'field_data_field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['field'] = 'field_issue_status_term';
  $handler->display->display_options['fields']['field_issue_status_term']['label'] = 'Állapot';
  /* Mező: Tartalom: Type */
  $handler->display->display_options['fields']['field_issue_type']['id'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['table'] = 'field_data_field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['field'] = 'field_issue_type';
  $handler->display->display_options['fields']['field_issue_type']['label'] = 'Típus';
  /* Mező: Tartalom: Assigned to */
  $handler->display->display_options['fields']['field_issue_assigned_to']['id'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['table'] = 'field_data_field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['field'] = 'field_issue_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['type'] = 'iq_assigned_to';
  $handler->display->display_options['fields']['field_issue_assigned_to']['settings'] = array(
    'link' => 1,
  );
  /* Mező: Tartalom: Hozzászólások száma */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Mező: Tartalom: Comment Time */
  $handler->display->display_options['fields']['seconds']['id'] = 'seconds';
  $handler->display->display_options['fields']['seconds']['table'] = 'comment_timer_node';
  $handler->display->display_options['fields']['seconds']['field'] = 'seconds';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Szövegkörnyezeti szűrő: Tartalom: Tartalom azonosító */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_issue_related_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Minden';
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
    'issue' => 'issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Szűrési feltétel: Tartalom: Status (field_issue_status_term) */
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
  /* Szűrési feltétel: Tartalom: Type (field_issue_type) */
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
  /* Szűrési feltétel: Tartalom: Assigned to (field_issue_assigned_to) */
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
  /* Szűrési feltétel: Tartalom: Léteznek hozzá taxonómia kifejezések (mélységgel) */
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
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
  /* Szövegkörnyezeti szűrő: Tartalom: Létezik hozzá taxonómia kifejezés azonosító (mélységgel) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Minden';
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
    'issue' => 'issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Szűrési feltétel: Tartalom: Project (og_group_ref) */
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
  /* Szűrési feltétel: Tartalom: Type (field_issue_type) */
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
  /* Szűrési feltétel: Tartalom: Assigned to (field_issue_assigned_to) */
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
  /* Szűrési feltétel: Tartalom: Tags (field_issue_tags) */
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
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
  /* Szövegkörnyezeti szűrő: Tartalom: Létezik hozzá taxonómia kifejezés azonosító (mélységgel) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Minden';
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
    'issue' => 'issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Szűrési feltétel: Tartalom: Project (og_group_ref) */
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
  /* Szűrési feltétel: Tartalom: Status (field_issue_status_term) */
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
  /* Szűrési feltétel: Tartalom: Type (field_issue_type) */
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
  /* Szűrési feltétel: Tartalom: Assigned to (field_issue_assigned_to) */
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
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
  $export['issues'] = $view;

  return $export;
}
