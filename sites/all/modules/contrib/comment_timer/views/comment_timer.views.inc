<?php

/**
 * @file Views integration data for Comment Timer.
 */

 /**
 * Implements hook_views_data().
 */
function comment_timer_views_data() {
  $data['comment_timer_comment']['table']['group'] = t('Comment');
  $data['comment_timer_comment']['table']['join'] = array(
    'comment' => array(
      'left_field' => 'cid',
      'field' => 'cid',
      'required' => TRUE,
    ),
  );
  $data['comment_timer_comment']['seconds'] = array(
    'title' => t('Time'),
    'help' => t('Time spent with the comment.'),
    'field' => array(
      'handler' => 'comment_timer_handler_field_seconds',
    ),
  );
  $data['comment_timer_comment']['status'] = array(
    'title' => t('Time status'),
    'help' => t('The status of the comment time.'),
    'field' => array(
      'handler' => 'comment_timer_handler_field_status',
    ),
    'filter' => array(
      'handler' => 'comment_timer_handler_filter_status_operator',
    ),
  );
  $data['comment_timer_node']['table']['group'] = t('Content');
  $data['comment_timer_node']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
      'required' => TRUE,
    ),
  );
  $data['comment_timer_node']['seconds'] = array(
    'title' => t('Comment Time'),
    'help' => t('Total time spent with the node\'s comments.'),
    'field' => array(
      'handler' => 'comment_timer_handler_field_seconds',
    ),
  );
  return $data;
}
