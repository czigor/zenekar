<?php
/**
 * @file
 * Shield module's admin funcions.
 */

/**
 * Generates and admin settings form.
 */
function shield_admin_settings($form, &$form_state) {
  $form['description'] = array(
    '#type' => 'item',
    '#title' => t('Shield settings'),
    '#description' => t('Set up credentials for an authenticated user. You can also decide whether you want to print out the credentials or not.'),
  );

  $form['shield_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable shield module'),
    '#description' => t('Set whether shield is active or not.'),
    '#default_value' => variable_get('shield_enabled', 1),
  );

  $form['general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General settings'),
  );

  $form['general']['shield_allow_cli'] = array(
    '#type' => 'checkbox',
    '#title' => t('Allow command line access'),
    '#description' => t('When the site is accessed from command line (e.g. from Drush, cron), the shield should not work.'),
    '#default_value' => variable_get('shield_allow_cli', 1),
  );

  $methods = array(1 => t('Shield all except the following paths (exclude)'), 2 => t('Shield no paths except the following (include)'));
  $form['general']['shield_method'] = array(
    '#type' => 'radios',
    '#title' => t('Shield method'),
    '#default_value' => variable_get('shield_method', 1),
    '#options' => $methods,
    '#description' => t('Choose which method of shield protection you require.'),
  );

  $form['general']['shield_paths'] = array(
    '#type' => 'textarea',
    '#title' => t('Paths'),
    '#description' => t('According to the Shield method selected above, these paths will be either excluded from, or included in Shield protection. Leave this blank and select "exclude" to protect all paths. You can also use paths which do not hit index.php but bootstrapped, for example cron.php.'),
    '#default_value' => variable_get('shield_paths', ''),
  );

  $form['credentials'] = array(
    '#type' => 'fieldset',
    '#title' => t('Credentials'),
  );

  $form['credentials']['shield_user'] = array(
    '#type' => 'textfield',
    '#title' => t('User'),
    '#default_value' => variable_get('shield_user', ''),
    '#description' => t('Live it blank to disable authentication.'),
  );

  $form['credentials']['shield_pass'] = array(
    '#type' => 'textfield',
    '#title' => t('Password'),
    '#default_value' => variable_get('shield_pass', ''),
  );

  $form['shield_print'] = array(
    '#type' => 'textfield',
    '#title' => t('Authentication message'),
    '#description' => t("The message to print in the authentication request popup. You can use [user] and [pass] to print the user and the password respectively (for example: 'Hello, user: [user], pass: [pass]!'). You can leave it empty, if you don't want to print out any special message to the users."),
    '#default_value' => variable_get('shield_print', ''),
  );

  return system_settings_form($form);
}
