<?php

/**
 * @file
 * Plugin to provide access control based upon role membership.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("User: OG role"),
  'description' => t('Control access by OG role.'),
  'callback' => 'ctools_role_ctools_og_access_check',
  'default' => array('rids' => array()),
  'settings form' => 'ctools_role_ctools_og_access_settings',
  'settings form submit' => 'ctools_role_ctools_og_access_settings_submit',
  'summary' => 'ctools_role_ctools_og_access_summary',
  'required context' => new ctools_context_required(t('User'), 'user'),
);

/**
 * Settings form for the 'by role' access plugin
 */
function ctools_role_ctools_og_access_settings($form, &$form_state, $conf) {
  $options = og_get_user_roles_name();
  unset($options[1]);
  unset($options[2]);
  $form['settings']['rids'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Role'),
    '#default_value' => $conf['rids'],
    '#options' => $options,
    '#description' => t('The user will be given access if he or she has the selected OG role in any group.'),
  );
  return $form;
}

/**
 * Compress the roles allowed to the minimum.
 */
function ctools_role_ctools_og_access_settings_submit($form, &$form_state) {
  $form_state['values']['settings']['rids'] = array_keys(array_filter($form_state['values']['settings']['rids']));
}

/**
 * Check for access.
 */
function ctools_role_ctools_og_access_check($conf, $context) {
  // As far as I know there should always be a context at this point, but this
  // is safe.
  if (empty($context) || empty($context->data) || !isset($context->data->roles)) {
    return FALSE;
  }


  $roles = db_select('og_users_roles', 'our')
    ->fields('our', array('gid'))
    ->condition('our.uid', $context->data->uid)
    ->condition('our.rid', $conf['rids'])
    ->execute()
    ->fetchAll();
  if (!empty($roles)) {
    return TRUE;
  }
}

/**
 * Provide a summary description based upon the checked roles.
 */
function ctools_role_ctools_og_access_summary($conf, $context) {
  if (!isset($conf['rids'])) {
    $conf['rids'] = array();
  }
  $roles = og_get_user_roles_name();

  if (!isset($conf['gids'])) {
    $conf['gids'] = array();
  }

  $names = array();
  foreach (array_filter($conf['rids']) as $rid) {
    $names[] = check_plain($roles[$rid]);
  }

  if (empty($names)) {
    return t('@identifier can have any role', array('@identifier' => $context->identifier));
  }

  return format_plural(count($names), '@identifier has role "@roles"', '@identifier has one of "@roles"', array('@roles' => implode(', ', $names), '@identifier' => $context->identifier));
}
