<?php
/**
 * @file
 * iq_kanban_board.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function iq_kanban_board_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'generic_kanban_board';
  $page->task = 'page';
  $page->admin_title = 'Generic Kanban board';
  $page->admin_description = '';
  $page->path = 'kanban-board';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'og_role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Kanban board',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_generic_kanban_board_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'generic_kanban_board';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Kanban board';
  $display->uuid = 'b4e1d5d8-0b9e-4e25-8ce1-cff1bf2664d1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-912e34ea-5557-4146-9d68-5f8f9b1cb1a4';
    $pane->panel = 'middle';
    $pane->type = 'kanban_board';
    $pane->subtype = 'kanban_board';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'empty',
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
    $pane->uuid = '912e34ea-5557-4146-9d68-5f8f9b1cb1a4';
    $display->content['new-912e34ea-5557-4146-9d68-5f8f9b1cb1a4'] = $pane;
    $display->panels['middle'][0] = 'new-912e34ea-5557-4146-9d68-5f8f9b1cb1a4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-912e34ea-5557-4146-9d68-5f8f9b1cb1a4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['generic_kanban_board'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'project_kanban_board_tab';
  $page->task = 'page';
  $page->admin_title = 'Project Kanban board tab';
  $page->admin_description = '';
  $page->path = 'node/%node/kanban-board';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'og_is_node_group',
        'settings' => NULL,
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'node_access',
        'settings' => array(
          'type' => 'view',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Kanban board',
    'name' => 'navigation',
    'weight' => '-3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_project_kanban_board_tab_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'project_kanban_board_tab';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title Kanban board';
  $display->uuid = '84ae352d-c4cb-4df6-a3ef-7ecdd2c7d02a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-168cc46b-f33e-4160-b419-cc9c42235d4a';
    $pane->panel = 'middle';
    $pane->type = 'kanban_board';
    $pane->subtype = 'kanban_board';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '168cc46b-f33e-4160-b419-cc9c42235d4a';
    $display->content['new-168cc46b-f33e-4160-b419-cc9c42235d4a'] = $pane;
    $display->panels['middle'][0] = 'new-168cc46b-f33e-4160-b419-cc9c42235d4a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-168cc46b-f33e-4160-b419-cc9c42235d4a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['project_kanban_board_tab'] = $page;

  return $pages;

}
