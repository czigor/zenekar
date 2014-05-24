<?php
/**
 * @file
 * iq_flags.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function iq_flags_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'flag subscription_to_everything'.
  $permissions['flag subscription_to_everything'] = array(
    'name' => 'flag subscription_to_everything',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag subscription_to_node'.
  $permissions['flag subscription_to_node'] = array(
    'name' => 'flag subscription_to_node',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag subscription_to_everything'.
  $permissions['unflag subscription_to_everything'] = array(
    'name' => 'unflag subscription_to_everything',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag subscription_to_node'.
  $permissions['unflag subscription_to_node'] = array(
    'name' => 'unflag subscription_to_node',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(),
    'module' => 'flag',
  );

  return $permissions;
}
