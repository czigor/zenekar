<?php
/**
 * @file
 * iq_documentation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function iq_documentation_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create documentation content'.
  $permissions['create documentation content'] = array(
    'name' => 'create documentation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any documentation content'.
  $permissions['delete any documentation content'] = array(
    'name' => 'delete any documentation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own documentation content'.
  $permissions['delete own documentation content'] = array(
    'name' => 'delete own documentation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any documentation content'.
  $permissions['edit any documentation content'] = array(
    'name' => 'edit any documentation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own documentation content'.
  $permissions['edit own documentation content'] = array(
    'name' => 'edit own documentation content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
