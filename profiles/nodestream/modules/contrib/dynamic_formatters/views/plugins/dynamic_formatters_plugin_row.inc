<?php

/**
 * @file
 * Contains the node view row style plugin.
 */

/**
 * Plugin which performs a node_view on the resulting object.
 *
 * Most of the code on this object is in the theme function.
 */
class dynamic_formatters_plugin_row extends views_plugin_row {
  // Basic properties that let the row style follow relationships.
  var $base_table = 'node';
  var $base_field = 'nid';
  var $preset_style = 'parent_style';
  // Stores the entities loaded with pre_render.
  var $entities = array();
  var $renderers = array();

  function init(&$view, &$display, $options = NULL) {
    parent::init($view, $display, $options);
    // Handle existing views with the deprecated 'teaser' option.
    if (isset($this->options['teaser'])) {
      $this->options['build_mode'] = $this->options['teaser'] ? 'teaser' : 'full';
    }
    // Handle existing views which has used build_mode instead of view_mode.
    if (isset($this->options['build_mode'])) {
      $this->options['view_mode'] = $this->options['build_mode'];
    }
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['preset_name'] = array('default' => '');
    $options['preset_field'] = array('default' => '');
    $options['preset_options'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    // Get all fields.
    $handlers = $this->display->handler->get_handlers('field');
    $field_options = array();
    foreach ($handlers as $field_id => $handler) {
      $field_title = $handler->label() ? $handler->label() : $handler->ui_name();
      $parent_options[$field_id] = $field_title;
      if ($handler->field_info['type'] == 'dynamic_formatters_preset') {
        $field_options[$field_id] = $field_title;
      }
    }
    $preset_options = dynamic_formatters_get_preset_options();
    if (!empty($this->options['preset_name'])) {
      $preset = dynamic_formatters_preset_load($this->options['preset_name']);
    }
    elseif (count($preset_options)) {
      $preset = dynamic_formatters_preset_load(current(array_keys($preset_options)));
    }
    else {
      form_set_error('preset_name', t('You need to create at least one preset'));
    }
    $form['preset_name'] = array(
      '#type' => 'select',
      '#title' => t('Preset'),
      '#description' => t('Select which preset to provide for this view.'),
      '#options' => $preset_options,
      '#default_value' => $this->options['preset_name'],
    );
    $form['preset_field'] = array(
      '#type' => 'select',
      '#title' => t('Preset reference field'),
      '#description' => t('Select afield that will provide the preset for each row.'),
      '#options' => array('' => t('- None -')) + $field_options,
      '#default_value' => $this->options['preset_field'],
    );
    if (isset($preset)) {
      $renderer_class = ctools_plugin_load_class('dynamic_formatters', 'plugins', $preset->renderer, 'renderer');
      $renderer = new $renderer_class();
      if ($renderer->usesViewsForm()) {
        $renderer->viewsOptionsForm($this, $preset, $form, $form_state);
      }
    }
  }

  function summary_title() {
    return check_plain($this->options['preset_name']);
  }

  function pre_render($values) {
    $ids = array();
    foreach ($values as $row) {
      $ids[] = $row->{$this->field_alias};
    }
    $this->entities = entity_load($this->base_table, $ids);
  }

  function render($row) {
    ctools_include('export');
    $entity = $this->entities[$row->{$this->field_alias}];
    if (isset($this->parent)) {
      $parent_entity = $this->entities[$this->parent->{$this->field_alias}];
    }
    else {
      $parent_entity = $entity;
    }
    if (!empty($this->options['preset_field'])) {
      $values = field_get_items($this->base_table, $parent_entity, $this->options['preset_field']);
      if (isset($values[0]['preset'])) {
        $preset = dynamic_formatters_preset_load($values[0]['preset']);
      }
    }
    if (empty($preset)) {
      $preset = dynamic_formatters_preset_load($this->options['preset_name']);
    }
    // Safeguard against error initializing the preset.
    if (!$preset) {
      debug('The preset set in the configuration does not exist.');
      return '';
    }
    if (!isset($this->renderers[$preset->renderer])) {
      $renderer = ctools_plugin_load_class('dynamic_formatters', 'plugins', $preset->renderer, 'renderer');
      $this->renderers[$preset->renderer] = $renderer = new $renderer();
    }
    else {
      $renderer = $this->renderers[$preset->renderer];
    }
    if (is_object($renderer)) {
      return $renderer->render($preset, $entity, $parent_entity == $entity ? 'parent_style' : 'children_style', $this, $row);
    }
    return '';
  }
}
