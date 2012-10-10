<?php
/**
 * @file
 * ns_prod_rss.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ns_prod_rss_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ns_prod_rss_promo';
  $strongarm->value = 0;
  $export['comment_anonymous_ns_prod_rss_promo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ns_prod_rss_promo';
  $strongarm->value = 1;
  $export['comment_default_mode_ns_prod_rss_promo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ns_prod_rss_promo';
  $strongarm->value = '50';
  $export['comment_default_per_page_ns_prod_rss_promo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ns_prod_rss_promo';
  $strongarm->value = 1;
  $export['comment_form_location_ns_prod_rss_promo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ns_prod_rss_promo';
  $strongarm->value = '1';
  $export['comment_ns_prod_rss_promo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ns_prod_rss_promo';
  $strongarm->value = '1';
  $export['comment_preview_ns_prod_rss_promo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ns_prod_rss_promo';
  $strongarm->value = 1;
  $export['comment_subject_field_ns_prod_rss_promo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ns_prod_rss_promo';
  $strongarm->value = '0';
  $export['language_content_type_ns_prod_rss_promo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ns_prod_rss_promo';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ns_prod_rss_promo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ns_prod_rss_promo';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ns_prod_rss_promo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ns_prod_rss_promo';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ns_prod_rss_promo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ns_prod_rss_promo';
  $strongarm->value = 0;
  $export['node_submitted_ns_prod_rss_promo'] = $strongarm;

  return $export;
}
