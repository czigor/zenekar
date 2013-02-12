<?php
/**
 * @file
 * mez_frontpage.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_frontpage_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer custom search.
  $permissions['administer custom search'] = array(
    'name' => 'administer custom search',
    'roles' => array(),
    'module' => 'custom_search',
  );

  // Exported permission: administer custom search blocks.
  $permissions['administer custom search blocks'] = array(
    'name' => 'administer custom search blocks',
    'roles' => array(),
    'module' => 'custom_search_blocks',
  );

  // Exported permission: use custom search.
  $permissions['use custom search'] = array(
    'name' => 'use custom search',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: use custom search blocks.
  $permissions['use custom search blocks'] = array(
    'name' => 'use custom search blocks',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'custom_search_blocks',
  );

  return $permissions;
}
