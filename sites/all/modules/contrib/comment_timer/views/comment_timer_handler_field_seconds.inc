<?php

/**
 * @file
 * Views field handler for the Comment Timer's seconds field.
 */
class comment_timer_handler_field_seconds extends views_handler_field_numeric {

  function init(&$view, &$options) {
    parent::init($view, $options);
    if ($this->view->base_table == 'comment') {
      $this->additional_fields['comment_timer_nid'] = array('table' => 'comment', 'field' => 'nid');
    }
    else if ($this->view->base_table == 'node') {
      $this->additional_fields['comment_timer_nid'] = array('table' => 'node', 'field' => 'nid');
    }
  }

  function render($values) {
    if (!comment_timer_user_access($values->{$this->aliases['comment_timer_nid']}, 'access comment timer')) {
      return '';
    }
    if ($this->options['comment_timer_seconds']) {
      return parent::render($values);
    }
    return _comment_timer_seconds_to_hms($values->{$this->field_alias});
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['comment_timer_seconds'] = array('default' => 0);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['comment_timer_seconds'] = array(
      '#type' => 'checkbox',
      '#title' => t('Display as number of seconds'),
      '#description' => t('Time will be displayed as seconds when enabled (instead of HH:MM:SS).'),
      '#default_value' => $this->options['comment_timer_seconds'],
      '#weight' => -1,
    );
    // Numeric-related settings should be #states-hidden if this is unticked.
    $form['separator']['#dependency']['edit-options-comment-timer-seconds'][0] = TRUE;
    $form['format_plural']['#dependency']['edit-options-comment-timer-seconds'][0] = TRUE;
  }
}
