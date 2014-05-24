<?php
/**
 * @file
 * iq_documentation.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function iq_documentation_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'documentation_details';
  $mini->category = '';
  $mini->admin_title = 'Documentation details';
  $mini->admin_description = 'Mini panel for documentation details, for example project, updated date, updated by, etc.';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => array(
        'num_cols' => '3',
      ),
      'left' => NULL,
      'right' => NULL,
    ),
    'middle' => array(
      'style' => 'table',
    ),
    'left' => array(
      'style' => 'naked',
    ),
    'right' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '510887aa-c7ef-4312-acd4-963bcbd0209c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fe99ae86-3eab-49a3-a9f7-7a1bc7c62385';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
        'view_mode' => 'full',
        'links' => 1,
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Project:</strong>',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'inline_title',
      'settings' => array(
        'rewrite_output' => '[content]',
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fe99ae86-3eab-49a3-a9f7-7a1bc7c62385';
    $display->content['new-fe99ae86-3eab-49a3-a9f7-7a1bc7c62385'] = $pane;
    $display->panels['middle'][0] = 'new-fe99ae86-3eab-49a3-a9f7-7a1bc7c62385';
    $pane = new stdClass();
    $pane->pid = 'new-7b904ceb-bc47-4d95-8157-3ec5632621fe';
    $pane->panel = 'middle';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Created by:</strong>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'rewrite_output' => '[content]',
      ),
      'style' => 'inline_title',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7b904ceb-bc47-4d95-8157-3ec5632621fe';
    $display->content['new-7b904ceb-bc47-4d95-8157-3ec5632621fe'] = $pane;
    $display->panels['middle'][1] = 'new-7b904ceb-bc47-4d95-8157-3ec5632621fe';
    $pane = new stdClass();
    $pane->pid = 'new-12b4a576-db07-4b2d-9360-be648e715ea9';
    $pane->panel = 'middle';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'short',
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Created:</strong>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'rewrite_output' => '[content]',
      ),
      'style' => 'inline_title',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '12b4a576-db07-4b2d-9360-be648e715ea9';
    $display->content['new-12b4a576-db07-4b2d-9360-be648e715ea9'] = $pane;
    $display->panels['middle'][2] = 'new-12b4a576-db07-4b2d-9360-be648e715ea9';
    $pane = new stdClass();
    $pane->pid = 'new-8fb380dd-7e5c-45fa-a5ac-d95ceafd22e5';
    $pane->panel = 'middle';
    $pane->type = 'last_updated_by';
    $pane->subtype = 'last_updated_by';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_profile' => 1,
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Last updated by:</strong>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'rewrite_output' => '[content]',
      ),
      'style' => 'inline_title',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8fb380dd-7e5c-45fa-a5ac-d95ceafd22e5';
    $display->content['new-8fb380dd-7e5c-45fa-a5ac-d95ceafd22e5'] = $pane;
    $display->panels['middle'][3] = 'new-8fb380dd-7e5c-45fa-a5ac-d95ceafd22e5';
    $pane = new stdClass();
    $pane->pid = 'new-5ff4f0ef-6047-4f10-9201-3e5edc4561a8';
    $pane->panel = 'middle';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'short',
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Last updated:</strong>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'rewrite_output' => '[content]',
      ),
      'style' => 'inline_title',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5ff4f0ef-6047-4f10-9201-3e5edc4561a8';
    $display->content['new-5ff4f0ef-6047-4f10-9201-3e5edc4561a8'] = $pane;
    $display->panels['middle'][4] = 'new-5ff4f0ef-6047-4f10-9201-3e5edc4561a8';
    $pane = new stdClass();
    $pane->pid = 'new-ff875cf6-51aa-4d95-8372-7804c81b67f3';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_documentation_major';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Major documentation:</strong>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'rewrite_output' => '[content]',
      ),
      'style' => 'inline_title',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ff875cf6-51aa-4d95-8372-7804c81b67f3';
    $display->content['new-ff875cf6-51aa-4d95-8372-7804c81b67f3'] = $pane;
    $display->panels['middle'][5] = 'new-ff875cf6-51aa-4d95-8372-7804c81b67f3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['documentation_details'] = $mini;

  return $export;
}
