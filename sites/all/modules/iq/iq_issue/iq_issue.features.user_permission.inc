<?php
/**
 * @file
 * iq_issue.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function iq_issue_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create issue content'.
  $permissions['create issue content'] = array(
    'name' => 'create issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any issue content'.
  $permissions['delete any issue content'] = array(
    'name' => 'delete any issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own issue content'.
  $permissions['delete own issue content'] = array(
    'name' => 'delete own issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in issue_tags'.
  $permissions['delete terms in issue_tags'] = array(
    'name' => 'delete terms in issue_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any issue content'.
  $permissions['edit any issue content'] = array(
    'name' => 'edit any issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own issue content'.
  $permissions['edit own issue content'] = array(
    'name' => 'edit own issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in issue_tags'.
  $permissions['edit terms in issue_tags'] = array(
    'name' => 'edit terms in issue_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view comment alterations in issue'.
  $permissions['view comment alterations in issue'] = array(
    'name' => 'view comment alterations in issue',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment_alter',
  );

  return $permissions;
}
