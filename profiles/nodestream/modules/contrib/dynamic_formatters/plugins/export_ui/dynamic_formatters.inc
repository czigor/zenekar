<?php

/**
 * @file
 * A UI for dynamic formatters.
 */

$plugin = array(
  'schema' => 'dynamic_formatters_presets',
  'access' => 'administer dynamic formatters',
  'create access' => 'create dynamic formatters',
  'menu' => array(
    'menu item' => 'dynamic-formatters',
    'menu title' => 'Dynamic formatters',
    'menu description' => 'Administer dynamic formatter presets.',
  ),
  'title singular' => t('preset'),
  'title plural' => t('presets'),
  'title singular proper' => t('Dynamic formatter preset'),
  'title plural proper' => t('Dynamic formatter presets'),
  'form' => array(
    'settings' => 'dynamic_formatters_export_ui_form',
    'submit' => 'dynamic_formatters_export_ui_form_submit',
  ),
);

function dynamic_formatters_export_ui_form(&$form, &$form_state) {
  $preset = $form_state['item'];
  $renderers = ctools_get_plugins('dynamic_formatters', 'plugins');
  $renderer_options = dynamic_formatters_get_renderer_options();
  if (!empty($form_state['values']['renderer'])) {
    $renderer = $form_state['renderer'];
  }
  elseif (isset($item->renderer)) {
    $renderer = $item->renderer;
  }
  else {
    $renderer = current(array_keys($renderer_options));
  }
  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => $preset->title,
    '#required' => TRUE,
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#title' => t('Description'),
    '#description' => t('The human readable name or description of this preset.'),
    '#default_value' => $preset->description,
  );
  $form['renderer'] = array(
    '#type' => 'select',
    '#title' => t('Renderer'),
    '#description' => t('The renderer to use for this preset'),
    '#ajax' => array(
      'wrapper' => 'renderer-wrapper',
      'callback' => 'dynamic_formatters_export_ui_renderer_callback',
    ),
    '#options' => $renderer_options,
    '#default_value' => isset($renderer) ? $renderer : NULL,
  );
  $form['renderer_options'] = array(
    '#type' => 'fieldset',
    '#prefix' => '<div id="renderer-wrapper">',
    '#suffix' => '</div>',
  );
  if (isset($renderer) && $renderer) {
    $renderer_class = ctools_plugin_get_class($renderers[$renderer], 'renderer');
    if (isset($renderer_class)) {
      $renderer_object = new $renderer_class();
    }
    $parent_styles = $renderer_object->getParentStyles();
    $children_styles = $renderer_object->getChildrenStyles();
    $form['renderer_options']['parent_style'] = array(
      '#type' => 'select',
      '#title' => t('Parent style'),
      '#options' => $parent_styles,
      '#default_value' => isset($preset->parent_style) ? $preset->parent_style : '',
    );
    $form['renderer_options']['children_style'] = array(
      '#type' => 'select',
      '#title' => t('Child style'),
      '#options' => $parent_styles,
      '#default_value' => isset($preset->children_style) ? $preset->children_style : '',
    );
    if ($renderer_object->usesPresetForm()) {
      $renderer_object->presetOptionsForm($preset, $form, $form_state);
    }
  }
  return $form;
}

function dynamic_formatters_export_ui_renderer_callback(&$form, &$form_state) {
  $renderer = $form_state['renderer'];
}

function dynamic_formatters_export_ui_form_submit(&$form, &$form_state) {
  $form_state['item']->renderer = $form_state['values']['renderer'];
  $form_state['item']->parent_style = $form_state['values']['parent_style'];
  $form_state['item']->children_style = $form_state['values']['children_style'];
  $form_state['item']->title = $form_state['values']['title'];
}
