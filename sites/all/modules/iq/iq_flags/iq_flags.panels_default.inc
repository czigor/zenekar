<?php
/**
 * @file
 * iq_flags.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function iq_flags_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'project_subscription';
  $mini->category = 'Mini panel';
  $mini->admin_title = 'Project subscriptions';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Subscriptions';
  $display->uuid = 'dd6113b6-365d-4ce2-9099-5cfa6f1577ef';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4c2d078c-c103-4758-bd69-38fb5caab267';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'node:flag-subscription-to-node-link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'requiredcontext_entity:node_1',
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
    $pane->uuid = '4c2d078c-c103-4758-bd69-38fb5caab267';
    $display->content['new-4c2d078c-c103-4758-bd69-38fb5caab267'] = $pane;
    $display->panels['middle'][0] = 'new-4c2d078c-c103-4758-bd69-38fb5caab267';
    $pane = new stdClass();
    $pane->pid = 'new-7f02543d-d12f-4613-9ed8-1a820825a5be';
    $pane->panel = 'middle';
    $pane->type = 'flag_link';
    $pane->subtype = 'user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'subscription_to_everything',
      'context' => 'requiredcontext_user_1',
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
    $pane->uuid = '7f02543d-d12f-4613-9ed8-1a820825a5be';
    $display->content['new-7f02543d-d12f-4613-9ed8-1a820825a5be'] = $pane;
    $display->panels['middle'][1] = 'new-7f02543d-d12f-4613-9ed8-1a820825a5be';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4c2d078c-c103-4758-bd69-38fb5caab267';
  $mini->display = $display;
  $export['project_subscription'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'subscription';
  $mini->category = 'Mini panel';
  $mini->admin_title = 'Subscriptions';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array(
    0 => array(
      'identifier' => 'Project',
      'keyword' => 'project',
      'name' => 'entity_from_field:og_group_ref-node-node',
      'delta' => 0,
      'context' => 'requiredcontext_entity:node_1',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => array(
        'list_type' => 'ul',
      ),
    ),
    'middle' => array(
      'style' => 'list',
    ),
  );
  $display->cache = array();
  $display->title = 'Subscriptions';
  $display->uuid = 'dd6113b6-365d-4ce2-9099-5cfa6f1577ef';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4c2d078c-c103-4758-bd69-38fb5caab267';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'node:flag-subscription-to-node-link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'requiredcontext_entity:node_1',
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
    $pane->uuid = '4c2d078c-c103-4758-bd69-38fb5caab267';
    $display->content['new-4c2d078c-c103-4758-bd69-38fb5caab267'] = $pane;
    $display->panels['middle'][0] = 'new-4c2d078c-c103-4758-bd69-38fb5caab267';
    $pane = new stdClass();
    $pane->pid = 'new-a09f9990-e052-455d-b0b5-73b77ef07a6f';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'node:flag-subscription-to-node-link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'relationship_entity_from_field:og_group_ref-node-node_1',
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
    $pane->uuid = 'a09f9990-e052-455d-b0b5-73b77ef07a6f';
    $display->content['new-a09f9990-e052-455d-b0b5-73b77ef07a6f'] = $pane;
    $display->panels['middle'][1] = 'new-a09f9990-e052-455d-b0b5-73b77ef07a6f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4c2d078c-c103-4758-bd69-38fb5caab267';
  $mini->display = $display;
  $export['subscription'] = $mini;

  return $export;
}
