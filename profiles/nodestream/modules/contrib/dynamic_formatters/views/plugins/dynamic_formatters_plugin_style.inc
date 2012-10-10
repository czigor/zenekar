<?php

/**
 * @file
 * Style plugin capable of rendering trees.
 */

class dynamic_formatters_plugin_style extends views_plugin_style {
  /**
   * Define default options.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['dynamic_grouping'] = array('default' => 0);
    $options['parent'] = array('defualt' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    if ($this->uses_fields()) {
      $form['dynamic_grouping'] = array(
        '#title' => t('Use dynamic formatters grouping'),
        '#type' => 'checkbox',
        '#description' => t('Check this if you want to use dynamic formatters grouping.
          In order for this to work, you need to add the field you want to group on to the list of fields,
          and then select it here.'),
        '#default_value' => $this->options['dynamic_grouping'],
        '#weight' => -1,
      );
      $grouping_options = $form['grouping'][0]['field']['#options'];
      $form['grouping'] = array(
        '#title' => t('Grouping field'),
        '#options' => $grouping_options,
        '#default_value' => $this->options['grouping'],
        '#type' => 'select',
      );
      $form['parent'] = array(
        '#title' => t('Parent field'),
        '#description' => t('Select the field that the grouping field targets.
          You need to specify a value here
          if you want the parent and child styles to be selected properly.'),
        '#type' => 'select',
        '#default_value' => $this->options['parent'],
        '#options' => $grouping_options,
      );
    }
  }

  /**
   * Render the display in this style.
   */
  function render() {
    if (!$this->options['dynamic_grouping']) {
      return parent::render();
    }
    if ($this->uses_row_plugin() && empty($this->row_plugin)) {
      debug('views_plugin_style_default: Missing row plugin');
      return;
    }
    $grouping_field = $this->options['grouping'];
    $parent_field = $this->options['parent'];
    $tree = $this->build_tree($this->view->result, $parent_field, $grouping_field);
    $groups = array();
    $this->render_tree($tree, $groups);
    $output = '';
    foreach ($groups as $group_index => $group) {
      $output .= theme($this->theme_functions(),
      array(
        'view' => $this->view,
        'options' => $this->options,
        'rows' => $group,
        'title' => $group_index)
      );
    }
    unset($this->view->row_index);
    return $output;
  }

  function build_tree($records, $parent_field = '', $parent_reference_field = '') {
    $tree = array();
    $this->render_fields($this->view->result);
    foreach ($records as $row_index => $record) {
      $parent_value = $this->get_field_value($row_index, $parent_field);
      $reference_value = $this->get_field_value($row_index, $parent_reference_field);
      // If this parent value hasn't shown up yet, create a new branch of the tree
      // and put this value as the parent.
      if (isset($tree[$reference_value]) && $reference_value != 0) {
        $tree[$reference_value]['children'][$row_index] = array(
          'parent' => $record,
          'children' => array(),
          'row_index' => $row_index,
        );
      }
      else {
        $tree[$parent_value] = array(
          'parent' => $record,
          'children' => array(),
          'row_index' => $row_index,
        );
      }
    }
    return $tree;
  }

  function render_tree($tree, &$rows, $parent = NULL, $children = FALSE) {
    foreach ($tree as $group_key => $node) {
      $this->view->row_index = $node['row_index'];
      if (isset($parent)) {
        $parent_key = $parent['parent_key'];
      }
      else {
        $parent_key = $node['parent_key'] = $group_key;
      }
      if ($this->uses_row_plugin()) {
        // Render the parent
        if (!$children) {
          $this->row_plugin->parent = $node['parent'];
        }
        $rows[$parent_key][$node['row_index']] = $this->row_plugin->render($node['parent']);
      }
      else {
        $rows[$parent_key][$node['row_index']] = $this->row_plugin->render($node['parent']);
      }
      // Render the children.
      $this->render_tree($node['children'], $rows, $node, TRUE);
    }
  }

  function get_field_value($index, $field) {
    if (isset($this->view->field[$field])) {
      $grouping = $this->get_field($index, $field);
      return $grouping;
    }
    return '';
  }
}
