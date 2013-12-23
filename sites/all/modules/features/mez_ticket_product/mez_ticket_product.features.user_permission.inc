<?php
/**
 * @file
 * mez_ticket_product.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_ticket_product_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create commerce_product entities of bundle ticket'.
  $permissions['create commerce_product entities of bundle ticket'] = array(
    'name' => 'create commerce_product entities of bundle ticket',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle ticket'.
  $permissions['edit any commerce_product entity of bundle ticket'] = array(
    'name' => 'edit any commerce_product entity of bundle ticket',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle ticket'.
  $permissions['edit own commerce_product entities of bundle ticket'] = array(
    'name' => 'edit own commerce_product entities of bundle ticket',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle ticket'.
  $permissions['view any commerce_product entity of bundle ticket'] = array(
    'name' => 'view any commerce_product entity of bundle ticket',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle ticket'.
  $permissions['view own commerce_product entities of bundle ticket'] = array(
    'name' => 'view own commerce_product entities of bundle ticket',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
