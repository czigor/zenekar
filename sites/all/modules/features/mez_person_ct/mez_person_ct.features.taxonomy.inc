<?php
/**
 * @file
 * mez_person_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mez_person_ct_taxonomy_default_vocabularies() {
  return array(
    'instruments' => array(
      'name' => 'Instruments',
      'machine_name' => 'instruments',
      'description' => 'Instruments',
      'hierarchy' => 1,
      'module' => 'mez',
      'weight' => 0,
    ),
  );
}
