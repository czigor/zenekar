<?php
/**
 * @file
 * iq_flags.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iq_flags_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function iq_flags_flag_default_flags() {
  $flags = array();
  // Exported flag: "Subscription to everything".
  $flags['subscription_to_everything'] = array(
    'entity_type' => 'user',
    'title' => 'Subscription to everything',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Subscribe to: All Projects',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unsubscribe from: All Projects',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'show_on_profile' => 0,
    'access_uid' => '',
    'module' => 'iq_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Subscription to node".
  $flags['subscription_to_node'] = array(
    'entity_type' => 'node',
    'title' => 'Subscription to node',
    'global' => 0,
    'types' => array(
      0 => 'documentation',
      1 => 'issue',
      2 => 'project',
    ),
    'flag_short' => 'Subscribe to: This [node:content-type]',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unsubscribe from: This [node:content-type]',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'print' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'iq_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
