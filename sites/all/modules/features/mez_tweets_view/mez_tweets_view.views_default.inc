<?php
/**
 * @file
 * mez_tweets_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mez_tweets_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mez_tweets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'twitter';
  $view->human_name = 'MEZ tweets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'MEZ tweets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmazás';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Mező: Twitter: Login name */
  $handler->display->display_options['fields']['screen_name']['id'] = 'screen_name';
  $handler->display->display_options['fields']['screen_name']['table'] = 'twitter_account';
  $handler->display->display_options['fields']['screen_name']['field'] = 'screen_name';
  $handler->display->display_options['fields']['screen_name']['label'] = '';
  $handler->display->display_options['fields']['screen_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['screen_name']['element_label_colon'] = FALSE;
  /* Mező: Twitter: Profile image */
  $handler->display->display_options['fields']['profile_image_url']['id'] = 'profile_image_url';
  $handler->display->display_options['fields']['profile_image_url']['table'] = 'twitter_account';
  $handler->display->display_options['fields']['profile_image_url']['field'] = 'profile_image_url';
  $handler->display->display_options['fields']['profile_image_url']['label'] = '';
  $handler->display->display_options['fields']['profile_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['profile_image_url']['element_label_colon'] = FALSE;
  /* Mező: Twitter: Twitter status message ID */
  $handler->display->display_options['fields']['twitter_id']['id'] = 'twitter_id';
  $handler->display->display_options['fields']['twitter_id']['table'] = 'twitter';
  $handler->display->display_options['fields']['twitter_id']['field'] = 'twitter_id';
  $handler->display->display_options['fields']['twitter_id']['label'] = '';
  $handler->display->display_options['fields']['twitter_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['twitter_id']['element_label_colon'] = FALSE;
  /* Mező: Twitter: Teljes név */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'twitter_account';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[profile_image_url] [name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'http://twitter.com/[screen_name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['target'] = '__blank';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Mező: Twitter: Created time */
  $handler->display->display_options['fields']['created_time']['id'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['table'] = 'twitter';
  $handler->display->display_options['fields']['created_time']['field'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['label'] = '';
  $handler->display->display_options['fields']['created_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created_time']['alter']['text'] = '[created_time]';
  $handler->display->display_options['fields']['created_time']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created_time']['alter']['path'] = 'http://twitter.com/[screen_name]/status/[twitter_id]';
  $handler->display->display_options['fields']['created_time']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['created_time']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['created_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_time']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created_time']['second_date_format'] = 'long';
  /* Mező: Twitter: Message text */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'twitter';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['label'] = '';
  $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text']['link_urls'] = 1;
  $handler->display->display_options['fields']['text']['link_usernames'] = 1;
  $handler->display->display_options['fields']['text']['link_hashtags'] = 0;
  $handler->display->display_options['fields']['text']['link_attributes'] = 1;
  /* Mező: Twitter: Web Intents */
  $handler->display->display_options['fields']['web_intents']['id'] = 'web_intents';
  $handler->display->display_options['fields']['web_intents']['table'] = 'twitter';
  $handler->display->display_options['fields']['web_intents']['field'] = 'web_intents';
  $handler->display->display_options['fields']['web_intents']['label'] = '';
  $handler->display->display_options['fields']['web_intents']['element_label_colon'] = FALSE;
  /* Rendezési szempont: Twitter: Created time */
  $handler->display->display_options['sorts']['created_time']['id'] = 'created_time';
  $handler->display->display_options['sorts']['created_time']['table'] = 'twitter';
  $handler->display->display_options['sorts']['created_time']['field'] = 'created_time';
  $handler->display->display_options['sorts']['created_time']['order'] = 'DESC';
  /* Szűrési feltétel: Twitter: Login name */
  $handler->display->display_options['filters']['screen_name']['id'] = 'screen_name';
  $handler->display->display_options['filters']['screen_name']['table'] = 'twitter';
  $handler->display->display_options['filters']['screen_name']['field'] = 'screen_name';
  $handler->display->display_options['filters']['screen_name']['value'] = 'mez1896';
  $handler->display->display_options['filters']['screen_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['screen_name']['expose']['operator_id'] = 'screen_name_op';
  $handler->display->display_options['filters']['screen_name']['expose']['label'] = 'Login name';
  $handler->display->display_options['filters']['screen_name']['expose']['operator'] = 'screen_name_op';
  $handler->display->display_options['filters']['screen_name']['expose']['identifier'] = 'screen_name';
  $handler->display->display_options['filters']['screen_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'MEZ Tweets';
  $export['mez_tweets'] = $view;

  return $export;
}
