<?php
/**
 * @file
 * ns_prod_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ns_prod_search_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_node_search_config';
  $strongarm->value = array(
    'forms' => array(
      'toggle_forms' => 0,
      'move_keyword_search' => 0,
      'advanced_populate' => 0,
      'remove_containing_wrapper' => 'default',
      'advanced_expand' => 'default',
    ),
    'string_overrides' => array(
      'labels' => array(
        'basic' => '',
        'basic_with_keys' => '',
        'basic_submit' => '',
        'advanced_fieldset' => '',
        'advanced_fieldset_with_keys' => '',
        'advanced_any' => '',
        'advanced_phrase' => '',
        'advanced_none' => '',
        'advanced_type' => '',
        'advanced_language' => '',
        'advanced_submit' => '',
      ),
      'title_display' => array(
        'basic' => 'default',
        'advanced_any' => 'default',
        'advanced_phrase' => 'default',
        'advanced_none' => 'default',
        'advanced_type' => 'default',
        'advanced_language' => 'default',
      ),
    ),
    'fields' => array(
      'containing_any' => array(
        'remove' => 0,
        'roles' => array(
          1 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
        ),
      ),
      'containing_phrase' => array(
        'remove' => 0,
        'roles' => array(
          1 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
        ),
      ),
      'containing_none' => array(
        'remove' => 0,
        'roles' => array(
          1 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
        ),
      ),
      'types' => array(
        'remove' => 0,
        'roles' => array(
          1 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
        ),
        'filter' => array(
          'ns_ad' => 'ns_ad',
          'ns_fact' => 'ns_fact',
          'ns_footer_content' => 'ns_footer_content',
          'ns_form' => 'ns_form',
          'poll' => 'poll',
          'ns_ch_rss_promo' => 'ns_ch_rss_promo',
          'ns_ch_web_promo' => 'ns_ch_web_promo',
          'ns_article' => 0,
          'ns_blog' => 0,
          'ns_blog_post' => 0,
          'ns_contributor' => 0,
        ),
        'groupings' => array(),
      ),
      'category' => array(
        'remove' => 0,
        'roles' => array(
          1 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
        ),
      ),
    ),
    'restrictions' => array(
      'admin_bypass' => 1,
    ),
  );
  $export['content_node_search_config'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_search_disabled_node';
  $strongarm->value = FALSE;
  $export['page_manager_search_disabled_node'] = $strongarm;

  return $export;
}
