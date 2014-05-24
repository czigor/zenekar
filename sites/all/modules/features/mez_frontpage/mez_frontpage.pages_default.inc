<?php
/**
 * @file
 * mez_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function mez_frontpage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Frontpage',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'mez_frontpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_content' => NULL,
      'menu' => NULL,
      'news' => NULL,
      'main_1' => NULL,
      'main_2' => NULL,
      'footer' => NULL,
      'top' => NULL,
      'mymenu' => NULL,
      'top_main' => NULL,
      'bottom_main' => NULL,
      'bottom' => NULL,
      'top_right' => NULL,
      'up' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '26c31e21-27e8-4cd6-8642-7fe3b57de201';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-892a013d-821d-46d0-9230-3f9832fdcfdb';
    $pane->panel = 'news';
    $pane->type = 'views_panes';
    $pane->subtype = 'mez_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '892a013d-821d-46d0-9230-3f9832fdcfdb';
    $display->content['new-892a013d-821d-46d0-9230-3f9832fdcfdb'] = $pane;
    $display->panels['news'][0] = 'new-892a013d-821d-46d0-9230-3f9832fdcfdb';
    $pane = new stdClass();
    $pane->pid = 'new-2ac99ac1-c3ed-4c5d-9cae-26bfa12fe09b';
    $pane->panel = 'top_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'videos-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ac99ac1-c3ed-4c5d-9cae-26bfa12fe09b';
    $display->content['new-2ac99ac1-c3ed-4c5d-9cae-26bfa12fe09b'] = $pane;
    $display->panels['top_main'][0] = 'new-2ac99ac1-c3ed-4c5d-9cae-26bfa12fe09b';
    $pane = new stdClass();
    $pane->pid = 'new-b805bd6e-f7bb-4902-a6e5-c715af41ee55';
    $pane->panel = 'top_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'concerts-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b805bd6e-f7bb-4902-a6e5-c715af41ee55';
    $display->content['new-b805bd6e-f7bb-4902-a6e5-c715af41ee55'] = $pane;
    $display->panels['top_main'][1] = 'new-b805bd6e-f7bb-4902-a6e5-c715af41ee55';
    $pane = new stdClass();
    $pane->pid = 'new-25c90316-7be6-4307-a979-04806995428f';
    $pane->panel = 'up';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '2086',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '25c90316-7be6-4307-a979-04806995428f';
    $display->content['new-25c90316-7be6-4307-a979-04806995428f'] = $pane;
    $display->panels['up'][0] = 'new-25c90316-7be6-4307-a979-04806995428f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  return $pages;

}
