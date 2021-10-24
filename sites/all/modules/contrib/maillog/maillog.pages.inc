<?php

/**
 * @file
 * Menu API callback handlers for Maillog pages.
 */

/**
 * Display a maillog record.
 *
 * @param array $maillog
 *   A maillog record that is to be deleted.
 *
 * @return string
 *   Themed output of the maillog page.
 */
function maillog_maillog_page(array $maillog) {
  return theme('maillog', array('maillog' => $maillog));
}

/**
 * FormAPI callback to allow deleting a Maillog record.
 */
function maillog_maillog_delete_form($form, &$form_state, $maillog) {
  $form['id'] = array(
    '#type' => 'value',
    '#value' => $maillog['id'],
  );

  // Show some details of the email message.
  $form['message'] = array(
    '#type' => 'fieldset',
    '#collapsible' => FALSE,
    '#title' => t('Message details'),
  );
  $form['message']['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#default_value' => drupal_substr($maillog['subject'], 0, 128),
    '#disabled' => TRUE,
  );
  $form['message']['to'] = array(
    '#type' => 'textfield',
    '#title' => t('To'),
    '#default_value' => drupal_substr($maillog['header_to'], 0, 128),
    '#disabled' => TRUE,
  );

  return confirm_form(
    $form,
    t('Delete Maillog record?'),
    'admin/reports/maillog',
    t('This action cannot be undone.')
  );
}

/**
 * FormAPI confirmation callback for maillog_maillog_delete_form().
 */
function maillog_maillog_delete_form_submit($form, &$form_state) {
  if (maillog_maillog_delete($form_state['values']['id'])) {
    drupal_set_message(t('Message #!id has been deleted.', array('!id' => $form_state['values']['id'])));
  }
  else {
    drupal_set_message(t('A problem occurred when deleting message #!id!', array('!id' => $form_state['values']['id'])));
  }
  $form_state['redirect'] = 'admin/reports/maillog';
}
