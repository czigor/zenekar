<?php
/**
 * @file
 * iq_project.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function iq_project_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:project:access comment timer'
  $permissions['node:project:access comment timer'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:add user'
  $permissions['node:project:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:administer group'
  $permissions['node:project:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:approve and deny subscription'
  $permissions['node:project:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:create documentation content'
  $permissions['node:project:create documentation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:create issue content'
  $permissions['node:project:create issue content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:create news content'
  $permissions['node:project:create news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:delete any documentation content'
  $permissions['node:project:delete any documentation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete any issue content'
  $permissions['node:project:delete any issue content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete any news content'
  $permissions['node:project:delete any news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete own documentation content'
  $permissions['node:project:delete own documentation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete own issue content'
  $permissions['node:project:delete own issue content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete own news content'
  $permissions['node:project:delete own news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:manage members'
  $permissions['node:project:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:manage permissions'
  $permissions['node:project:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:manage roles'
  $permissions['node:project:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:subscribe'
  $permissions['node:project:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:subscribe without approval'
  $permissions['node:project:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:unsubscribe'
  $permissions['node:project:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update any documentation content'
  $permissions['node:project:update any documentation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update any issue content'
  $permissions['node:project:update any issue content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update any news content'
  $permissions['node:project:update any news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update field_documentation_attachments field'
  $permissions['node:project:update field_documentation_attachments field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_documentation_body field'
  $permissions['node:project:update field_documentation_body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_documentation_major field'
  $permissions['node:project:update field_documentation_major field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_assigned_to field'
  $permissions['node:project:update field_issue_assigned_to field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_attachments field'
  $permissions['node:project:update field_issue_attachments field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_business_value field'
  $permissions['node:project:update field_issue_business_value field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_description field'
  $permissions['node:project:update field_issue_description field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_done_if_when field'
  $permissions['node:project:update field_issue_done_if_when field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_estimate field'
  $permissions['node:project:update field_issue_estimate field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_how_to_demo field'
  $permissions['node:project:update field_issue_how_to_demo field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_kanban field'
  $permissions['node:project:update field_issue_kanban field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_parent field'
  $permissions['node:project:update field_issue_parent field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_related field'
  $permissions['node:project:update field_issue_related field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_status_term field'
  $permissions['node:project:update field_issue_status_term field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_tags field'
  $permissions['node:project:update field_issue_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_issue_type field'
  $permissions['node:project:update field_issue_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_news_body field'
  $permissions['node:project:update field_news_body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_project_attachments field'
  $permissions['node:project:update field_project_attachments field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_project_body field'
  $permissions['node:project:update field_project_body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_project_tags field'
  $permissions['node:project:update field_project_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update group'
  $permissions['node:project:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update group_access field'
  $permissions['node:project:update group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update group_content_access field'
  $permissions['node:project:update group_content_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update group_group field'
  $permissions['node:project:update group_group field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update og_group_ref field'
  $permissions['node:project:update og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update og_user_node field'
  $permissions['node:project:update og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update own documentation content'
  $permissions['node:project:update own documentation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update own issue content'
  $permissions['node:project:update own issue content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update own news content'
  $permissions['node:project:update own news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update title_field field'
  $permissions['node:project:update title_field field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_documentation_attachments field'
  $permissions['node:project:view field_documentation_attachments field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_documentation_body field'
  $permissions['node:project:view field_documentation_body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_documentation_major field'
  $permissions['node:project:view field_documentation_major field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view field_issue_assigned_to field'
  $permissions['node:project:view field_issue_assigned_to field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_issue_attachments field'
  $permissions['node:project:view field_issue_attachments field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_issue_business_value field'
  $permissions['node:project:view field_issue_business_value field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_issue_description field'
  $permissions['node:project:view field_issue_description field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_issue_done_if_when field'
  $permissions['node:project:view field_issue_done_if_when field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_issue_estimate field'
  $permissions['node:project:view field_issue_estimate field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_issue_how_to_demo field'
  $permissions['node:project:view field_issue_how_to_demo field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_issue_kanban field'
  $permissions['node:project:view field_issue_kanban field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_issue_parent field'
  $permissions['node:project:view field_issue_parent field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_issue_related field'
  $permissions['node:project:view field_issue_related field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_issue_status_term field'
  $permissions['node:project:view field_issue_status_term field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_issue_tags field'
  $permissions['node:project:view field_issue_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_issue_type field'
  $permissions['node:project:view field_issue_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_news_body field'
  $permissions['node:project:view field_news_body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_project_attachments field'
  $permissions['node:project:view field_project_attachments field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_project_body field'
  $permissions['node:project:view field_project_body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_project_tags field'
  $permissions['node:project:view field_project_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view group_access field'
  $permissions['node:project:view group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view group_content_access field'
  $permissions['node:project:view group_content_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view group_group field'
  $permissions['node:project:view group_group field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view og_group_ref field'
  $permissions['node:project:view og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view og_user_node field'
  $permissions['node:project:view og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view title_field field'
  $permissions['node:project:view title_field field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'customer' => 'customer',
      'developer' => 'developer',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
