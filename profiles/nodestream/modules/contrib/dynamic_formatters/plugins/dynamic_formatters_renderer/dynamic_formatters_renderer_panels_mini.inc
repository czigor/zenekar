<?php

/**
 * @file
 * A renderer that renders each row as a mini panel.
 */

class dynamic_formatters_renderer_panels_mini extends dynamic_formatters_renderer {
  function usesViewsForm() { return TRUE; }
  function usesPresetForm() { return TRUE; }

  function getChildrenStyles() {
    return $this->getPanelsMini();
  }

  function getParentStyles() {
    return $this->getPanelsMini();
  }

  function getPanelsMini() {
    $panels = panels_mini_load_all();
    $panels_options = array();
    foreach ($panels as $name => $panel) {
      $panels_options[$name] = $panel->admin_title;
    }
    return $panels_options;
  }

  function viewsOptionsForm($plugin, $preset, &$form, &$form_state) {
    $views_arguments = $this->getViewsArguments($plugin);
    $form['preset_options'] = array(
      '#type' => 'fieldset',
      '#description' => t('Map views arguments to mini panels contexts.'),
      '#title' => t('Preset arguments'),
    );
    if (count($views_arguments)) {
      $form['preset_options']['#tree'] = TRUE;
      $form['preset_options']['child'] = $form['preset_options']['parent'] = array(
       '#tree' => TRUE,
       '#type' => 'fieldset',
       '#title' => t('Parent arguments'),
      );
      $form['preset_options']['child']['#title'] = t('Child arguments');
      foreach ($views_arguments as $argument_name => $view_argument) {
        foreach (array('parent', 'child') as $style) {
          $form['preset_options'][$style][$argument_name]['#tree'] = TRUE;
          $form['preset_options'][$style][$argument_name]['id'] = array(
            '#title' => $view_argument,
            '#type' => 'select',
            '#default_value' => isset($plugin->options['preset_options'][$style][$argument_name]) ?
                  $plugin->options['preset_options'][$style][$argument_name] : NULL,
            '#options' => $this->getCToolsArgumentOptions(),
          );
        }
      }
    }
  }

  function presetOptionsForm($form, $form_state) {
    parent::presetOptionsForm($form, $form_state);
  }

  function getCToolsArgumentOptions() {
    ctools_include('context');
    ctools_include('dependent');
    $arguments = ctools_get_argument($argument);
    $argument_options = array('' => 'None');
    foreach ($arguments as $name => $argument) {
      $argument_options[$name] = $argument['title'];
    }
    return $argument_options;
  }

  /**
   * Adjust the array of argument input to match the current list of
   * arguments available for this display. This ensures that changing
   * the arguments doesn't cause the argument input field to just
   * break.
   */
  function getViewsArguments($plugin) {
    $handlers = $plugin->display->handler->get_handlers('argument');

    // We use a separate output so as to seamlessly discard info for
    // arguments that no longer exist.
    $output = array();

    foreach ($handlers as $id => $handler) {
        $output[$id] = $handler->ui_name();
    }
    return $output;
  }

  function render($preset, $entity, $style = 'parent_style', $plugin = NULL, $row = NULL) {
    $panel = panels_mini_load($preset->{$style});
    if (empty($panel) || !empty($panel->disabled)) {
      return;
    }
    $contexts = array();

    ctools_include('context');
    // Find out our entity type.
    // @todo We should use the schema information to figure this out
    if (isset($plugin)) {
      $view = $plugin->view;
      $entity_type = $view->base_table;
      $options = $plugin->options;
    }
    // We populate the first required context with our entity if the first
    // context matches our current entity.
    $contexts[] = ctools_context_create('entity:' . $entity_type, $entity);
    if (isset($options) && is_array($options['preset_options']) && isset($options['preset_options']['parent'])) {
      $i = 1;
      foreach ($options['preset_options']['parent'] as $key => $argument) {
        if (!empty($argument['id'])) {
          if (isset($panel->requiredcontexts[$i])) {
            $mocked_argument = $panel->requiredcontexts[$i];
            $mocked_argument['name'] = $argument['id'];
            $argument_info = ctools_get_argument($argument['id']);
            if (isset($argument_info['default'])) {
              $mocked_argument += $argument_info['default'];
            }
            $contexts[] = ctools_context_get_context_from_argument($mocked_argument, $view->argument[$key]->argument);
          }
          $i++;
        }
      }
    }
    // Make sure we only have as many required contexts as the view has arguments.
    $panel->requiredcontexts = array_slice($panel->requiredcontexts, 0, count($contexts));
    // Unset all required contexts that are outside the range.
    $context = ctools_context_match_required_contexts($panel->requiredcontexts, $contexts);
    $panel->context = $panel->display->context = ctools_context_load_contexts($panel, FALSE, $context);
    $panel->display->owner = $panel;
    $panel->display->owner->id = $panel->name;
    $row->additional_info = $panel->context;
    return panels_render_display($panel->display);
  }
}