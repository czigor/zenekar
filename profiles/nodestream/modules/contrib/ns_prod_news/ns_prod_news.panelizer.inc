<?php
/**
 * @file
 * ns_prod_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ns_prod_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:ns_prod_news_topic:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'ns_prod_news_topic';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->did = 1;
  $panelizer->access = '';
  $display = new panels_display();
  $display->layout = 'ns_core_column_three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header_alpha' => NULL,
      'header_beta' => NULL,
      'main' => NULL,
      'aside_alpha' => NULL,
      'aside_beta' => NULL,
      'footer_alpha' => NULL,
      'footer_beta' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'aside_alpha';
    $pane->type = 'views_panes';
    $pane->subtype = 'ns_prod_news_topic-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
      'arguments' => array(
        'uuid' => '149a424b-72b4-1874-2559-57830f58194e',
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
    $display->content['new-1'] = $pane;
    $display->panels['aside_alpha'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'header_alpha';
    $pane->type = 'views_panes';
    $pane->subtype = 'ns_prod_news_topic-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'items_per_page' => '10',
      'offset' => '0',
      'arguments' => array(
        'uuid' => '999d1976-6850-afa4-b555-398d330431fa',
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
    $display->content['new-2'] = $pane;
    $display->panels['header_alpha'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'header_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'ns_prod_news_topic-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'items_per_page' => '10',
      'offset' => '0',
      'arguments' => array(
        'uuid' => '616385ed-713a-4764-5904-4a64ed03811e',
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
    $display->content['new-3'] = $pane;
    $display->panels['header_beta'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'ns_prod_news_topic-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
      'arguments' => array(
        'uuid' => 'a3e30f46-72ed-e304-913c-3af5663d15f3',
      ),
      'context' => array(
        0 => 'panelizer',
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
    $display->content['new-4'] = $pane;
    $display->panels['main'][0] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4';
  $panelizer->display = $display;
  $export['taxonomy_term:ns_prod_news_topic:default'] = $panelizer;

  return $export;
}
