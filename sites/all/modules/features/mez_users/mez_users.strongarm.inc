<?php
/**
 * @file
 * mez_users.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mez_users_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_edit_disabled';
  $strongarm->value = TRUE;
  $export['page_manager_user_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_view_disabled';
  $strongarm->value = TRUE;
  $export['page_manager_user_view_disabled'] = $strongarm;

  return $export;
}
