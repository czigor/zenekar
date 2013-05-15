<?php
/**
 * @file
 * mez_settings.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function mez_settings_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['en'] = array(
  'site_name' => 'Budapest Technical University Orchestra',
  'site_slogan' => '',
  'theme_mez_theme_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'sites/all/themes/mez_theme/images/mez_logo.jpg',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'sites/all/themes/mez_theme/images/mez_favicon.gif',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'admin',
    'zen_breadcrumb_separator' => '›',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 1,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
    'nice_menus_custom_css' => '',
    'favicon_mimetype' => 'image/gif',
  ),
);
  $realm_variables['language']['hu'] = array(
  'site_name' => 'Műegyetemi Zenekar',
  'site_slogan' => '',
  'theme_mez_theme_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'sites/all/themes/mez_theme/images/mez_logo_hu.jpg',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'sites/all/themes/mez_theme/images/mez_favicon.gif',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'admin',
    'zen_breadcrumb_separator' => '›',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 1,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
    'nice_menus_custom_css' => '',
    'favicon_mimetype' => 'image/gif',
  ),
);

return $realm_variables;
}
