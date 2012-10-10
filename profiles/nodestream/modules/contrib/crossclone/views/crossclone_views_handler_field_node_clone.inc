<?php

/**
 * @file
 * This file contains a field handler implementation that let's you clone
 * a node on the fly in views.
 */

/**
 * Field handler to present a clone link.
 */
class crossclone_views_handler_field_node_clone extends views_handler_field_node_link {
  function construct() {
    parent::construct();
    $this->additional_fields['uid'] = 'uid';
    $this->additional_fields['type'] = 'type';
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['text'] = array('default' => '', 'translatable' => TRUE);
    $options['bundle'] = array('default' => 'current', 'translatable' => FALSE);
    $options['clone'] = array('default' => CROSSCLONE_CLONE_STRAIGHT, 'translatable' => FALSE);
    $options['couple_setting'] = array('default' => CROSSCLONE_COUPLE_NONE, 'translatable' => FALSE);
    $options['delete_setting'] = array('default' => CROSSCLONE_DELETE_NONE, 'translatable' => FALSE);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $bundles = field_info_bundles('node');
    $bundle_options = array();
    foreach ($bundles as $name => $bundle) {
      $bundle_options[$name] = $bundle['label'];
    }
    $form['bundle'] = array(
      '#type' => 'select',
      '#title' => t('New node type'),
      '#description' => t('Choose which node type the clone shall have.'),
      '#options' => array('current' => t('Current node type')) + $bundle_options,
      '#default_value' => $this->options['type'],
    );
    $form['clone'] = array(
      '#type' => 'select',
      '#title' => t('Clone settings'),
      '#description' => t('Choose how to clone the original node.'),
      '#options' => crossclone_get_clone_options(),
      '#default_value' => $this->options['clone'],
    );
    $form['couple_setting'] = array(
      '#type' => 'select',
      '#title' => t('Coupling settings'),
      '#description' => t('Choose how the original node should couple to the clone.'),
      '#options' => crossclone_get_couple_options(),
      '#default_value' => $this->options['couple'],
    );
    $form['delete_setting'] = array(
      '#type' => 'select',
      '#title' => t('Delete settings'),
      '#description' => t('Choose how the original node should behave when it gets deleted.'),
      '#options' => crossclone_get_delete_options(),
      '#default_value' => $this->options['delete'],
    );
  }

  function query() {
    $this->query->add_field($this->table_alias, 'type');
  }

  function render_link($data, $values) {
    // ensure user has access to clone this node.
    $node = new stdClass();
    $nid = $values->nid;
    $bundle = ($this->options['bundle'] == 'current') ? $bundle = $values->type : $this->options['bundle'];
    if (!node_access('create', $bundle)) {
      return;
    }
    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = "crossclone/clone/" . $nid . '/' .
            $this->view->name . '/' . $this->view->current_display . '/' . $this->field;
    if ($this->view->use_ajax) {
      $this->options['alter']['link_class'] = 'crossclone-clone-js';
      drupal_add_js(drupal_get_path('module', 'crossclone') . '/js/crossclone_views.js');
    }
    else {
      $this->options['alter']['query'] = drupal_get_destination();
    }

    return !empty($this->options['text']) ? $this->options['text'] : t('clone');
  }
}
