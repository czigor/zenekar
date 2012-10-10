<?php
/**
 * @file
 * ns_prod_search.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function ns_prod_search_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
      1 => 'super user',
    ),
    'module' => 'search',
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'super user',
    ),
    'module' => 'search',
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'super user',
    ),
    'module' => 'search',
  );

  return $permissions;
}
