<?php
/**
 * @file
 * ns_prod_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ns_prod_news_taxonomy_default_vocabularies() {
  return array(
    'ns_prod_news_topic' => array(
      'name' => 'Topic',
      'machine_name' => 'ns_prod_news_topic',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'ns_prod_news_topic_region' => array(
      'name' => 'Topic region',
      'machine_name' => 'ns_prod_news_topic_region',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
