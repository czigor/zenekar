<?php
/**
 * @file
 * Provides a Sexy exposed form plugin for Views 3.
 * Big up to BEF module!
 */
class sexy_exposed_exposed_form_plugin extends views_plugin_exposed_form_basic {

  function summary_title() {
    return t('Sexy Exposed Settings');
  }

  function option_definition() {
    $options = parent::option_definition();
    // Add Sexy Exposed options.
    $options['sexy'] = array('default' => array());
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $sexy_options = array();

    // Add Sexy Exposed options to each filter.
    foreach ($this->display->handler->get_handlers('filter') as $label => $filter) {
      if (!$filter->options['exposed']) {
        continue;
      }

      // Add help text only once.
      if (!isset($sexy_options['sexy_description'])) {
        $sexy_options['sexy_description'] = array(
          '#markup' => '<h3>' . t('Sexy Exposed Settings') . '</h3><p>'
            . t('Set sexyness for each exposed filter.')
            . '</p>',
        );
      }

      // Check if exposed filter's type is select list, radios or checkboxes.
      // Or if operator might be useful.
      $valid_operators = array('in', 'or', 'and');
      $valid_types = array('select', 'radios', 'checkboxes');
      $sexy_specific = FALSE;

      if (isset($filter->options['type'])) {
        if (in_array($filter->options['type'], $valid_types)) {
          $sexy_specific = TRUE;
        }
      }
      elseif (in_array($filter->options['operator'], $valid_operators)) {
        $sexy_specific = TRUE;
      }

      // Sexy or not?
      if ($sexy_specific) {
        $sexy_options[$label]['needs_sexy_love'] = array(
          '#type' => 'checkbox',
          '#title' => t('Make "@label" exposed filter sexy', array('@label' => $filter->options['expose']['label'])),
          '#description' => t('Use some jQuery magic to make this filter sexy.'),
          '#default_value' => $this->options['sexy'][$label]['needs_sexy_love'],
        );

        // Note: drupal_html_id() would run twice resulting in false IDs.
        $identifier = strtr(drupal_strtolower($label), array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));

        $sexy_number = $this->options['sexy'][$label]['sexy_number'];
        $sexy_options[$label]['sexy_number'] = array(
          '#type' => 'textfield',
          '#title' => t('Number of items'),
          '#description' => t('Optional. You can specify how many items should be visible in the drop down list. 0 means all.'),
          // Validate if value is a positive integer.
          '#default_value' => (is_numeric($sexy_number) && ($sexy_number > 0)) ? $sexy_number : 0,
          '#size' => 3,
          '#dependency' => array(
            'edit-exposed-form-options-sexy-' . $identifier . '-needs-sexy-love' => array(TRUE),
          ),
        );

        $sexy_width = $this->options['sexy'][$label]['sexy_width'];
        $sexy_options[$label]['sexy_width'] = array(
          '#type' => 'textfield',
          '#title' => t('Width'),
          '#field_suffix' => t('px'),
          '#description' => t('Optional. Specifies the desired width in pixels of the text display area. 0 means the width is calculated from the width of the option items.'),
          // Validate if value is a positive integer.
          '#default_value' => (is_numeric($sexy_width) && ($sexy_width > 0)) ? $sexy_width : 0,
          '#size' => 3,
          '#dependency' => array(
            'edit-exposed-form-options-sexy-' . $identifier . '-needs-sexy-love' => array(TRUE),
          ),
        );
      }
    }
    // Add Sexy Exposed form elements to the exposed form options form.
    $form['sexy'] = $sexy_options;
  }

  /**
   * Tweak the exposed filter form to show Sexy Exposed options.
   */
  function exposed_form_alter(&$form, &$form_state) {
    parent::exposed_form_alter($form, $form_state);

    // Shorthand for all filters in this view.
    $filters = $form_state['view']->display_handler->handlers['filter'];

    // Collect exposed filters that need to be sexy.
    $needs_sexy_love = array();

    // Go through each saved option looking for Sexy Exposed settings.
    foreach ($this->options['sexy'] as $label => $options) {
      // Sanity check: Ensure this filter is an exposed filter.
      if (empty($filters[$label]) || !$filters[$label]->options['exposed']) {
        continue;
      }

      // Form element is designated by the element ID which is user-configurable.
      //$field_id = drupal_html_id('select#edit-' . $form['#info']["filter-$label"]['value']);
      $field_id = 'select#edit-' . drupal_html_id($form['#info']["filter-$label"]['value']);

      if ($options['needs_sexy_love']) {
        $needs_sexy_love[$field_id] = array(
          'sexyNumber' => $options['sexy_number'],
          'sexyWidth' => $options['sexy_width'],
        );
      }
    }
    if (!empty($needs_sexy_love)) {
      // Add necessary js files.
      drupal_add_library('system', 'ui.widget');

      $path = drupal_get_path('module', 'sexy_exposed');
      drupal_add_js(sexy_exposed_get_js());
      drupal_add_js($path . '/js/sexy_exposed.js');
      drupal_add_js(array('sexyExposed' => $needs_sexy_love), 'setting');

      // Add necessary css files.
      drupal_add_css(SEXY_EXPOSED_PATH . '/css/ui.dropdownchecklist.standalone.css');
      drupal_add_css($path . '/css/sexy_exposed.css');
    }
  }
}

