<?php

/**
 * @file
 * Views field handler for the Comment Timer's status field.
 */
class comment_timer_handler_field_status extends views_handler_field_boolean {

  function init(&$view, &$options) {
    parent::init($view, $options);
    $this->additional_fields['comment_timer_nid'] = array('table' => 'comment', 'field' => 'nid');
  }

  function render($values) {
    if (!comment_timer_user_access($values->{$this->aliases['comment_timer_nid']}, 'access comment timer')) {
      return '';
    }
    return parent::render($values);
  }

}
