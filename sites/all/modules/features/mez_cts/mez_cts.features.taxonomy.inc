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
      'module' => 'mez',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
  );
}
