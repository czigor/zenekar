<?php
/**
 * @file
 * iq_documentation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function iq_documentation_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Documentation page',
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
              'documentation' => 'documentation',
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
  $display->title = '';
  $display->uuid = '1216062e-d024-49c4-8a66-fae4cea9491a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cdb63bc3-12f7-4c0a-a993-60666dbb7d29';
    $pane->panel = 'center';
    $pane->type = 'panels_mini';
    $pane->subtype = 'documentation_details';
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
    $pane->uuid = 'cdb63bc3-12f7-4c0a-a993-60666dbb7d29';
    $display->content['new-cdb63bc3-12f7-4c0a-a993-60666dbb7d29'] = $pane;
    $display->panels['center'][0] = 'new-cdb63bc3-12f7-4c0a-a993-60666dbb7d29';
    $pane = new stdClass();
    $pane->pid = 'new-9ba79e40-0a84-4077-a949-5a6e3e2aa40d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_documentation_body';
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
    $pane->uuid = '9ba79e40-0a84-4077-a949-5a6e3e2aa40d';
    $display->content['new-9ba79e40-0a84-4077-a949-5a6e3e2aa40d'] = $pane;
    $display->panels['center'][1] = 'new-9ba79e40-0a84-4077-a949-5a6e3e2aa40d';
    $pane = new stdClass();
    $pane->pid = 'new-5b6b47b7-015e-428f-9283-a8f694b3ac0d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_documentation_attachments';
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
    $pane->uuid = '5b6b47b7-015e-428f-9283-a8f694b3ac0d';
    $display->content['new-5b6b47b7-015e-428f-9283-a8f694b3ac0d'] = $pane;
    $display->panels['center'][2] = 'new-5b6b47b7-015e-428f-9283-a8f694b3ac0d';
    $pane = new stdClass();
    $pane->pid = 'new-f20f7242-6a94-40e8-89ea-b5f60116827e';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f20f7242-6a94-40e8-89ea-b5f60116827e';
    $display->content['new-f20f7242-6a94-40e8-89ea-b5f60116827e'] = $pane;
    $display->panels['center'][3] = 'new-f20f7242-6a94-40e8-89ea-b5f60116827e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
