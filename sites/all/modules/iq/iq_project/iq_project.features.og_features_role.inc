<?php
/**
 * @file
 * iq_project.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function iq_project_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:project:customer'.
  $roles['node:project:customer'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'project',
    'name' => 'customer',
  );

  // Exported OG Role: 'node:project:developer'.
  $roles['node:project:developer'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'project',
    'name' => 'developer',
  );

  return $roles;
}
