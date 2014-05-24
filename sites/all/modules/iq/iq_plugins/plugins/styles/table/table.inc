<?php

/**
 * @file
 * Plugin to display panes in table style.
 */

$plugin = array(
  'title' => t('Table'),
  'description' => t("Display panes in table style."),
  'render region' => 'iq_plugins_style_table_render_region',
  'settings form' => 'iq_plugins_style_table_settings_form',
  'settings form submit' => 'iq_plugins_style_table_settings_form_submit',
  'hook theme' => array(
    'iq_plugins_style_table' => array(
      'variables' => array('panes' => NULL),
      'path' => drupal_get_path('module', 'iq_plugins') . '/plugins/styles/table',
      'template' => 'table',
    ),
  ),
);

/**
 * Region render callback.
 *
 * @param $vars
 *   Panes, display object and region settings.
 *
 * @return string
 *   The rendered region.
 */
function theme_iq_plugins_style_table_render_region($vars) {

  if (empty($vars['panes'])) {
    return;
  }

  $panes = array();
  $num_panes = count($vars['panes']);
  $num_cols = array_key_exists('num_cols', $vars['settings']) ? (int) $vars['settings']['num_cols'] : 2;
  $num_rows = floor($num_panes / $num_cols) + (($num_panes % $num_cols) ? 1 : 0);

  $row_counter = 0;
  $pane_counter = 0;

  foreach ($vars['panes'] as $pane) {
    if ($pane_counter % $num_cols == 0) {
      // Add new pane row.
      $panes[$row_counter] = array(
        'classes' => '',
        'content' => array(),
      );

      // Add classes to pane row.
      $panes[$row_counter]['classes'] .= 'pane-row pane-row-' . ($row_counter + 1);
      if ($row_counter == 0) {
        $panes[$row_counter]['classes'] .= ' pane-row-first';
      }
      if ($row_counter == ($num_rows - 1)) {
        $panes[$row_counter]['classes'] .= ' pane-row-last';
      }
      $panes[$row_counter]['classes'] .= (($row_counter + 1) % 2) ? ' pane-row-odd' : ' pane-row-even';
    }

    // Add classes to pane.
    $pane_index_in_row = $pane_counter % $num_cols;
    $pane_classes = 'pane-col pane-col-' . ($pane_index_in_row + 1);
    if ($pane_index_in_row == 0) {
      $pane_classes .= ' pane-col-first';
    }
    if ($pane_index_in_row == ($num_cols - 1)) {
      $pane_classes .= ' pane-col-last';
    }
    $pane_classes .= (($pane_index_in_row + 1) % 2) ? ' pane-col-odd' : ' pane-col-even';

    // Add pane to pane row.
    $panes[$row_counter]['content'][] = array(
      'classes' => $pane_classes,
      'content' => $pane,
    );

    if (($pane_counter % $num_cols) == ($num_cols - 1)) {
      $row_counter++;
    }
    $pane_counter++;
  }

  // Add custom style to table layout.
  drupal_add_css(drupal_get_path('module', 'iq_plugins') . '/plugins/styles/table/table.css');

  return theme('iq_plugins_style_table', array('panes' => $panes));
}

/**
 * Region settings form callback.
 *
 * @param $conf
 *   Region settings.
 * @param $display
 *   Display object.
 * @param $pid
 *   Pane id.
 * @param $type
 *   Pane type.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
function iq_plugins_style_table_settings_form($conf, $display, $pid, $type, $form_state) {
  $isset_num_cols = array_key_exists('num_cols', $conf);

  $form['num_cols'] = array(
    '#type' => 'select',
    '#title' => t('Number of columns'),
    '#options' => array('2' => 2, '3' => 3, '4' => 4, '5' => 5),
    '#default_value' => $isset_num_cols ? $conf['num_cols'] : '1',
    '#description' => t("Number of columns in the table."),
  );

  return $form;
}

/**
 * Region settings form submit callback.
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_settings
 *   Form settings for easier accessibility.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
function iq_plugins_style_table_settings_form_submit($form, &$form_settings, &$form_state) {
  if (array_key_exists('num_cols', $form_settings)) {
    $form_state['conf']['num_cols'] = $form_settings['num_cols'];
  }
}