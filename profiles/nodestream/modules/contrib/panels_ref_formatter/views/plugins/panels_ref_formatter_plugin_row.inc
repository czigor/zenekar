<?php
/**
 * @file
 * Contains the panel row style plugin.
 */

/**
 * Plugin which performs a node_view on the resulting object.
 *
 * Most of the code on this object is in the theme function.
 */
class panels_ref_formatter_plugin_row extends views_plugin_row {
  // Basic properties that let the row style follow relationships.
  var $base_table = 'node';
  var $base_field = 'nid';
  // Stores the entities loaded with pre_render.
  var $entities = array();
  var $renderers = array();

  function init(&$view, &$display, $options = NULL) {
    parent::init($view, $display, $options);
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['mini_panel'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['mini_panel'] = array(
      '#type' => 'select',
      '#options' => panels_ref_formatter_panels_options('node'),
      '#title' => t('Mini panel'),
      '#description' => t('The mini panel to use to render rows.'),
      '#default_value' => $this->options['mini_panel'],
    );
  }

  function summary_title() {
    return check_plain($this->options['mini_panel']);
  }

  function pre_render($values) {
    $ids = array();
    foreach ($values as $row) {
      $ids[] = $row->{$this->field_alias};
    }
    $this->entities = entity_load($this->base_table, $ids);
  }

  function render($row) {
    $entity = $this->entities[$row->{$this->field_alias}];
    ctools_include('context');
    if (!isset($this->panel)) {
      $this->panel = panels_mini_load($this->options['mini_panel']);
      if (empty($this->panel)) {
        return;
      }
    }
    $contexts = array(ctools_context_create('entity:node', $entity));
    $context = ctools_context_match_required_contexts($this->panel->requiredcontexts, $contexts);
    $this->panel->context = $this->panel->display->context = ctools_context_load_contexts($this->panel, FALSE, $context);
    $this->panel->display->owner = $this->panel;
    $this->panel->display->owner->id = $this->panel->name;
    $row->additional_info = $this->panel->context;
    return panels_render_display($this->panel->display);
  }
}

