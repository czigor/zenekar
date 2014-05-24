<?php

/**
 * @file
 * Plugin to display the name of the user who last updated the referenced node.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Node last updated by'),
  'description' => t('The name of the user who last updated the referenced node.'),
  'content_types' => 'iq_plugins_content_type_last_updated_by',
  'render callback' => 'iq_plugins_content_type_last_updated_by_render',
  'edit form' => 'iq_plugins_content_type_last_updated_by_edit_form',
  'admin title' => '"Node being viewed" last updated by',
  'icon' => drupal_get_path('module', 'ctools') . '/plugins/content_types/node_context/icon_node.png',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => array(t('Node'), -9),
);


/**
 * Run-time rendering of the body of the block.
 *
 * @param $subtype
 * @param $conf
 *   Pane settings.
 * @param $args
 * @param $context
 *   Context object if available.
 *
 * @return stdClass
 *   The block object which will be rendered in the content region of the pane.
 */
function iq_plugins_content_type_last_updated_by_render($subtype, $conf, $args, $context) {
  $block = new stdClass;

  $block->title = $conf['override_title'] ? $conf['override_title_text'] : 'Last updated by';

  if (empty($context->data) || $context->keyword != 'node') {
    $block->content = 'No data.';
    return $block;
  }

  $subquery = db_select('node_revision', 'nr');
  $subquery->addExpression('MAX(nr.timestamp)', 'last_updated');
  $subquery->condition('nr.nid', $context->data->nid, '=');

  $query = db_select('node_revision', 'nr');
  $query->join($subquery, 'subquery', 'nr.timestamp = subquery.last_updated');
  $query->condition('nr.nid', $context->data->nid, '=');
  $query->fields('nr', array('uid'));

  $result = $query->execute();
  $result = $result->fetchAssoc();

  $account = user_load($result['uid']);
  $isset_link_to_profile = !empty($conf['link_to_profile']);

  $block->content = $isset_link_to_profile ? l($account->name, 'user/' . $account->uid) : $account->name;

  return $block;
}

/**
 * Edit form callback.
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
function iq_plugins_content_type_last_updated_by_edit_form($form, &$form_state) {
  $isset_link_to_profile = array_key_exists('link_to_profile', $form_state['conf']);

  $form['link_to_profile'] = array(
    '#type' => 'checkbox',
    '#title' => t('Link to user profile'),
    '#default_value' => $isset_link_to_profile ? $form_state['conf']['link_to_profile'] : TRUE,
    '#description' => t('If checked, user name will be linked to the user profile.'),
  );

  return $form;
}

/**
 * Edit form submit callback.
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state>
 *   A keyed array containing the current state of the form.
 */
function iq_plugins_content_type_last_updated_by_edit_form_submit($form, &$form_state) {
  if (array_key_exists('link_to_profile', $form_state['values'])) {
    $form_state['conf']['link_to_profile'] = $form_state['values']['link_to_profile'];
  }
}