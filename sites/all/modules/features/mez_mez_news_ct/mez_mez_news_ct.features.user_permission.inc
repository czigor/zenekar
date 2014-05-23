<?php
/**
 * @file
 * mez_mez_news_ct.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_mez_news_ct_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create mez_news content'.
  $permissions['create mez_news content'] = array(
    'name' => 'create mez_news content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any mez_news content'.
  $permissions['delete any mez_news content'] = array(
    'name' => 'delete any mez_news content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own mez_news content'.
  $permissions['delete own mez_news content'] = array(
    'name' => 'delete own mez_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any mez_news content'.
  $permissions['edit any mez_news content'] = array(
    'name' => 'edit any mez_news content',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own mez_news content'.
  $permissions['edit own mez_news content'] = array(
    'name' => 'edit own mez_news content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
