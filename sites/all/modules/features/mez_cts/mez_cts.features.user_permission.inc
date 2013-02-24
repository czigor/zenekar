<?php
/**
 * @file
 * mez_cts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_cts_user_default_permissions() {
  $permissions = array();

  // Exported permission: access private fields.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: administer field permissions.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_active.
  $permissions['create field_active'] = array(
    'name' => 'create field_active',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_email.
  $permissions['create field_email'] = array(
    'name' => 'create field_email',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_email_list.
  $permissions['create field_email_list'] = array(
    'name' => 'create field_email_list',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_member.
  $permissions['create field_member'] = array(
    'name' => 'create field_member',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_membership_dates.
  $permissions['create field_membership_dates'] = array(
    'name' => 'create field_membership_dates',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_neptun_code.
  $permissions['create field_neptun_code'] = array(
    'name' => 'create field_neptun_code',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_occupation.
  $permissions['create field_occupation'] = array(
    'name' => 'create field_occupation',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_person_address.
  $permissions['create field_person_address'] = array(
    'name' => 'create field_person_address',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_person_body.
  $permissions['create field_person_body'] = array(
    'name' => 'create field_person_body',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_phone.
  $permissions['create field_phone'] = array(
    'name' => 'create field_phone',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_active.
  $permissions['edit field_active'] = array(
    'name' => 'edit field_active',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_email.
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_email_list.
  $permissions['edit field_email_list'] = array(
    'name' => 'edit field_email_list',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_member.
  $permissions['edit field_member'] = array(
    'name' => 'edit field_member',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_membership_dates.
  $permissions['edit field_membership_dates'] = array(
    'name' => 'edit field_membership_dates',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_neptun_code.
  $permissions['edit field_neptun_code'] = array(
    'name' => 'edit field_neptun_code',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_occupation.
  $permissions['edit field_occupation'] = array(
    'name' => 'edit field_occupation',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_person_address.
  $permissions['edit field_person_address'] = array(
    'name' => 'edit field_person_address',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_person_body.
  $permissions['edit field_person_body'] = array(
    'name' => 'edit field_person_body',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_phone.
  $permissions['edit field_phone'] = array(
    'name' => 'edit field_phone',
    'roles' => array(
      0 => 'editor',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_active.
  $permissions['edit own field_active'] = array(
    'name' => 'edit own field_active',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_email.
  $permissions['edit own field_email'] = array(
    'name' => 'edit own field_email',
    'roles' => array(
      0 => 'member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_email_list.
  $permissions['edit own field_email_list'] = array(
    'name' => 'edit own field_email_list',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_member.
  $permissions['edit own field_member'] = array(
    'name' => 'edit own field_member',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_membership_dates.
  $permissions['edit own field_membership_dates'] = array(
    'name' => 'edit own field_membership_dates',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_neptun_code.
  $permissions['edit own field_neptun_code'] = array(
    'name' => 'edit own field_neptun_code',
    'roles' => array(
      0 => 'member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_occupation.
  $permissions['edit own field_occupation'] = array(
    'name' => 'edit own field_occupation',
    'roles' => array(
      0 => 'member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_person_address.
  $permissions['edit own field_person_address'] = array(
    'name' => 'edit own field_person_address',
    'roles' => array(
      0 => 'member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_person_body.
  $permissions['edit own field_person_body'] = array(
    'name' => 'edit own field_person_body',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_phone.
  $permissions['edit own field_phone'] = array(
    'name' => 'edit own field_phone',
    'roles' => array(
      0 => 'member',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_active.
  $permissions['view field_active'] = array(
    'name' => 'view field_active',
    'roles' => array(
      0 => 'editor',
      1 => 'member',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_email.
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      0 => 'editor',
      1 => 'member',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_email_list.
  $permissions['view field_email_list'] = array(
    'name' => 'view field_email_list',
    'roles' => array(
      0 => 'editor',
      1 => 'member',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_member.
  $permissions['view field_member'] = array(
    'name' => 'view field_member',
    'roles' => array(
      0 => 'editor',
      1 => 'member',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_membership_dates.
  $permissions['view field_membership_dates'] = array(
    'name' => 'view field_membership_dates',
    'roles' => array(
      0 => 'editor',
      1 => 'member',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_neptun_code.
  $permissions['view field_neptun_code'] = array(
    'name' => 'view field_neptun_code',
    'roles' => array(
      0 => 'editor',
      1 => 'member',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_occupation.
  $permissions['view field_occupation'] = array(
    'name' => 'view field_occupation',
    'roles' => array(
      0 => 'editor',
      1 => 'member',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_person_address.
  $permissions['view field_person_address'] = array(
    'name' => 'view field_person_address',
    'roles' => array(
      0 => 'editor',
      1 => 'member',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_person_body.
  $permissions['view field_person_body'] = array(
    'name' => 'view field_person_body',
    'roles' => array(
      0 => 'editor',
      1 => 'member',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_phone.
  $permissions['view field_phone'] = array(
    'name' => 'view field_phone',
    'roles' => array(
      0 => 'editor',
      1 => 'member',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_active.
  $permissions['view own field_active'] = array(
    'name' => 'view own field_active',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_email.
  $permissions['view own field_email'] = array(
    'name' => 'view own field_email',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_email_list.
  $permissions['view own field_email_list'] = array(
    'name' => 'view own field_email_list',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_member.
  $permissions['view own field_member'] = array(
    'name' => 'view own field_member',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_membership_dates.
  $permissions['view own field_membership_dates'] = array(
    'name' => 'view own field_membership_dates',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_neptun_code.
  $permissions['view own field_neptun_code'] = array(
    'name' => 'view own field_neptun_code',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_occupation.
  $permissions['view own field_occupation'] = array(
    'name' => 'view own field_occupation',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_person_address.
  $permissions['view own field_person_address'] = array(
    'name' => 'view own field_person_address',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_person_body.
  $permissions['view own field_person_body'] = array(
    'name' => 'view own field_person_body',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_phone.
  $permissions['view own field_phone'] = array(
    'name' => 'view own field_phone',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  return $permissions;
}
