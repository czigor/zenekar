<?php

/**
 * @file
 * Plugin to display a pane in fieldset style.
 */

$plugin = array(
  'title' => t('Fieldset'),
  'description' => t("Display a pane in fieldset style."),
  'render pane' => 'iq_plugins_style_fieldset_render_pane',
  'pane settings form' => 'iq_plugins_style_fieldset_pane_settings_form',
  'pane settings form submit' => 'iq_plugins_style_fieldset_pane_settings_form_submit',
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
function theme_iq_plugins_style_fieldset_render_pane($vars) {
  $content = &$vars['content'];
  $pane = &$vars['pane'];
  $settings = &$vars['settings'];

  if (empty($content->content)) {
    return;
  }

  if (isset($settings['rewrite_output']) && $settings['rewrite_output']) {
    $output = check_plain($settings['rewrite_output']);
    $content->content = preg_replace('/(\[content\])/', render($content->content), $output);
  }

  $return = array(
    '#type' => 'fieldset',
    '#title' => $pane->configuration['override_title'] ? $pane->configuration['override_title_text'] : $content->title,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    'content' => array(
      '#markup' => $content->content,
    ),
    '#attributes' => array(
      'class' => array(
      ),
    ),
  );

  if ($settings['collapsible']) {
    $return['#attributes']['class'][] = 'collapsible';
    if ($settings['collapsed']) {
      $return['#attributes']['class'][] = 'collapsed';
    }
    $return['#attached']['js'] = array(
      'misc/form.js',
      'misc/collapse.js',
    );
  }

  return drupal_render($return);
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
function iq_plugins_style_fieldset_pane_settings_form($conf, $display, $pid, $type, $form_state) {
  $form['rewrite_output'] = array(
    '#type' => 'textfield',
    '#title' => t('Rewrite output'),
    '#default_value' => isset($conf['rewrite_output']) ? $conf['rewrite_output'] : '[content]',
    '#description' => t("Available replacement patterns: [content] == Pane's rendered content. HTML not allowed."),
  );
  $form['collapsible'] = array(
    '#type' => 'checkbox',
    '#title' => t('Collapsible'),
    '#default_value' => isset($conf['collapsible']) ? $conf['collapsible'] : TRUE,
    '#description' => t('Enable this to display the pane as collapsible.'),
  );
  $form['collapsed'] = array(
    '#type' => 'checkbox',
    '#title' => t('Collapsed'),
    '#default_value' => isset($conf['collapsed']) ? $conf['collapsed'] : TRUE,
    '#description' => t('Enable this to display the pane fieldset collapsed by default.'),
    '#states' => array(
      'invisible' => array(
        'input[name="settings[collapsible]"]' => array('checked' => FALSE),
      ),
    ),
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
function iq_plugins_style_fieldset_pane_settings_form_submit($form, &$form_settings, &$form_state) {
  foreach (array('rewrite_output', 'collapsible', 'collapsed') as $setting) {
    if (isset($form_settings[$setting])) {
      $form_state['conf'][$setting] = $form_settings[$setting];
    }
  }
}
