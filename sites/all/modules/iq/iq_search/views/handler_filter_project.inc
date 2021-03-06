<?php

/**
 * Views filter handler class for handling project fields.
 */
class SearchApiMultiHandlerFilterProject extends views_handler_filter {

  /**
   * Specify the options this filter uses.
   */
  public function option_definition() {
    $options = parent::option_definition();

    // Override the exposed default. This makes no sense not exposed.
    $options['exposed'] = array('default' => TRUE);
    $options['expose']['contains']['identifier']['default'] = 'search_api_multi_project';

    $options['project_fields'] = array('default' => NULL);

    return $options;
  }

  /**
   * Extend the options form a bit.
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    // Lock the exposed checkbox.
    $form['expose_button']['checkbox']['checkbox']['#disabled'] = TRUE;
    $form['expose_button']['checkbox']['checkbox']['#description'] = t('This filter is always exposed.');
    $form['expose']['label']['#default_value'] = t('Project');
//    $form['expose']['label']['#access'] = FALSE;
    $form['expose']['description']['#access'] = FALSE;
    $form['expose']['use_operator']['#access'] = FALSE;
    $form['expose']['multiple']['#access'] = FALSE;
    $form['expose_button']['markup']['#access'] = FALSE;
    $form['expose_button']['button']['#access'] = FALSE;
    $form['value']['#access'] = FALSE;

    $form['project_fields'] = array(
      '#type' => 'select',
      '#title' => t('Project fields'),
      '#options' => $this->getProjectFields(),
      '#multiple' => TRUE,
      '#required' => TRUE,
      '#default_value' => isset($this->options['project_fields']) ? $this->options['project_fields'] : array(),
      '#description' => t('Select which field(s) containing the project information from index(es).'),
    );
  }

  /**
   * Customize exposed form.
   */
  public function exposed_form(&$form, &$form_state) {
    parent::exposed_form($form, $form_state);
  }

  // Validate exposed form.
  public function exposed_validate(&$form, &$form_state) {
    parent::exposed_validate($form, $form_state);
    // Check if a given node id is belongs to a project node.
    if (!empty($form_state['values']['search_api_multi_project']) && $form_state['values']['search_api_multi_project'] != 'All') {
      $query = db_select('node', 'n')
        ->fields('n', array('type'))
        ->condition('nid', $form_state['values']['search_api_multi_project']);
      $result = $query->execute()->fetchField();
      if ($result != 'project') {
        form_set_error('search_api_multi_project', t('Illegal choice has been detected! Please reset the form and try again!'));
      }
    }
  }

  /**
   * Extend value form.
   */
  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);
    // Override value field.
    $form['value'] = array(
      '#type' => 'textfield',
      '#default_value' => 'All',
    );
  }

  /**
   * Add this filter to the query.
   */
  public function query() {

    while (is_array($this->value)) {
      $this->value = $this->value ? reset($this->value) : '';
    }
    // Catch empty strings entered by the user, but not "0".
    if ($this->value === '') {
      return;
    }

    $fields = $this->options['project_fields'];

    foreach ($fields as $field) {
      $this->query->condition($field, $this->value, $this->operator);
    }
    return;
  }

  /**
   * Helper method to get an option list of all available content type fields from index.
   */
  protected function getProjectFields() {
    $project_fields = array();
    $indexes = search_api_index_load_multiple(FALSE, array('enabled' => TRUE));
    foreach ($indexes as $index) {
      if ($index->getFields()) {
        $prefix = $index->machine_name . ':';
        $fields = $index->getFields();
        $keys = array_keys($fields);
        foreach ($keys as $key) {
          // List only the most probable "Node type" fields from the index fields.
          if ($fields[$key]['type'] == 'integer' && (isset($fields[$key]['entity_type']) && $fields[$key]['entity_type'] == 'node') && strrpos($fields[$key]['name'], 'Project') !== FALSE) {
            $project_fields[$prefix . $key] = $prefix . $fields[$key]['name'];
          }
        }
      }
    }
    return $project_fields;
  }
}
