<?php
/**
 * @file
 * iq_issue.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function iq_issue_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'issue_details';
  $mini->category = '';
  $mini->admin_title = 'Issue details';
  $mini->admin_description = 'Mini panel for issue details, for example project, updated date, updated by, etc.';
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
    ),
    'middle' => array(
      'style' => 'table',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bd792856-4bf4-4647-b65e-2a8dc9a5bfe6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-655e36fd-b3b6-4588-84d6-725b3641238a';
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
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Project:</strong>',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '655e36fd-b3b6-4588-84d6-725b3641238a';
    $display->content['new-655e36fd-b3b6-4588-84d6-725b3641238a'] = $pane;
    $display->panels['middle'][0] = 'new-655e36fd-b3b6-4588-84d6-725b3641238a';
    $pane = new stdClass();
    $pane->pid = 'new-09353509-cdff-4c0d-9791-eb53b7bef0ca';
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
    $pane->uuid = '09353509-cdff-4c0d-9791-eb53b7bef0ca';
    $display->content['new-09353509-cdff-4c0d-9791-eb53b7bef0ca'] = $pane;
    $display->panels['middle'][1] = 'new-09353509-cdff-4c0d-9791-eb53b7bef0ca';
    $pane = new stdClass();
    $pane->pid = 'new-4c6728a2-a62d-48b3-82c1-40cd30395423';
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
    $pane->uuid = '4c6728a2-a62d-48b3-82c1-40cd30395423';
    $display->content['new-4c6728a2-a62d-48b3-82c1-40cd30395423'] = $pane;
    $display->panels['middle'][2] = 'new-4c6728a2-a62d-48b3-82c1-40cd30395423';
    $pane = new stdClass();
    $pane->pid = 'new-dd718bcc-f38d-49e6-bc14-a0b0c953b268';
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
    $pane->uuid = 'dd718bcc-f38d-49e6-bc14-a0b0c953b268';
    $display->content['new-dd718bcc-f38d-49e6-bc14-a0b0c953b268'] = $pane;
    $display->panels['middle'][3] = 'new-dd718bcc-f38d-49e6-bc14-a0b0c953b268';
    $pane = new stdClass();
    $pane->pid = 'new-9fa00dfa-60e8-403a-aab4-4cdca3b69335';
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
    $pane->uuid = '9fa00dfa-60e8-403a-aab4-4cdca3b69335';
    $display->content['new-9fa00dfa-60e8-403a-aab4-4cdca3b69335'] = $pane;
    $display->panels['middle'][4] = 'new-9fa00dfa-60e8-403a-aab4-4cdca3b69335';
    $pane = new stdClass();
    $pane->pid = 'new-eafe4c85-0a5e-404c-9caa-c893923b08b0';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_assigned_to';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'iq_assigned_to',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Assigned to:</strong>',
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
    $pane->uuid = 'eafe4c85-0a5e-404c-9caa-c893923b08b0';
    $display->content['new-eafe4c85-0a5e-404c-9caa-c893923b08b0'] = $pane;
    $display->panels['middle'][5] = 'new-eafe4c85-0a5e-404c-9caa-c893923b08b0';
    $pane = new stdClass();
    $pane->pid = 'new-afd87e6f-b8d6-443d-ac1e-f55e009880a7';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_business_value';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => '',
        'prefix_suffix' => 1,
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Business value:</strong>',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'afd87e6f-b8d6-443d-ac1e-f55e009880a7';
    $display->content['new-afd87e6f-b8d6-443d-ac1e-f55e009880a7'] = $pane;
    $display->panels['middle'][6] = 'new-afd87e6f-b8d6-443d-ac1e-f55e009880a7';
    $pane = new stdClass();
    $pane->pid = 'new-e359618b-2b8f-4e81-915e-56deb314dcd6';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_status_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'i18n_taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Status:</strong>',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'e359618b-2b8f-4e81-915e-56deb314dcd6';
    $display->content['new-e359618b-2b8f-4e81-915e-56deb314dcd6'] = $pane;
    $display->panels['middle'][7] = 'new-e359618b-2b8f-4e81-915e-56deb314dcd6';
    $pane = new stdClass();
    $pane->pid = 'new-3d6e9817-65c4-4d96-99cc-b9674fafa928';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_type';
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
      'override_title_text' => '<strong>Type:</strong>',
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '3d6e9817-65c4-4d96-99cc-b9674fafa928';
    $display->content['new-3d6e9817-65c4-4d96-99cc-b9674fafa928'] = $pane;
    $display->panels['middle'][8] = 'new-3d6e9817-65c4-4d96-99cc-b9674fafa928';
    $pane = new stdClass();
    $pane->pid = 'new-3fc2c74c-2d58-444d-8e98-fabf60f58351';
    $pane->panel = 'middle';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:comment_timer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Total time spent on comments:</strong>',
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '3fc2c74c-2d58-444d-8e98-fabf60f58351';
    $display->content['new-3fc2c74c-2d58-444d-8e98-fabf60f58351'] = $pane;
    $display->panels['middle'][9] = 'new-3fc2c74c-2d58-444d-8e98-fabf60f58351';
    $pane = new stdClass();
    $pane->pid = 'new-949c7ad0-aa70-4335-99eb-96695c8fcd4c';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_parent';
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
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Parent issue:</strong>',
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '949c7ad0-aa70-4335-99eb-96695c8fcd4c';
    $display->content['new-949c7ad0-aa70-4335-99eb-96695c8fcd4c'] = $pane;
    $display->panels['middle'][10] = 'new-949c7ad0-aa70-4335-99eb-96695c8fcd4c';
    $pane = new stdClass();
    $pane->pid = 'new-aff4b24b-3db2-4b10-bb28-364f34b14348';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_estimate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_decimal',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => '2',
        'prefix_suffix' => 1,
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '<strong>Estimate:</strong>',
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'aff4b24b-3db2-4b10-bb28-364f34b14348';
    $display->content['new-aff4b24b-3db2-4b10-bb28-364f34b14348'] = $pane;
    $display->panels['middle'][11] = 'new-aff4b24b-3db2-4b10-bb28-364f34b14348';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['issue_details'] = $mini;

  return $export;
}
