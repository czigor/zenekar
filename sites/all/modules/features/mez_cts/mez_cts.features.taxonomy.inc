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
    'file_access' => array(
      'name' => 'File Access',
      'machine_name' => 'file_access',
      'description' => 'Vocabulary to regulate access of files.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
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
    'media' => array(
      'name' => 'Media tags',
      'machine_name' => 'media',
      'description' => 'Tags for files',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '4',
    ),
  );
}
