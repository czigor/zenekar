<?php

/**
 * @file
 * Settings functionality for the MailLog module.
 */

/**
 * Form API callback for the Maillog settings form.
 */
function maillog_admin_settings() {
  $form = array();

  $form['maillog_send'] = array(
    '#type' => 'checkbox',
    '#title' => t("Allow the e-mails to be sent."),
    '#default_value' => variable_get('maillog_send', TRUE),
  );

  $form['maillog_log'] = array(
    '#type' => 'checkbox',
    '#title' => t("Create table entries in maillog table for each e-mail."),
    '#default_value' => variable_get('maillog_log', TRUE),
  );

  $form['maillog_devel'] = array(
    '#type' => 'checkbox',
    '#title' => t("Display the e-mails on page using devel module (if enabled)."),
    '#default_value' => variable_get('maillog_devel', TRUE),
  );

  if (module_exists('mailsystem')) {
    $mailsystem_classes = mailsystem_get_classes();
    // Maillog will be unset, because ist would cause an recursion.
    unset($mailsystem_classes['MaillogMailSystem']);
    $form['maillog_engine'] = array(
      '#type' => 'select',
      '#title' => t("Select the mail system which should be used."),
      '#default_value' => variable_get('maillog_engine', 'DefaultMailSystem'),
      '#options' => $mailsystem_classes,
    );
  }

  return system_settings_form($form);
}
