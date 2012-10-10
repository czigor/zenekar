<?php
/**
 * @file
 * ns_media.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function ns_media_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: add media from remote sources
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'editor',
      1 => 'super user',
      2 => 'writer',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      0 => 'administrator',
      1 => 'chief editor',
      2 => 'editor',
      3 => 'super user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit file
  $permissions['edit file'] = array(
    'name' => 'edit file',
    'roles' => array(
      0 => 'administrator',
      1 => 'blogger',
      2 => 'chief editor',
      3 => 'editor',
      4 => 'super user',
      5 => 'writer',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: import media
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'administrator',
      1 => 'chief editor',
      2 => 'editor',
      3 => 'super user',
    ),
    'module' => 'media',
  );

  // Exported permission: view file
  $permissions['view file'] = array(
    'name' => 'view file',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
