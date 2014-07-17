<?php
/**
 * @file
 * mez_file_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_file_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(),
    'module' => 'media',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'media_bulk_upload',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'member' => 'member',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
