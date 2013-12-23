<?php
/**
 * @file
 * mez_piece_ct.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_piece_ct_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create piece content'.
  $permissions['create piece content'] = array(
    'name' => 'create piece content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any piece content'.
  $permissions['delete any piece content'] = array(
    'name' => 'delete any piece content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own piece content'.
  $permissions['delete own piece content'] = array(
    'name' => 'delete own piece content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any piece content'.
  $permissions['edit any piece content'] = array(
    'name' => 'edit any piece content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own piece content'.
  $permissions['edit own piece content'] = array(
    'name' => 'edit own piece content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
