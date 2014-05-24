<?php
/**
 * @file
 * mez_ct_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_ct_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'add terms in 1'.
  $permissions['add terms in 1'] = array(
    'name' => 'add terms in 1',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in 2'.
  $permissions['add terms in 2'] = array(
    'name' => 'add terms in 2',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_active'.
  $permissions['create field_active'] = array(
    'name' => 'create field_active',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_email'.
  $permissions['create field_email'] = array(
    'name' => 'create field_email',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_email_list'.
  $permissions['create field_email_list'] = array(
    'name' => 'create field_email_list',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_member'.
  $permissions['create field_member'] = array(
    'name' => 'create field_member',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_membership_dates'.
  $permissions['create field_membership_dates'] = array(
    'name' => 'create field_membership_dates',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_neptun_code'.
  $permissions['create field_neptun_code'] = array(
    'name' => 'create field_neptun_code',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_occupation'.
  $permissions['create field_occupation'] = array(
    'name' => 'create field_occupation',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_person_address'.
  $permissions['create field_person_address'] = array(
    'name' => 'create field_person_address',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_person_body'.
  $permissions['create field_person_body'] = array(
    'name' => 'create field_person_body',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_phone'.
  $permissions['create field_phone'] = array(
    'name' => 'create field_phone',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete terms in instruments'.
  $permissions['delete terms in instruments'] = array(
    'name' => 'delete terms in instruments',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media'.
  $permissions['delete terms in media'] = array(
    'name' => 'delete terms in media',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit field_active'.
  $permissions['edit field_active'] = array(
    'name' => 'edit field_active',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_email'.
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_email_list'.
  $permissions['edit field_email_list'] = array(
    'name' => 'edit field_email_list',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_member'.
  $permissions['edit field_member'] = array(
    'name' => 'edit field_member',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_membership_dates'.
  $permissions['edit field_membership_dates'] = array(
    'name' => 'edit field_membership_dates',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_neptun_code'.
  $permissions['edit field_neptun_code'] = array(
    'name' => 'edit field_neptun_code',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_occupation'.
  $permissions['edit field_occupation'] = array(
    'name' => 'edit field_occupation',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_person_address'.
  $permissions['edit field_person_address'] = array(
    'name' => 'edit field_person_address',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_person_body'.
  $permissions['edit field_person_body'] = array(
    'name' => 'edit field_person_body',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_phone'.
  $permissions['edit field_phone'] = array(
    'name' => 'edit field_phone',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_active'.
  $permissions['edit own field_active'] = array(
    'name' => 'edit own field_active',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_email'.
  $permissions['edit own field_email'] = array(
    'name' => 'edit own field_email',
    'roles' => array(
      'member' => 'member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_email_list'.
  $permissions['edit own field_email_list'] = array(
    'name' => 'edit own field_email_list',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_member'.
  $permissions['edit own field_member'] = array(
    'name' => 'edit own field_member',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_membership_dates'.
  $permissions['edit own field_membership_dates'] = array(
    'name' => 'edit own field_membership_dates',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_neptun_code'.
  $permissions['edit own field_neptun_code'] = array(
    'name' => 'edit own field_neptun_code',
    'roles' => array(
      'member' => 'member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_occupation'.
  $permissions['edit own field_occupation'] = array(
    'name' => 'edit own field_occupation',
    'roles' => array(
      'member' => 'member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_person_address'.
  $permissions['edit own field_person_address'] = array(
    'name' => 'edit own field_person_address',
    'roles' => array(
      'member' => 'member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_person_body'.
  $permissions['edit own field_person_body'] = array(
    'name' => 'edit own field_person_body',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_phone'.
  $permissions['edit own field_phone'] = array(
    'name' => 'edit own field_phone',
    'roles' => array(
      'member' => 'member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit terms in instruments'.
  $permissions['edit terms in instruments'] = array(
    'name' => 'edit terms in instruments',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media'.
  $permissions['edit terms in media'] = array(
    'name' => 'edit terms in media',
    'roles' => array(
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate file entities'.
  $permissions['translate file entities'] = array(
    'name' => 'translate file entities',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'view author on comment'.
  $permissions['view author on comment'] = array(
    'name' => 'view author on comment',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view author on node'.
  $permissions['view author on node'] = array(
    'name' => 'view author on node',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view changed_date on node'.
  $permissions['view changed_date on node'] = array(
    'name' => 'view changed_date on node',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view comments on node'.
  $permissions['view comments on node'] = array(
    'name' => 'view comments on node',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view field_active'.
  $permissions['view field_active'] = array(
    'name' => 'view field_active',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_email'.
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_email_list'.
  $permissions['view field_email_list'] = array(
    'name' => 'view field_email_list',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_member'.
  $permissions['view field_member'] = array(
    'name' => 'view field_member',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_membership_dates'.
  $permissions['view field_membership_dates'] = array(
    'name' => 'view field_membership_dates',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_neptun_code'.
  $permissions['view field_neptun_code'] = array(
    'name' => 'view field_neptun_code',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_occupation'.
  $permissions['view field_occupation'] = array(
    'name' => 'view field_occupation',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_person_address'.
  $permissions['view field_person_address'] = array(
    'name' => 'view field_person_address',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_person_body'.
  $permissions['view field_person_body'] = array(
    'name' => 'view field_person_body',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_phone'.
  $permissions['view field_phone'] = array(
    'name' => 'view field_phone',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view links on comment'.
  $permissions['view links on comment'] = array(
    'name' => 'view links on comment',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view links on node'.
  $permissions['view links on node'] = array(
    'name' => 'view links on node',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view more_link on taxonomy_term'.
  $permissions['view more_link on taxonomy_term'] = array(
    'name' => 'view more_link on taxonomy_term',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view name on user'.
  $permissions['view name on user'] = array(
    'name' => 'view name on user',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view node_link on node'.
  $permissions['view node_link on node'] = array(
    'name' => 'view node_link on node',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view own field_active'.
  $permissions['view own field_active'] = array(
    'name' => 'view own field_active',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_email'.
  $permissions['view own field_email'] = array(
    'name' => 'view own field_email',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_email_list'.
  $permissions['view own field_email_list'] = array(
    'name' => 'view own field_email_list',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_member'.
  $permissions['view own field_member'] = array(
    'name' => 'view own field_member',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_membership_dates'.
  $permissions['view own field_membership_dates'] = array(
    'name' => 'view own field_membership_dates',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_neptun_code'.
  $permissions['view own field_neptun_code'] = array(
    'name' => 'view own field_neptun_code',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_occupation'.
  $permissions['view own field_occupation'] = array(
    'name' => 'view own field_occupation',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_person_address'.
  $permissions['view own field_person_address'] = array(
    'name' => 'view own field_person_address',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_person_body'.
  $permissions['view own field_person_body'] = array(
    'name' => 'view own field_person_body',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_phone'.
  $permissions['view own field_phone'] = array(
    'name' => 'view own field_phone',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view permalink on comment'.
  $permissions['view permalink on comment'] = array(
    'name' => 'view permalink on comment',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view post_date on comment'.
  $permissions['view post_date on comment'] = array(
    'name' => 'view post_date on comment',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view post_date on node'.
  $permissions['view post_date on node'] = array(
    'name' => 'view post_date on node',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view search_info on node'.
  $permissions['view search_info on node'] = array(
    'name' => 'view search_info on node',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view search_snippet on node'.
  $permissions['view search_snippet on node'] = array(
    'name' => 'view search_snippet on node',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view submitted on comment'.
  $permissions['view submitted on comment'] = array(
    'name' => 'view submitted on comment',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view submitted_by on node'.
  $permissions['view submitted_by on node'] = array(
    'name' => 'view submitted_by on node',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view title on comment'.
  $permissions['view title on comment'] = array(
    'name' => 'view title on comment',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view title on node'.
  $permissions['view title on node'] = array(
    'name' => 'view title on node',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view title on taxonomy_term'.
  $permissions['view title on taxonomy_term'] = array(
    'name' => 'view title on taxonomy_term',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  return $permissions;
}
