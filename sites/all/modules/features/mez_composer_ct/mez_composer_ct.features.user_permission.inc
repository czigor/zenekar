<?php
/**
 * @file
 * mez_composer_ct.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_composer_ct_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create composer content'.
  $permissions['create composer content'] = array(
    'name' => 'create composer content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any composer content'.
  $permissions['delete any composer content'] = array(
    'name' => 'delete any composer content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own composer content'.
  $permissions['delete own composer content'] = array(
    'name' => 'delete own composer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any composer content'.
  $permissions['edit any composer content'] = array(
    'name' => 'edit any composer content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own composer content'.
  $permissions['edit own composer content'] = array(
    'name' => 'edit own composer content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
