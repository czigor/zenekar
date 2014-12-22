<?php
/**
 * @file
 * mez_image_file.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_image_file_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'member' => 'member',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
