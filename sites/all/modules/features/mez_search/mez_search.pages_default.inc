<?php
/**
 * @file
 * mez_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function mez_search_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node_panel_context';
  $handler->task = 'search';
  $handler->subtask = 'node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Search',
    'no_blocks' => 0,
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
      'top' => NULL,
      'top_right' => NULL,
      'mymenu' => NULL,
      'news' => NULL,
      'top_main' => NULL,
      'bottom_main' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '94f1ca31-e814-49b3-b127-a4ce336f294d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c9ddb67b-d830-43af-964d-1c4f9c444a24';
    $pane->panel = 'mymenu';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'c9ddb67b-d830-43af-964d-1c4f9c444a24';
    $display->content['new-c9ddb67b-d830-43af-964d-1c4f9c444a24'] = $pane;
    $display->panels['mymenu'][0] = 'new-c9ddb67b-d830-43af-964d-1c4f9c444a24';
    $pane = new stdClass();
    $pane->pid = 'new-54c97695-59fa-4f12-b64c-d90044e1ad46';
    $pane->panel = 'top';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
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
    $pane->uuid = '54c97695-59fa-4f12-b64c-d90044e1ad46';
    $display->content['new-54c97695-59fa-4f12-b64c-d90044e1ad46'] = $pane;
    $display->panels['top'][0] = 'new-54c97695-59fa-4f12-b64c-d90044e1ad46';
    $pane = new stdClass();
    $pane->pid = 'new-fcda7a97-6130-4f86-996c-6c32b79f169f';
    $pane->panel = 'top';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
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
    $pane->uuid = 'fcda7a97-6130-4f86-996c-6c32b79f169f';
    $display->content['new-fcda7a97-6130-4f86-996c-6c32b79f169f'] = $pane;
    $display->panels['top'][1] = 'new-fcda7a97-6130-4f86-996c-6c32b79f169f';
    $pane = new stdClass();
    $pane->pid = 'new-41198a5c-942d-4497-af91-cf7f83760a0f';
    $pane->panel = 'top_main';
    $pane->type = 'search_result';
    $pane->subtype = 'search_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'log' => 1,
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => '',
      'empty_format' => 'plain_text',
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => '',
      'no_key_format' => 'plain_text',
      'context' => 'argument_string_1',
      'override_title' => 0,
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
    $pane->uuid = '41198a5c-942d-4497-af91-cf7f83760a0f';
    $display->content['new-41198a5c-942d-4497-af91-cf7f83760a0f'] = $pane;
    $display->panels['top_main'][0] = 'new-41198a5c-942d-4497-af91-cf7f83760a0f';
    $pane = new stdClass();
    $pane->pid = 'new-aac75e0f-861a-4858-a1c9-5147336adeb6';
    $pane->panel = 'top_right';
    $pane->type = 'block';
    $pane->subtype = 'locale-language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'aac75e0f-861a-4858-a1c9-5147336adeb6';
    $display->content['new-aac75e0f-861a-4858-a1c9-5147336adeb6'] = $pane;
    $display->panels['top_right'][0] = 'new-aac75e0f-861a-4858-a1c9-5147336adeb6';
    $pane = new stdClass();
    $pane->pid = 'new-a64df1aa-2dd8-4389-9276-af774f870ab6';
    $pane->panel = 'top_right';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a64df1aa-2dd8-4389-9276-af774f870ab6';
    $display->content['new-a64df1aa-2dd8-4389-9276-af774f870ab6'] = $pane;
    $display->panels['top_right'][1] = 'new-a64df1aa-2dd8-4389-9276-af774f870ab6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-41198a5c-942d-4497-af91-cf7f83760a0f';
  $handler->conf['display'] = $display;
  $export['search_node_panel_context'] = $handler;

  return $export;
}
