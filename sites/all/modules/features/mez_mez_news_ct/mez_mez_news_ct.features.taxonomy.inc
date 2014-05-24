<?php
/**
 * @file
 * mez_mez_news_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mez_mez_news_ct_taxonomy_default_vocabularies() {
  return array(
    'media' => array(
      'name' => 'Media tags',
      'machine_name' => 'media',
      'description' => 'Tags for files',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
