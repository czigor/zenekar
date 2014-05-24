<?php
/**
 * @file
 * iq_news.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function iq_news_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'news_details';
  $mini->category = '';
  $mini->admin_title = 'News details';
  $mini->admin_description = 'Mini panel for news details, for example project, updated date, updated by, etc.';
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
  $display->uuid = 'c0518ec3-0a1f-42a9-8091-dcddb90ff6e7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9b77c45b-077b-4f52-82b2-6227063bf891';
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
    $pane->uuid = '9b77c45b-077b-4f52-82b2-6227063bf891';
    $display->content['new-9b77c45b-077b-4f52-82b2-6227063bf891'] = $pane;
    $display->panels['middle'][0] = 'new-9b77c45b-077b-4f52-82b2-6227063bf891';
    $pane = new stdClass();
    $pane->pid = 'new-308a2471-1833-4ae0-9217-8e39c14377e6';
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
    $pane->uuid = '308a2471-1833-4ae0-9217-8e39c14377e6';
    $display->content['new-308a2471-1833-4ae0-9217-8e39c14377e6'] = $pane;
    $display->panels['middle'][1] = 'new-308a2471-1833-4ae0-9217-8e39c14377e6';
    $pane = new stdClass();
    $pane->pid = 'new-fa4ec99d-1402-454c-a5ad-b1f5e5bc06f9';
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
    $pane->uuid = 'fa4ec99d-1402-454c-a5ad-b1f5e5bc06f9';
    $display->content['new-fa4ec99d-1402-454c-a5ad-b1f5e5bc06f9'] = $pane;
    $display->panels['middle'][2] = 'new-fa4ec99d-1402-454c-a5ad-b1f5e5bc06f9';
    $pane = new stdClass();
    $pane->pid = 'new-e79d771f-b783-4e17-8e3d-f216e11538e7';
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
    $pane->uuid = 'e79d771f-b783-4e17-8e3d-f216e11538e7';
    $display->content['new-e79d771f-b783-4e17-8e3d-f216e11538e7'] = $pane;
    $display->panels['middle'][3] = 'new-e79d771f-b783-4e17-8e3d-f216e11538e7';
    $pane = new stdClass();
    $pane->pid = 'new-e5cc4645-4299-4b1a-a46c-5769dac54510';
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
    $pane->uuid = 'e5cc4645-4299-4b1a-a46c-5769dac54510';
    $display->content['new-e5cc4645-4299-4b1a-a46c-5769dac54510'] = $pane;
    $display->panels['middle'][4] = 'new-e5cc4645-4299-4b1a-a46c-5769dac54510';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['news_details'] = $mini;

  return $export;
}
