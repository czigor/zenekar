<?php
/**
 * @file
 * ns_prod_rss.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ns_prod_rss_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ns_prod_rss_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ns_prod_rss_node_info() {
  $items = array(
    'ns_prod_rss_promo' => array(
      'name' => t('RSS Promo'),
      'base' => 'node_content',
      'description' => t('Promo for publishing in RSS feeds only.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
  );
  return $items;
}
