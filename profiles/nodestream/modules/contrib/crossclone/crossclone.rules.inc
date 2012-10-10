<?php

/**
 * @file
 * This file contains rules integration for this module.
 */

/**
 * Implements hook_rules_event_info().
 */
function crossclone_rules_event_info() {
  // We have to provide an alternative event that does not save the original
  // entity, since that can screw up access saves in node_save().
  $items = array(
    'crossclone_node_insert' => array(
      'label' => t('After saving new content (Original content won\'t be re-saved)'),
      'group' => t('Node'),
      'variables' => rules_events_node_variables(t('created content')),
      'access callback' => 'rules_node_integration_access',
    ),
  );
  $items['crossclone_node_insert']['variables']['node']['skip save'] = TRUE;
  return $items;
}

/**
 * Implements hook_rules_action_info().
 */
function crossclone_rules_action_info() {
  $parameters = array(
    'bundle' => array(
      'type' => 'text',
      'label' => t('Bundle'),
      'options list' => '_crossclone_bundle_list',
      'restriction' => 'input',
      'save' => TRUE,
    ),
    'clone' => array(
      'type' => 'text',
      'label' => t('Clone setting'),
      'options list' => 'crossclone_get_clone_options',
      'restriction' => 'input',
      'save' => TRUE,
    ),
    'couple_setting' => array(
      'type' => 'text',
      'label' => t('Couple settings'),
      'options list' => 'crossclone_get_couple_options',
      'restriction' => 'input',
      'save' => TRUE,
    ),
    'delete_setting' => array(
      'type' => 'text',
      'label' => t('Couple delete'),
      'options list' => 'crossclone_get_delete_options',
      'restriction' => 'input',
      'save' => TRUE,
    ),
  );
  return array(
    'crossclone_entity_action' => array(
      'label' => t('Cross clone entity'),
      'group' => t('Entities'),
      'base' => 'crossclone_entity_action',
      'parameter' => array(
        'original_entity' => array(
          'type' => 'entity',
          'label' => t('Content'),
          'save' => TRUE,
        ),
      ) + $parameters,
      'provides' => array(
        'created_entity' => array(
          'type' => 'entity',
          'label' => t('Created entity'),
        ),
      ),
    ),
    'crossclone_node_action' => array(
      'label' => t('Cross clone node'),
      'group' => t('Node'),
      'base' => 'crossclone_node_action',
      'parameter' => array(
        'original_node' => array(
          'type' => 'node',
          'label' => t('Content'),
          'save' => TRUE,
        ),
      ) + $parameters,
      'provides' => array(
        'created_node' => array(
          'type' => 'node',
          'label' => t('Created node'),
        ),
      ),
    ),
  );
}

/**
 * Get a list of bundles suitable for an #options array.
 * @return array
 *   An array of bundles.
 */
function _crossclone_bundle_list() {
  $bundles = field_info_bundles();
  $options = array();
  foreach ($bundles as $entity => $entity_bundles) {
    foreach ($entity_bundles as $bundle_name => $entity_bundle) {
      $options[$entity][$bundle_name] = $entity_bundle['label'];
    }
  }
  return $options;
}

/**
 * Action callback for entities.
 */
function crossclone_entity_action($original_entity, $bundle, $clone, $couple, $delete) {
  // Clone the original node and save it.
  $settings = array(
    'bundle' => $bundle,
    'clone' => $clone,
    'couple_setting' => $couple,
    'delete_setting' => $delete,
  );
  $info = $original_entity->info();
  $created_entity = crossclone_entity($info['type'], $original_entity->value(), $settings);
  // We return the created entity.
  return array('created_entity' => $created_entity);
}

/**
 * Action callback for nodes.
 */
function crossclone_node_action($original_node, $bundle, $clone, $couple, $delete) {
  // Clone the original node and save it.
  $settings = array(
    'bundle' => $bundle,
    'clone' => $clone,
    'couple_setting' => $couple,
    'delete_setting' => $delete,
  );
  $created_node = crossclone_entity('node', $original_node, $settings);
  // We return the created entity.
  return array('created_node' => $created_node);
}
