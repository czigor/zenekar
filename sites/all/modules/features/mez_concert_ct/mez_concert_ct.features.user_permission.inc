<?php
/**
 * @file
 * mez_concert_ct.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_concert_ct_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create concert content'.
  $permissions['create concert content'] = array(
    'name' => 'create concert content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any concert content'.
  $permissions['delete any concert content'] = array(
    'name' => 'delete any concert content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own concert content'.
  $permissions['delete own concert content'] = array(
    'name' => 'delete own concert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any concert content'.
  $permissions['edit any concert content'] = array(
    'name' => 'edit any concert content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own concert content'.
  $permissions['edit own concert content'] = array(
    'name' => 'edit own concert content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
