<?php

/**
 * @file
 *  Contains a base class for dynamic formatters renderers.
 */

abstract class dynamic_formatters_renderer {
  var $name = '';
  var $new = TRUE;

  /**
   * This is used to determine if the preset form needs to be extended.
   * @return boolean if the preset form function should be called.
   */
  function usesPresetForm() { return FALSE; }

  /**
   * This is used to indicate that this preset wants to add settings to a views
   * form.
   * @return boolean
   *   If the preset uses the views form or not.
   */
  function usesViewsForm() { return FALSE; }

  /**
   * This form is displayed as part of the options form for creating
   * and editing a preset.
   */
  function presetOptionsForm($form, $form_state) {
    return array();
  }

  /**
   * This form will be attached to the views style settings.
   * @param View $view
   */
  function viewsOptionsForm($plugin, $preset, &$form, &$form_state) {
    return array();
  }

  /**
   * Get a collection of parent styles that are possible to use with this preset.
   */
  abstract function getParentStyles();

  /**
   * Get a collection of children styles that are possible to use with this preset.
   */
  abstract function getChildrenStyles();
}
