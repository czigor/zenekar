<?php

/**
 * Views filter handler class for handling node type fields.
 */
class SearchApiMultiHandlerFilterNodeType extends views_handler_filter_string {

  /**
   * Specify the options this filter uses.
   */
  public function option_definition() {
    $options = parent::option_definition();

    // Override the exposed default. This makes no sense not exposed.
    $options['exposed'] = array('default' => TRUE);
    $options['expose']['contains']['identifier']['default'] = 'search_api_multi_node_type';
    $options['expose']['contains']['operator']['default'] = '=';
    $options['group'] = array('default' => '0');

    $options['node_type_fields'] = array('default' => NULL);

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
    $form['expose']['label']['#default_value'] = t('Node type');
//    $form['expose']['label']['#access'] = FALSE;
    $form['expose']['description']['#access'] = FALSE;
    $form['expose']['use_operator']['#access'] = FALSE;
    $form['expose']['multiple']['#access'] = FALSE;
    $form['operator']['#access'] = FALSE;
    $form['group_button']['#access'] = FALSE;
    $form['expose_button']['markup']['#access'] = FALSE;
    $form['expose_button']['button']['#access'] = FALSE;
    $form['value']['#access'] = FALSE;

    $form['node_type_fields'] = array(
      '#type' => 'select',
      '#title' => t('Node type fields'),
      '#options' => $this->getNodeTypeFields(),
      '#multiple' => TRUE,
      '#required' => TRUE,
      '#default_value' => isset($this->options['node_type_fields']) ? $this->options['node_type_fields'] : array(),
      '#description' => t('Select which field(s) containing the node type information from index(es).'),
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
    // If the given node type doesn't exists.
    $node_types = array();
    foreach (node_type_get_types() as $type => $data) {
      $node_types[] = $data->type;
    }
    // Add default field value to node types, because it's valid input too.
    $node_types[] = $form['search_api_multi_node_type']['#default_value'];
    if (!empty($form_state['values']['search_api_multi_node_type']) && !in_array($form_state['input']['search_api_multi_node_type'], $node_types)) {
      form_set_error('search_api_multi_node_type',  t('Illegal choice has been detected! Please reset the form and try again!'));
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

    $fields = $this->options['node_type_fields'];

    foreach ($fields as $field) {
      $this->query->condition($field, $this->value, $this->operator);
    }
    return;
  }

  /**
   * Helper method to get an option list of all available content type fields from index.
   */
  protected function getNodeTypeFields() {
    $node_type_fields = array();
    $indexes = search_api_index_load_multiple(FALSE, array('enabled' => TRUE));
    foreach ($indexes as $index) {
      if ($index->getFields()) {
        $prefix = $index->machine_name . ':';
        $fields = $index->getFields();
        foreach ($fields as $field) {
          // List only the most probable "Node type" fields from the index fields.
          if (isset($field['type']) && $field['type'] == 'string' && strrpos($field['name'], 'type') !== FALSE) {
            // Cleaning up the fields name.
            $field_name = str_replace(array(' » ','Content '), array(':', ''), $field['name']);
            $node_type_fields[$prefix . strtolower($field_name)] = $prefix . $field['name'];
          }
        }
      }
    }
    return $node_type_fields;
  }
}
