<?php
/**
 * @file
 * iq_project.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function iq_project_taxonomy_default_vocabularies() {
  return array(
    'project_tags' => array(
      'name' => 'Project tags',
      'machine_name' => 'project_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
