<?php
/**
 * @file
 * mez_seat_ct.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_seat_ct_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create seat content'.
  $permissions['create seat content'] = array(
    'name' => 'create seat content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any seat content'.
  $permissions['delete any seat content'] = array(
    'name' => 'delete any seat content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own seat content'.
  $permissions['delete own seat content'] = array(
    'name' => 'delete own seat content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any seat content'.
  $permissions['edit any seat content'] = array(
    'name' => 'edit any seat content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own seat content'.
  $permissions['edit own seat content'] = array(
    'name' => 'edit own seat content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
