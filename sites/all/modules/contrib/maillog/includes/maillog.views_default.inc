<?php

/**
 * @file
 * Creates the default view for the 'Log Mail' module.
 */

/**
 * Implements hook_views_default_views().
 */
function maillog_views_default_views() {
  $view = new view();
  $view->name = 'Maillog';
  $view->description = 'Displays the list of e-mails logged by the \'Mail Log\' module.';
  $view->tag = '';
  $view->base_table = 'maillog';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Maillog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view maillog';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Maillog';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Maillog is currently empty. Send an email!';
  /* Field: Maillog: Maillog_ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'maillog';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Maillog: Date */
  $handler->display->display_options['fields']['sent_date']['id'] = 'sent_date';
  $handler->display->display_options['fields']['sent_date']['table'] = 'maillog';
  $handler->display->display_options['fields']['sent_date']['field'] = 'sent_date';
  /* Field: Maillog: Message_ID */
  $handler->display->display_options['fields']['header_message_id']['id'] = 'header_message_id';
  $handler->display->display_options['fields']['header_message_id']['table'] = 'maillog';
  $handler->display->display_options['fields']['header_message_id']['field'] = 'header_message_id';
  /* Field: Maillog: Subject */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'maillog';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['path'] = 'admin/reports/maillog/view/[id]';
  /* Field: Maillog: From */
  $handler->display->display_options['fields']['header_from']['id'] = 'header_from';
  $handler->display->display_options['fields']['header_from']['table'] = 'maillog';
  $handler->display->display_options['fields']['header_from']['field'] = 'header_from';
  /* Field: Maillog: To */
  $handler->display->display_options['fields']['header_to']['id'] = 'header_to';
  $handler->display->display_options['fields']['header_to']['table'] = 'maillog';
  $handler->display->display_options['fields']['header_to']['field'] = 'header_to';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'view';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'admin/reports/maillog/view/[id]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Maillog: Delete link */
  $handler->display->display_options['fields']['delete_maillog']['id'] = 'delete_maillog';
  $handler->display->display_options['fields']['delete_maillog']['table'] = 'maillog';
  $handler->display->display_options['fields']['delete_maillog']['field'] = 'delete_maillog';
  $handler->display->display_options['fields']['delete_maillog']['label'] = '';
  $handler->display->display_options['fields']['delete_maillog']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_maillog']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[nothing] | [delete_maillog]';
  /* Sort criterion: Maillog: Date */
  $handler->display->display_options['sorts']['sent_date']['id'] = 'sent_date';
  $handler->display->display_options['sorts']['sent_date']['table'] = 'maillog';
  $handler->display->display_options['sorts']['sent_date']['field'] = 'sent_date';
  $handler->display->display_options['sorts']['sent_date']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/reports/maillog';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Maillog';
  $handler->display->display_options['menu']['description'] = 'Show the logged mails';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['Maillog'] = array(
    t('Defaults'),
    t('Maillog'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Maillog is currently empty. Send a mail!'),
    t('Maillog_ID'),
    t('Date'),
    t('Message_ID'),
    t('Subject'),
    t('From'),
    t('To'),
    t('view'),
    t('Actions'),
    t('[nothing] | [delete_maillog]'),
    t('Page'),
  );

  $views[$view->name] = $view;
  return $views;
}
