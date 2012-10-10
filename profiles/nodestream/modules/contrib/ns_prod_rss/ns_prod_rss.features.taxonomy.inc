<?php
/**
 * @file
 * ns_prod_rss.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ns_prod_rss_taxonomy_default_vocabularies() {
  return array(
    'ns_prod_rss_topic' => array(
      'name' => 'RSS Topic',
      'machine_name' => 'ns_prod_rss_topic',
      'description' => 'Categories for RSS feed',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
