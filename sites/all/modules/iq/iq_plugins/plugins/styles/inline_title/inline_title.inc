<?php

/**
 * @file
 * Plugin to display pane's title in inline style.
 */

$plugin = array(
  'title' => t('Inline title'),
  'description' => t("Display pane's title in inline style."),
  'render pane' => 'iq_plugins_style_inline_title_render_pane',
  'pane settings form' => 'iq_plugins_style_inline_title_pane_settings_form',
  'pane settings form submit' => 'iq_plugins_style_inline_title_pane_settings_form_submit',
  'hook theme' => array(
    'iq_plugins_style_inline_title' => array(
      'variables' => array('content' => NULL, 'pane' => NULL, 'display' => NULL),
      'path' => drupal_get_path('module', 'iq_plugins') . '/plugins/styles/inline_title',
      'template' => 'inline-title',
    ),
  ),
);

/**
 * Render callback for a single pane.
 *
 * @param $vars
 *   Pane object, display object and pane settings.
 *
 * @return string
 *   The rendered pane.
 */
function theme_iq_plugins_style_inline_title_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];

  if (empty($content->content)) {
    return;
  }

  $isset_rewrite_output = array_key_exists('rewrite_output', $vars['settings']);

  if ($isset_rewrite_output) {
    $output = check_plain($vars['settings']['rewrite_output']);
    $content->content = preg_replace('/(\[content\])/', render($content->content), $output);
  }

  $style_path = '/plugins/styles/inline_title/inline_title.css';
  drupal_add_css(drupal_get_path('module', 'iq_plugins') . $style_path);

  $template_params = array('content' => $content, 'pane' => $pane, 'display' => $display);

  return theme('iq_plugins_style_inline_title', $template_params);
}

/**
 * Wrapper function for template_preprocess_panels_pane.
 *
 * @param $vars
 *   Raw variables for pane's template.
 */
function template_preprocess_iq_plugins_style_inline_title(&$vars) {
  template_preprocess_panels_pane($vars);
}

/**
 * Pane settings form callback.
 *
 * @param $conf
 *   Pane settings.
 * @param $display
 *   Display object.
 * @param $pid
 *   Pane id.
 * @param $type
 *   Pane type.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
function iq_plugins_style_inline_title_pane_settings_form($conf, $display, $pid, $type, $form_state) {
  $isset_rewrite_output = array_key_exists('rewrite_output', $conf);

  $form['rewrite_output'] = array(
    '#type' => 'textfield',
    '#title' => t('Rewrite output'),
    '#default_value' => $isset_rewrite_output ? $conf['rewrite_output'] : '[content]',
    '#description' => t("Available replacement patterns: [content] == Pane's rendered content. HTML not allowed."),
  );

  return $form;
}

/**
 * Pane settings form submit callback.
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_settings
 *   Form settings for easier accessibility.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
function iq_plugins_style_inline_title_pane_settings_form_submit($form, &$form_settings, &$form_state) {
  if (array_key_exists('rewrite_output', $form_settings)) {
    $form_state['conf']['rewrite_output'] = $form_settings['rewrite_output'];
  }
}