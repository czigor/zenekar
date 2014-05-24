<?php

/**
 * @file
 * Views filter handler for the Comment Timer's status field.
 */
class comment_timer_handler_filter_status_operator extends views_handler_filter_boolean_operator {

  function access() {
    return user_access('access comment timer');
  }

}
