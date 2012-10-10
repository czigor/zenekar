<?php
/**
 * @file
 * ns_prod_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ns_prod_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "defaultconfig" && $api == "defaultconfig_optionals_settings") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "dynamic_formatters" && $api == "dynamic_formatters_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
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
function ns_prod_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ns_prod_news_node_info() {
  $items = array(
    'ns_prod_news_promo' => array(
      'name' => t('Web Promo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
  );
  return $items;
}
