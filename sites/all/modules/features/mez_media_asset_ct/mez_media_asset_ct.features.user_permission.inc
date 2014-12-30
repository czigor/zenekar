<?php
/**
 * @file
 * mez_media_asset_ct.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_media_asset_ct_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create media_asset content'.
  $permissions['create media_asset content'] = array(
    'name' => 'create media_asset content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any media_asset content'.
  $permissions['delete any media_asset content'] = array(
    'name' => 'delete any media_asset content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own media_asset content'.
  $permissions['delete own media_asset content'] = array(
    'name' => 'delete own media_asset content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any media_asset content'.
  $permissions['edit any media_asset content'] = array(
    'name' => 'edit any media_asset content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own media_asset content'.
  $permissions['edit own media_asset content'] = array(
    'name' => 'edit own media_asset content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
