<?php
/**
 * @file
 * iq_project.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function iq_project_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'project_details';
  $mini->category = '';
  $mini->admin_title = 'Project details';
  $mini->admin_description = 'Mini panel for project details, for example project number, updated date, updated by, etc.';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => array(
        'num_cols' => '3',
      ),
    ),
    'center' => array(
      'style' => 'table',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9ed1eb06-c0dc-472f-9d37-a53147874fa8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-85fe2aa1-0d4d-4b6e-b6f9-5d260548dd8d';
    $pane->panel = 'center';
    $pane->type = 'token';
    $pane->subtype = 'node:nid';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Project number:</strong>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'rewrite_output' => '#[content]',
      ),
      'style' => 'inline_title',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85fe2aa1-0d4d-4b6e-b6f9-5d260548dd8d';
    $display->content['new-85fe2aa1-0d4d-4b6e-b6f9-5d260548dd8d'] = $pane;
    $display->panels['center'][0] = 'new-85fe2aa1-0d4d-4b6e-b6f9-5d260548dd8d';
    $pane = new stdClass();
    $pane->pid = 'new-fd1c6b6c-5a3c-4e8f-94ef-e5e85a71f07a';
    $pane->panel = 'center';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Opened by:</strong>',
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
    $pane->uuid = 'fd1c6b6c-5a3c-4e8f-94ef-e5e85a71f07a';
    $display->content['new-fd1c6b6c-5a3c-4e8f-94ef-e5e85a71f07a'] = $pane;
    $display->panels['center'][1] = 'new-fd1c6b6c-5a3c-4e8f-94ef-e5e85a71f07a';
    $pane = new stdClass();
    $pane->pid = 'new-ad772ce8-88f3-4965-b985-3cc5d76ccfe6';
    $pane->panel = 'center';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'short',
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Opened:</strong>',
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
    $pane->uuid = 'ad772ce8-88f3-4965-b985-3cc5d76ccfe6';
    $display->content['new-ad772ce8-88f3-4965-b985-3cc5d76ccfe6'] = $pane;
    $display->panels['center'][2] = 'new-ad772ce8-88f3-4965-b985-3cc5d76ccfe6';
    $pane = new stdClass();
    $pane->pid = 'new-c0be58f3-f389-4afb-a31c-13e71d25e250';
    $pane->panel = 'center';
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
    $pane->uuid = 'c0be58f3-f389-4afb-a31c-13e71d25e250';
    $display->content['new-c0be58f3-f389-4afb-a31c-13e71d25e250'] = $pane;
    $display->panels['center'][3] = 'new-c0be58f3-f389-4afb-a31c-13e71d25e250';
    $pane = new stdClass();
    $pane->pid = 'new-9254ee55-0e83-4f2a-92b5-3618d10aa4a3';
    $pane->panel = 'center';
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
    $pane->uuid = '9254ee55-0e83-4f2a-92b5-3618d10aa4a3';
    $display->content['new-9254ee55-0e83-4f2a-92b5-3618d10aa4a3'] = $pane;
    $display->panels['center'][4] = 'new-9254ee55-0e83-4f2a-92b5-3618d10aa4a3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['project_details'] = $mini;

  return $export;
}
