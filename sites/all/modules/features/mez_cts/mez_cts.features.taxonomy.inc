<?php
/**
 * @file
 * mez_cts.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mez_cts_taxonomy_default_vocabularies() {
  return array(
    'instruments' => array(
      'name' => 'Instruments',
      'machine_name' => 'instruments',
      'description' => 'Instruments',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'media' => array(
      'name' => 'Media tags',
      'machine_name' => 'media',
      'description' => 'Tags for files',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
