<?php
/**
 * @file
 * mez_audio_file.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_audio_file_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'member' => 'member',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
