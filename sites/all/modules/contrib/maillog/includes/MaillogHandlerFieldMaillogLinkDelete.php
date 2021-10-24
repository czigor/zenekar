<?php

/**
 * @file
 * Handler for providing a 'Delete link' in views.
 */

/**
 * Handler for providing a 'Delete link' in views.
 *
 * @see maillog_views_data()
 * @see maillog_views_handlers()
 */
class MaillogHandlerFieldMaillogLinkDelete extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function construct() {
    parent::construct();
    $this->additional_fields['id'] = 'id';
  }

  /**
   * {@inheritdoc}
   */
  public function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    // Ensure user has access to edit this node.
    if (!user_access('delete maillog')) {
      return;
    }
    $text = !empty($this->options['text']) ? $this->options['text'] : t('delete');
    return l($text, "admin/reports/maillog/delete/{$values->id}", array('query' => drupal_get_destination()));
  }

}
