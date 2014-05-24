<?php
/**
 * @file
 * iq_issue.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function iq_issue_taxonomy_default_vocabularies() {
  return array(
    'issue_status' => array(
      'name' => 'Issue status',
      'machine_name' => 'issue_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'issue_tags' => array(
      'name' => 'Issue tags',
      'machine_name' => 'issue_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
