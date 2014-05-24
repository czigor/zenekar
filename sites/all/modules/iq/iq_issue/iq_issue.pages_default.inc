<?php
/**
 * @file
 * iq_issue.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function iq_issue_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Issue page',
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
    'relationships' => array(
      0 => array(
        'identifier' => 'Project',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:og_group_ref-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'issue' => 'issue',
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<span class="number"><span class="ct">%node:content-type</span> #%node:nid</span> <span class="essence">%node:title</span>';
  $display->uuid = '5ed60e83-05e3-498a-b00e-9283a8960407';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e316941c-d0b5-4a2a-867f-d3307a3fb290';
    $pane->panel = 'center';
    $pane->type = 'panels_mini';
    $pane->subtype = 'issue_details';
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
    $pane->uuid = 'e316941c-d0b5-4a2a-867f-d3307a3fb290';
    $display->content['new-e316941c-d0b5-4a2a-867f-d3307a3fb290'] = $pane;
    $display->panels['center'][0] = 'new-e316941c-d0b5-4a2a-867f-d3307a3fb290';
    $pane = new stdClass();
    $pane->pid = 'new-fb2d5d6d-3205-471b-8627-99ff375a86cd';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_description';
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
    $pane->uuid = 'fb2d5d6d-3205-471b-8627-99ff375a86cd';
    $display->content['new-fb2d5d6d-3205-471b-8627-99ff375a86cd'] = $pane;
    $display->panels['center'][1] = 'new-fb2d5d6d-3205-471b-8627-99ff375a86cd';
    $pane = new stdClass();
    $pane->pid = 'new-3e5dc9fd-a910-49e0-8b7d-d5eea6fe79f2';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_how_to_demo';
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
    $pane->uuid = '3e5dc9fd-a910-49e0-8b7d-d5eea6fe79f2';
    $display->content['new-3e5dc9fd-a910-49e0-8b7d-d5eea6fe79f2'] = $pane;
    $display->panels['center'][2] = 'new-3e5dc9fd-a910-49e0-8b7d-d5eea6fe79f2';
    $pane = new stdClass();
    $pane->pid = 'new-05f412a4-6b1e-4b34-a37c-e9554776e49f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_done_if_when';
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
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '05f412a4-6b1e-4b34-a37c-e9554776e49f';
    $display->content['new-05f412a4-6b1e-4b34-a37c-e9554776e49f'] = $pane;
    $display->panels['center'][3] = 'new-05f412a4-6b1e-4b34-a37c-e9554776e49f';
    $pane = new stdClass();
    $pane->pid = 'new-c587af34-87dc-4bf8-9341-72c4adbcf182';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'issue_attachments-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c587af34-87dc-4bf8-9341-72c4adbcf182';
    $display->content['new-c587af34-87dc-4bf8-9341-72c4adbcf182'] = $pane;
    $display->panels['center'][4] = 'new-c587af34-87dc-4bf8-9341-72c4adbcf182';
    $pane = new stdClass();
    $pane->pid = 'new-ab3a3353-7fb1-4f25-b1f9-662012680b18';
    $pane->panel = 'center';
    $pane->type = 'panels_mini';
    $pane->subtype = 'subscription';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ab3a3353-7fb1-4f25-b1f9-662012680b18';
    $display->content['new-ab3a3353-7fb1-4f25-b1f9-662012680b18'] = $pane;
    $display->panels['center'][5] = 'new-ab3a3353-7fb1-4f25-b1f9-662012680b18';
    $pane = new stdClass();
    $pane->pid = 'new-73dd62a4-384e-431c-8e7b-499b3fbd3eb1';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_tags';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '73dd62a4-384e-431c-8e7b-499b3fbd3eb1';
    $display->content['new-73dd62a4-384e-431c-8e7b-499b3fbd3eb1'] = $pane;
    $display->panels['center'][6] = 'new-73dd62a4-384e-431c-8e7b-499b3fbd3eb1';
    $pane = new stdClass();
    $pane->pid = 'new-c88e1fef-6166-43dc-afa8-995604577479';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'issues-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'c88e1fef-6166-43dc-afa8-995604577479';
    $display->content['new-c88e1fef-6166-43dc-afa8-995604577479'] = $pane;
    $display->panels['center'][7] = 'new-c88e1fef-6166-43dc-afa8-995604577479';
    $pane = new stdClass();
    $pane->pid = 'new-ab79805f-6b43-42ce-bbaa-02a9d0c6a990';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'issue_comments-panel_pane_default';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'ab79805f-6b43-42ce-bbaa-02a9d0c6a990';
    $display->content['new-ab79805f-6b43-42ce-bbaa-02a9d0c6a990'] = $pane;
    $display->panels['center'][8] = 'new-ab79805f-6b43-42ce-bbaa-02a9d0c6a990';
    $pane = new stdClass();
    $pane->pid = 'new-d50647c3-e81e-4559-a422-3ad5006afca1';
    $pane->panel = 'center';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'd50647c3-e81e-4559-a422-3ad5006afca1';
    $display->content['new-d50647c3-e81e-4559-a422-3ad5006afca1'] = $pane;
    $display->panels['center'][9] = 'new-d50647c3-e81e-4559-a422-3ad5006afca1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Issue status terms',
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
              6 => '6',
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
  $display->title = 'Issues with status: %term:i18n-name';
  $display->uuid = 'f1f77f3d-6774-4783-ae71-cc0c23fe6cf7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-213f357c-5217-444f-bd5e-a5a0ccd95e02';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'issues-panel_pane_4';
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
    $pane->uuid = '213f357c-5217-444f-bd5e-a5a0ccd95e02';
    $display->content['new-213f357c-5217-444f-bd5e-a5a0ccd95e02'] = $pane;
    $display->panels['middle'][0] = 'new-213f357c-5217-444f-bd5e-a5a0ccd95e02';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_5';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Issue tag terms',
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
              3 => '3',
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
  $display->title = 'Issues with tag: %term:i18n-name';
  $display->uuid = '9c4ce569-c678-4313-a56e-8174daa68a9e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e4e7c349-67b7-43b6-b1d9-e389edbc201c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'issues-panel_pane_2';
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
    $pane->uuid = 'e4e7c349-67b7-43b6-b1d9-e389edbc201c';
    $display->content['new-e4e7c349-67b7-43b6-b1d9-e389edbc201c'] = $pane;
    $display->panels['middle'][0] = 'new-e4e7c349-67b7-43b6-b1d9-e389edbc201c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_5'] = $handler;

  return $export;
}
