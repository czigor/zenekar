<?php
/**
 * @file
 * mez_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format wysiwyg'.
  $permissions['use text format wysiwyg'] = array(
    'name' => 'use text format wysiwyg',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
