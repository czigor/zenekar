<?php
/**
 * @file
 * mez_document_file.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_document_file_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'member' => 'member',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
