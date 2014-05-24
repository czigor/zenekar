<?php
/**
 * @file
 * iq_project.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function iq_project_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Project page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'iq_project_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_1st_col' => NULL,
      'top_2nd_col' => NULL,
      'top_3rd_col' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'top' => NULL,
      'middle_1st_col' => NULL,
      'middle_2nd_col' => NULL,
      'middle_3rd_col' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '12bbd300-0e1f-45b6-9696-af675c4f3a6a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ed2bd66a-0a4e-4415-ad2e-b872e3c9cc83';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'issues-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ed2bd66a-0a4e-4415-ad2e-b872e3c9cc83';
    $display->content['new-ed2bd66a-0a4e-4415-ad2e-b872e3c9cc83'] = $pane;
    $display->panels['bottom'][0] = 'new-ed2bd66a-0a4e-4415-ad2e-b872e3c9cc83';
    $pane = new stdClass();
    $pane->pid = 'new-e637f3ef-af24-4ad9-92cc-427d558d4276';
    $pane->panel = 'middle_1st_col';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Description',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e637f3ef-af24-4ad9-92cc-427d558d4276';
    $display->content['new-e637f3ef-af24-4ad9-92cc-427d558d4276'] = $pane;
    $display->panels['middle_1st_col'][0] = 'new-e637f3ef-af24-4ad9-92cc-427d558d4276';
    $pane = new stdClass();
    $pane->pid = 'new-1d60ccf9-3e8b-45d2-bc49-2fdea6657ea2';
    $pane->panel = 'middle_1st_col';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = '1d60ccf9-3e8b-45d2-bc49-2fdea6657ea2';
    $display->content['new-1d60ccf9-3e8b-45d2-bc49-2fdea6657ea2'] = $pane;
    $display->panels['middle_1st_col'][1] = 'new-1d60ccf9-3e8b-45d2-bc49-2fdea6657ea2';
    $pane = new stdClass();
    $pane->pid = 'new-61979eb5-15b9-4f8b-85e5-8d57ff8d16f0';
    $pane->panel = 'middle_1st_col';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_attachments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '61979eb5-15b9-4f8b-85e5-8d57ff8d16f0';
    $display->content['new-61979eb5-15b9-4f8b-85e5-8d57ff8d16f0'] = $pane;
    $display->panels['middle_1st_col'][2] = 'new-61979eb5-15b9-4f8b-85e5-8d57ff8d16f0';
    $pane = new stdClass();
    $pane->pid = 'new-a555afb2-ce84-43cf-bd5f-5a4d78bc28bd';
    $pane->panel = 'middle_1st_col';
    $pane->type = 'panels_mini';
    $pane->subtype = 'project_subscription';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'context_user_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'rewrite_output' => '[content]',
        'collapsible' => 1,
        'collapsed' => 1,
      ),
      'style' => 'fieldset',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a555afb2-ce84-43cf-bd5f-5a4d78bc28bd';
    $display->content['new-a555afb2-ce84-43cf-bd5f-5a4d78bc28bd'] = $pane;
    $display->panels['middle_1st_col'][3] = 'new-a555afb2-ce84-43cf-bd5f-5a4d78bc28bd';
    $pane = new stdClass();
    $pane->pid = 'new-25825533-17ad-47c7-9beb-6b39a6619769';
    $pane->panel = 'middle_2nd_col';
    $pane->type = 'views_panes';
    $pane->subtype = 'documentations-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '25825533-17ad-47c7-9beb-6b39a6619769';
    $display->content['new-25825533-17ad-47c7-9beb-6b39a6619769'] = $pane;
    $display->panels['middle_2nd_col'][0] = 'new-25825533-17ad-47c7-9beb-6b39a6619769';
    $pane = new stdClass();
    $pane->pid = 'new-4dfbe240-4b58-4c0e-82ab-5e45a0c4b5e4';
    $pane->panel = 'middle_3rd_col';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4dfbe240-4b58-4c0e-82ab-5e45a0c4b5e4';
    $display->content['new-4dfbe240-4b58-4c0e-82ab-5e45a0c4b5e4'] = $pane;
    $display->panels['middle_3rd_col'][0] = 'new-4dfbe240-4b58-4c0e-82ab-5e45a0c4b5e4';
    $pane = new stdClass();
    $pane->pid = 'new-aa87e6c4-f601-42b3-b761-10eba0549319';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'project_details';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
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
    $pane->uuid = 'aa87e6c4-f601-42b3-b761-10eba0549319';
    $display->content['new-aa87e6c4-f601-42b3-b761-10eba0549319'] = $pane;
    $display->panels['top'][0] = 'new-aa87e6c4-f601-42b3-b761-10eba0549319';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Project tag terms',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              1 => '1',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = 'Projects with tag: %term:name';
  $display->uuid = 'db03ba11-f22d-4b4b-beb8-37ab811ed03b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b1c100f4-dd02-4893-bf67-ab3b49811cd5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b1c100f4-dd02-4893-bf67-ab3b49811cd5';
    $display->content['new-b1c100f4-dd02-4893-bf67-ab3b49811cd5'] = $pane;
    $display->panels['middle'][0] = 'new-b1c100f4-dd02-4893-bf67-ab3b49811cd5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b1c100f4-dd02-4893-bf67-ab3b49811cd5';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function iq_project_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'project_documentations_tab';
  $page->task = 'page';
  $page->admin_title = 'Project documentations tab';
  $page->admin_description = '';
  $page->path = 'node/%node/documentations';
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
      3 => array(
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
    'title' => 'Documentations',
    'name' => 'navigation',
    'weight' => '-1',
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
      'identifier' => 'Project node',
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
  $handler->name = 'page_project_documentations_tab_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'project_documentations_tab';
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
      'top' => NULL,
      'middle_1st_col' => NULL,
      'middle_2nd_col' => NULL,
      'middle_3rd_col' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title documentations';
  $display->uuid = '8fbe490e-3cb2-47df-9a2f-41f6d25371b8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7104eef6-cdf0-434b-b785-1135c3fad800';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'documentations-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7104eef6-cdf0-434b-b785-1135c3fad800';
    $display->content['new-7104eef6-cdf0-434b-b785-1135c3fad800'] = $pane;
    $display->panels['middle'][0] = 'new-7104eef6-cdf0-434b-b785-1135c3fad800';
    $pane = new stdClass();
    $pane->pid = 'new-723efd35-d3a1-4871-a28c-2c0d948ff233';
    $pane->panel = 'middle';
    $pane->type = 'orphan_pages';
    $pane->subtype = 'orphan_pages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = '723efd35-d3a1-4871-a28c-2c0d948ff233';
    $display->content['new-723efd35-d3a1-4871-a28c-2c0d948ff233'] = $pane;
    $display->panels['middle'][1] = 'new-723efd35-d3a1-4871-a28c-2c0d948ff233';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['project_documentations_tab'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'project_news_tab';
  $page->task = 'page';
  $page->admin_title = 'Project news tab';
  $page->admin_description = '';
  $page->path = 'node/%node/news';
  $page->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'og_is_node_group',
        'settings' => NULL,
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      4 => array(
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
    'title' => 'News',
    'name' => 'navigation',
    'weight' => '-1',
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
      'identifier' => 'Project node',
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
  $handler->name = 'page_project_news_tab_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'project_news_tab';
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
  $display->title = '%node:title news';
  $display->uuid = '57538c96-2a3a-4e40-b9aa-f0283f3985ca';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-512474d1-24ae-4995-8720-5ea918a80484';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'og_group_ref_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '512474d1-24ae-4995-8720-5ea918a80484';
    $display->content['new-512474d1-24ae-4995-8720-5ea918a80484'] = $pane;
    $display->panels['middle'][0] = 'new-512474d1-24ae-4995-8720-5ea918a80484';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-512474d1-24ae-4995-8720-5ea918a80484';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['project_news_tab'] = $page;

  return $pages;

}
