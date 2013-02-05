<?php

/**
 * @TODO: This might be impolite/too aggressive. We should at least check that
 * other install profiles are not present to ensure we don't collide with a
 * similar form alter in their profile.
 *
 * Set this as default install profile.
 */
function system_form_install_select_profile_form_alter(&$form, $form_state) {
  foreach ($form['profile'] as $key => $element) {
    $form['profile'][$key]['#value'] = 'mez_profile';
  }
}

/**
 * Implement hook_install_tasks().
 */
function mez_profile_install_tasks($install_state) {
  return array(

    'mez_profile_install_import_translation' => array(
      'display_name' => st('Set up translations'),
      'display' => TRUE,
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'type' => 'batch',
    ),
    'mez_profile_install_enable_features' => array(
      'display_name' => st('Configure features'),
      'display' => TRUE,
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'type' => 'batch',
    ),
    'mez_profile_install_instruments' => array(
      'display_name' => st('Create instruments'),
      'display' => TRUE,
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'type' => 'normal',
    ),
  );
}

/**
 * Implements hook_install_tasks_alter().
 */
function mez_profile_install_tasks_alter(&$tasks, $install_state) {
  // Skip language selection altogether.
  $tasks['install_select_locale']['function'] = 'mez_profile_install_select_locale';
  // Remove core steps for translation imports.
  unset($tasks['install_import_locales']);
  unset($tasks['install_import_locales_remaining']);
}

/**
 * Set Hungarian as default language.
 */
function mez_profile_install_select_locale(&$install_state) {
  $profilename = $install_state['parameters']['profile'];
  $locales = install_find_locales($profilename);
  $install_state['locales'] += $locales;
  $install_state['parameters']['locale'] = 'hu';
  return;
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Provide a sensible default for db_prefix.
 */
function system_form_install_settings_form_alter(&$form, &$form_state) {
  $form['settings']['mysql']['advanced_options']['db_prefix']['#default_value'] = 'mez7_';
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Alter the install profile configuration form and provide timezone location options.
 */
function mez_profile_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'MEZ';
  $form['site_information']['site_mail']['#default_value'] = 'mez1896@gmail.com';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'czovekandras@gmail.com';
  $form['server_settings']['site_default_country']['#default_value'] = 'HU';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Budapest';
  $form['server_settings']['date_default_timezone']['#attributes'] = array('class' => array('timezone-nodetect'));
}

/**
 * Installation step callback.
 *
 * @param $install_state
 *   An array of information about the current installation state.
 */
function mez_profile_install_import_translation(&$install_state) {
  // Enable installation language as default site language.
  include_once DRUPAL_ROOT . '/includes/locale.inc';
  $install_locale = $install_state['parameters']['locale'];
  locale_add_language($install_locale, NULL, NULL, LANGUAGE_LTR, '', '', TRUE, TRUE);
  module_enable(array('l10n_update'));
  
  db_update('languages')
    ->fields(array(
      'prefix' => 'en',
    ))
    ->condition('language', 'en')
    ->execute();
  
  // Build batch with l10n_update module.
  $history = l10n_update_get_history();
  module_load_include('check.inc', 'l10n_update');
  $available = l10n_update_available_releases();
  $updates = l10n_update_build_updates($history, $available);
  module_load_include('batch.inc', 'l10n_update');
  $updates = _l10n_update_prepare_updates($updates, NULL, array());
  $batch = l10n_update_batch_multiple($updates, LOCALE_IMPORT_KEEP);
  return $batch;
}

/**
 * Installation step callback.
 *
 * @param $install_state
 *   An array of information about the current installation state.
 */
function mez_profile_install_enable_features(&$install_state) {
  // Some of features may start as overridden, eg. in the case they have
  // strongarmed variables, because the accompanying module which gets
  // installed as a dependency of the feature sets a variable in its
  // hook_install(), so the feature's variable becomes overridden by it. To
  // get around this, we are installing the feature modules' dependencies as
  // dependencies of the install profile itself (so the dependencies are
  // installed properly, eg. with their translation being downloaded and
  // installed), and as the final installation step we simply install the
  // feature modules and immediately revert all the components of all them.
  // Weird, but yields the expected results.
  $modules = array(
    'mez_wysiwyg',
    'mez_settings',
    'mez_cts',
    'mez_permissions',
    'mez_views',
    'mez_frontpage',
  );
  features_install_modules($modules);
  features_revert();
  drupal_flush_all_caches();

  node_access_rebuild();
}

/**
 * Installation step callback.
 * 
 * Creates the Instruments taxonomy terms.
 *
 * @param $install_state
 *   An array of information about the current installation state.
 */
function mez_profile_install_instruments(&$install_state) {
  mez_create_instruments_taxonomy_form_submit(NULL, NULL);
}
