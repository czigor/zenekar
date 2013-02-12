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
  $realm_variables['global']['default'] = array(
  'theme_default' => 'mez_theme',
  'cron_key' => 'VajsY0_4B6pUW1Jl_yIlUflV0QKgImcEjzGMhfR7nTQ',
  'install_task' => 'done',
  'path_alias_whitelist' => array(
    'user' => TRUE,
    'taxonomy' => TRUE,
  ),
  'drupal_private_key' => 'gevniYHK56ozYdRBGD9bO2_43L6s7HYAsfdp4KVLm8I',
  'filter_fallback_format' => 'plain_text',
  'date_api_version' => '7.2',
  'menu_masks' => array(
    0 => 501,
    1 => 494,
    2 => 493,
    3 => 250,
    4 => 247,
    5 => 246,
    6 => 245,
    7 => 125,
    8 => 124,
    9 => 123,
    10 => 122,
    11 => 121,
    12 => 118,
    13 => 117,
    14 => 108,
    15 => 84,
    16 => 63,
    17 => 62,
    18 => 61,
    19 => 60,
    20 => 59,
    21 => 58,
    22 => 56,
    23 => 54,
    24 => 44,
    25 => 31,
    26 => 30,
    27 => 29,
    28 => 28,
    29 => 27,
    30 => 26,
    31 => 24,
    32 => 23,
    33 => 22,
    34 => 21,
    35 => 20,
    36 => 15,
    37 => 14,
    38 => 13,
    39 => 11,
    40 => 10,
    41 => 8,
    42 => 7,
    43 => 6,
    44 => 5,
    45 => 3,
    46 => 2,
    47 => 1,
  ),
  'menu_expanded' => array(),
  'language_negotiation_language_content' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  ),
  'language_negotiation_language_url' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_types' => array(
    'language' => TRUE,
    'language_content' => TRUE,
    'language_url' => FALSE,
  ),
  'language_negotiation_language' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  ),
  'variable_module_list' => array(
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
    'i18n_string' => array(
      0 => 'i18n_string_translate_langcode_en',
      1 => 'i18n_string_translate_langcode_hu',
      2 => 'i18n_string_allowed_formats',
      3 => 'i18n_string_source_language',
      4 => 'i18n_string_debug',
    ),
  ),
  'entity_translation_entity_types' => array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'file' => 'file',
    'comment' => 0,
    'user' => 0,
  ),
  'translation_language_type' => 'language_content',
  'variable_realm_list_language' => array(
    0 => 'site_name',
    1 => 'site_slogan',
  ),
  'update_last_check' => 1360693041,
  'pathauto_node_pattern' => '[node:title]',
  'pathauto_taxonomy_term_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_forum_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_user_pattern' => 'users/[user:name]',
  'pathauto_blog_pattern' => 'blogs/[user:name]',
  'pathauto_punctuation_hyphen' => 1,
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
    'favicon_mimetype' => 'image/gif',
  ),
  'date_format_short' => 'Y-m-d H:i',
  'date_format_medium' => 'Y. M j. H:i',
  'date_format_long' => 'Y. F j. l H:i',
  'date_format_only_year' => 'Y',
  'date_format_only_day' => 'Y. F j.',
  'date_first_day' => 1,
  'cron_safe_threshold' => 3600,
  'file_default_scheme' => 'public',
  'file_public_path' => 'sites/default/files',
  'file_temporary_path' => '../tmp',
  'file_private_path' => '../priv',
  'image_jpeg_quality' => 100,
  'admin_menu_margin_top' => 1,
  'admin_menu_position_fixed' => 0,
  'admin_menu_tweak_modules' => 1,
  'admin_menu_tweak_permissions' => 1,
  'admin_menu_tweak_tabs' => 0,
  'admin_menu_devel_modules_skip' => array(
    'devel' => 0,
    'devel_node_access' => 0,
    'views_ui' => 0,
  ),
  'configurable_timezones' => 0,
  'pathauto_case' => 1,
  'pathauto_ignore_words' => '',
  'pathauto_max_component_length' => 100,
  'pathauto_max_length' => 100,
  'pathauto_punctuation_ampersand' => 0,
  'pathauto_punctuation_asterisk' => 0,
  'pathauto_punctuation_at' => 0,
  'pathauto_punctuation_backtick' => 0,
  'pathauto_punctuation_back_slash' => 0,
  'pathauto_punctuation_caret' => 0,
  'pathauto_punctuation_colon' => 0,
  'pathauto_punctuation_comma' => 0,
  'pathauto_punctuation_dollar' => 0,
  'pathauto_punctuation_double_quotes' => 0,
  'pathauto_punctuation_equal' => 0,
  'pathauto_punctuation_exclamation' => 0,
  'pathauto_punctuation_greater_than' => 0,
  'pathauto_punctuation_hash' => 0,
  'pathauto_punctuation_left_curly' => 0,
  'pathauto_punctuation_left_parenthesis' => 0,
  'pathauto_punctuation_left_square' => 0,
  'pathauto_punctuation_less_than' => 0,
  'pathauto_punctuation_percent' => 0,
  'pathauto_punctuation_period' => 0,
  'pathauto_punctuation_pipe' => 0,
  'pathauto_punctuation_plus' => 0,
  'pathauto_punctuation_question_mark' => 0,
  'pathauto_punctuation_quotes' => 0,
  'pathauto_punctuation_right_curly' => 0,
  'pathauto_punctuation_right_parenthesis' => 0,
  'pathauto_punctuation_right_square' => 0,
  'pathauto_punctuation_semicolon' => 0,
  'pathauto_punctuation_slash' => 0,
  'pathauto_punctuation_tilde' => 0,
  'pathauto_punctuation_underscore' => 2,
  'pathauto_reduce_ascii' => 1,
  'pathauto_separator' => '-',
  'pathauto_transliterate' => 1,
  'pathauto_update_action' => 2,
  'pathauto_verbose' => 1,
  'transliteration_file_lowercase' => 1,
  'transliteration_file_uploads' => 1,
  'css_js_query_string' => 'mi4dfz',
  'entityreference:base-tables' => array(
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'comment' => array(
      0 => 'comment',
      1 => 'cid',
    ),
    'field_collection_item' => array(
      0 => 'field_collection_item',
      1 => 'item_id',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'wysiwyg_profile' => array(
      0 => 'wysiwyg',
      1 => 'format',
    ),
    'fe_paths_config' => array(
      0 => 'fe_paths_config',
      1 => 'id',
    ),
  ),
  'gmap_marker_file' => '1',
  'features_ignored_orphans' => array(),
  'site_name' => 'Műegyetemi Zenekar',
  'site_mail' => 'mez1896@gmail.com',
  'date_default_timezone' => 'Europe/Budapest',
  'site_default_country' => 'HU',
  'update_notify_emails' => array(
    0 => 'czovekandras@gmail.com',
  ),
  'clean_url' => '1',
  'install_time' => 1360692931,
  'language_default' => array(
    'language' => 'hu',
    'name' => 'Hungarian',
    'native' => 'Magyar',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'hu',
    'weight' => '0',
    'javascript' => 'CVbYkF6BodTBOxM6M3CaV_2JXXLy_knwCcoKbSAW6nM',
  ),
  'language_count' => 2,
  'features_codecache' => array(
    'mez_cts' => array(
      'ds_field_settings' => '3a796bc9fdd4da9a476524438ca90d8e',
      'dependencies' => 'ebbcce622b1459a2108906b9b4a1b6d9',
      'variable' => 'ff1b990422d2e941642119ce5f750fb5',
      'field' => '7769e361862b787e921794179792ae36',
      'file_display' => 'd852b491cdb6e006461c3cbf3ecc0db8',
      'node' => '4a2cd5e9457641fc76675a392cd9396a',
      'taxonomy' => 'd16a10885eb533aa39619873e8e82506',
      'ds_layout_settings' => 'b9823cf79765df16ec74523bfa7c4247',
    ),
    'mez_frontpage' => array(
      'dependencies' => 'bcc02e403dc3b4c6e526684b653d757e',
      'page_manager_pages' => 'f5b48bf6a79c0ad0d08942642bea9dbf',
    ),
    'mez_permissions' => array(
      'dependencies' => 'b0bd18751f5a25f91f7e65d80cd98154',
      'user_permission' => '2d4df319cc55dfad0f11326ed1ad7d98',
    ),
    'mez_wysiwyg' => array(
      'dependencies' => '01b7525392c5a727b841f2a039161b2b',
      'variable' => 'bc9c60bbf4f45974c5cf7c60b309e139',
      'filter' => '683f591484ac0a9c8eb8067d4d1b10bc',
      'wysiwyg' => '7704edb77497801bdad354b253a2980c',
    ),
    'mez_settings' => array(
      'image' => '67321a628bb1311941730498f009de6b',
      'dependencies' => '0d3db674b201b57f67f4d16339e1eade',
      'variable' => '2d8dccc6505741463a108d2d3904a150',
    ),
    'mez_views' => array(
      'views_view' => '7669c723941d8b4e583287c0d1285731',
      'dependencies' => 'b331557db71549ab15c663554062757c',
    ),
  ),
  'features_semaphore' => array(),
  'additional_settings__active_tab_composer' => 'edit-workflow',
  'additional_settings__active_tab_concert' => 'edit-workflow',
  'additional_settings__active_tab_news' => 'edit-workflow',
  'additional_settings__active_tab_page' => 'edit-workflow',
  'additional_settings__active_tab_person' => 'edit-workflow',
  'additional_settings__active_tab_piece' => 'edit-workflow',
  'ant_composer' => '1',
  'ant_news' => '0',
  'ant_pattern_composer' => '<?php
$bool = reset(field_get_items(\'node\', $node, \'field_comma_separator\'));
$comma = $bool[\'value\'] ? \', \' : \' \';
$given_names = field_get_items(\'node\', $node, \'field_given_name\');
$given_name = \'\';
foreach ($given_names as $gn) {
  $given_name .= $gn[\'value\'] . \' \';
}
$given_name = trim($given_name);
return "[node:field-family-name]" . $comma . "$given_name";
?>',
  'ant_pattern_news' => '',
  'ant_pattern_piece' => '[node:field-composer:title]: [node:field_piece_title]',
  'ant_php_composer' => 1,
  'ant_php_news' => 0,
  'ant_php_piece' => 0,
  'ant_piece' => '1',
  'colorbox_caption_trim' => '0',
  'colorbox_caption_trim_length' => '75',
  'colorbox_compression_type' => 'minified',
  'colorbox_custom_settings_activate' => '1',
  'colorbox_fixed' => 1,
  'colorbox_initialheight' => '',
  'colorbox_initialwidth' => '',
  'colorbox_inline' => 0,
  'colorbox_load' => 0,
  'colorbox_maxheight' => '98%',
  'colorbox_maxwidth' => '98%',
  'colorbox_opacity' => '0.85',
  'colorbox_overlayclose' => 1,
  'colorbox_pages' => 'admin*
imagebrowser*
img_assist*
imce*
node/add/*
node/*/edit
print/*
printpdf/*
system/ajax
system/ajax/*',
  'colorbox_scrolling' => '1',
  'colorbox_slideshow' => '0',
  'colorbox_slideshowauto' => 1,
  'colorbox_slideshowspeed' => '2500',
  'colorbox_style' => 'default',
  'colorbox_text_close' => 'Close',
  'colorbox_text_current' => '{current} of {total}',
  'colorbox_text_next' => 'Next »',
  'colorbox_text_previous' => '« Prev',
  'colorbox_text_start' => 'start slideshow',
  'colorbox_text_stop' => 'stop slideshow',
  'colorbox_transition_speed' => '350',
  'colorbox_transition_type' => 'elastic',
  'colorbox_visibility' => '0',
  'comment_anonymous_composer' => 0,
  'comment_anonymous_concert' => 0,
  'comment_anonymous_news' => 0,
  'comment_anonymous_page' => 0,
  'comment_anonymous_person' => 0,
  'comment_anonymous_piece' => 0,
  'comment_composer' => '1',
  'comment_concert' => '1',
  'comment_default_mode_composer' => 1,
  'comment_default_mode_concert' => 1,
  'comment_default_mode_news' => 1,
  'comment_default_mode_page' => 1,
  'comment_default_mode_person' => 1,
  'comment_default_mode_piece' => 1,
  'comment_default_per_page_composer' => '50',
  'comment_default_per_page_concert' => '50',
  'comment_default_per_page_news' => '50',
  'comment_default_per_page_page' => '50',
  'comment_default_per_page_person' => '50',
  'comment_default_per_page_piece' => '50',
  'comment_form_location_composer' => 1,
  'comment_form_location_concert' => 1,
  'comment_form_location_news' => 1,
  'comment_form_location_page' => 1,
  'comment_form_location_person' => 1,
  'comment_form_location_piece' => 1,
  'comment_news' => '1',
  'comment_page' => '1',
  'comment_person' => '1',
  'comment_piece' => '1',
  'comment_preview_composer' => '1',
  'comment_preview_concert' => '1',
  'comment_preview_news' => '1',
  'comment_preview_page' => '1',
  'comment_preview_person' => '1',
  'comment_preview_piece' => '1',
  'comment_subject_field_composer' => 1,
  'comment_subject_field_concert' => 1,
  'comment_subject_field_news' => 1,
  'comment_subject_field_page' => 1,
  'comment_subject_field_person' => 1,
  'comment_subject_field_piece' => 1,
  'diff_enable_revisions_page_node_composer' => 1,
  'diff_enable_revisions_page_node_concert' => 1,
  'diff_enable_revisions_page_node_news' => 1,
  'diff_enable_revisions_page_node_page' => 1,
  'diff_enable_revisions_page_node_person' => 1,
  'diff_enable_revisions_page_node_piece' => 1,
  'diff_show_preview_changes_node_composer' => 1,
  'diff_show_preview_changes_node_concert' => 1,
  'diff_show_preview_changes_node_news' => 1,
  'diff_show_preview_changes_node_page' => 1,
  'diff_show_preview_changes_node_person' => 1,
  'diff_show_preview_changes_node_piece' => 1,
  'diff_view_mode_preview_node_composer' => 'full',
  'diff_view_mode_preview_node_concert' => 'full',
  'diff_view_mode_preview_node_news' => 'full',
  'diff_view_mode_preview_node_page' => 'full',
  'diff_view_mode_preview_node_person' => 'full',
  'diff_view_mode_preview_node_piece' => 'full',
  'ds_extras_field_permissions' => 1,
  'ds_extras_field_template' => 1,
  'ds_extras_fields_extra' => 1,
  'ds_extras_fields_extra_list' => '',
  'ds_extras_hidden_region' => 0,
  'ds_extras_hide_page_sidebars' => 0,
  'ds_extras_hide_page_title' => 0,
  'ds_extras_switch_field' => 0,
  'ds_extras_switch_view_mode' => 0,
  'ds_extras_vd' => 0,
  'entity_translation_comment_filter_composer' => 0,
  'entity_translation_comment_filter_concert' => 0,
  'entity_translation_comment_filter_news' => 0,
  'entity_translation_comment_filter_page' => 0,
  'entity_translation_comment_filter_person' => 0,
  'entity_translation_comment_filter_piece' => 0,
  'entity_translation_hide_translation_links_composer' => 1,
  'entity_translation_hide_translation_links_concert' => 1,
  'entity_translation_hide_translation_links_news' => 1,
  'entity_translation_hide_translation_links_page' => 1,
  'entity_translation_hide_translation_links_person' => 1,
  'entity_translation_hide_translation_links_piece' => 1,
  'entity_translation_node_metadata_composer' => '0',
  'entity_translation_node_metadata_concert' => '0',
  'entity_translation_node_metadata_news' => '0',
  'entity_translation_node_metadata_page' => '0',
  'entity_translation_node_metadata_person' => '0',
  'entity_translation_node_metadata_piece' => '0',
  'entity_translation_settings_file__audio' => array(
    'default_language' => 'hu',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  ),
  'entity_translation_settings_file__document' => array(
    'default_language' => 'hu',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  ),
  'entity_translation_settings_file__image' => array(
    'default_language' => 'hu',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  ),
  'entity_translation_settings_file__video' => array(
    'default_language' => 'hu',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  ),
  'entity_translation_settings_node__composer' => array(
    'default_language' => 'und',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  ),
  'entity_translation_settings_node__concert' => array(
    'default_language' => 'hu',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  ),
  'entity_translation_settings_node__news' => array(
    'default_language' => 'hu',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  ),
  'entity_translation_settings_node__page' => array(
    'default_language' => 'hu',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  ),
  'entity_translation_settings_node__person' => array(
    'default_language' => 'und',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  ),
  'entity_translation_settings_node__piece' => array(
    'default_language' => 'hu',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  ),
  'entity_translation_settings_taxonomy_term__instruments' => array(
    'default_language' => 'en',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  ),
  'field_bundle_settings_field_collection_item__field_performers' => array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_field_collection_item__field_programme' => array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_file__audio' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '-10',
        ),
        'preview' => array(
          'weight' => '-5',
        ),
        'language' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  ),
  'field_bundle_settings_file__image' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '0',
        ),
        'preview' => array(
          'weight' => '1',
        ),
        'language' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  ),
  'field_bundle_settings_file__video' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '-10',
        ),
        'preview' => array(
          'weight' => '-5',
        ),
        'language' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  ),
  'field_bundle_settings_node__composer' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__concert' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '5',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  ),
  'field_bundle_settings_node__news' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__page' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'language' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__person' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'language' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__piece' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '1',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  ),
  'language_content_type_composer' => '4',
  'language_content_type_concert' => '4',
  'language_content_type_news' => '4',
  'language_content_type_page' => '4',
  'language_content_type_person' => '4',
  'language_content_type_piece' => '4',
  'location_default_country' => 'hu',
  'location_defaultnum_concert' => '1',
  'location_display_location' => '1',
  'location_jit_geocoding' => 0,
  'location_locpick_macro' => '[gmap]',
  'location_maplink_external' => 0,
  'location_maplink_external_method' => 'target="_blank"',
  'location_maxnum_concert' => '1',
  'location_settings_node_concert' => array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
      'location_addanother' => 0,
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-100',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'hu',
          'weight' => '-99',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-98',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-97',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '-96',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '-95',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '-94',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '-93',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'additional' => 'additional',
        'province' => 'province',
        'postal_code' => 'postal_code',
        'country' => 'country',
        'province_name' => 'province_name',
        'country_name' => 'country_name',
        'map_link' => 'map_link',
        'coords' => 'coords',
        'name' => 0,
        'street' => 0,
        'city' => 0,
        'locpick' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  ),
  'location_use_province_abbreviation' => '1',
  'location_usegmap' => 1,
  'menu_options_composer' => array(),
  'menu_options_concert' => array(),
  'menu_options_news' => array(),
  'menu_options_page' => array(),
  'menu_options_person' => array(),
  'menu_options_piece' => array(),
  'menu_parent_composer' => 'main-menu:0',
  'menu_parent_concert' => 'main-menu:0',
  'menu_parent_news' => 'main-menu:0',
  'menu_parent_page' => 'main-menu:0',
  'menu_parent_person' => 'main-menu:0',
  'menu_parent_piece' => 'main-menu:0',
  'node_options_composer' => array(
    0 => 'status',
    1 => 'revision',
  ),
  'node_options_concert' => array(
    0 => 'status',
    1 => 'revision',
  ),
  'node_options_news' => array(
    0 => 'status',
    1 => 'revision',
  ),
  'node_options_page' => array(
    0 => 'status',
    1 => 'revision',
  ),
  'node_options_person' => array(
    0 => 'status',
    1 => 'revision',
  ),
  'node_options_piece' => array(
    0 => 'status',
    1 => 'revision',
  ),
  'node_preview_composer' => '1',
  'node_preview_concert' => '1',
  'node_preview_news' => '1',
  'node_preview_page' => '1',
  'node_preview_person' => '1',
  'node_preview_piece' => '1',
  'node_submitted_composer' => 0,
  'node_submitted_concert' => 0,
  'node_submitted_news' => 1,
  'node_submitted_page' => 0,
  'node_submitted_person' => 0,
  'node_submitted_piece' => 0,
  'title_comment' => array(
    'auto_attach' => array(
      'subject' => 0,
    ),
    'hide_label' => array(
      'page' => 0,
      'entity' => 0,
    ),
  ),
  'title_node' => array(
    'auto_attach' => array(
      'title' => 'title',
    ),
    'hide_label' => array(
      'page' => 'page',
      'entity' => 'entity',
    ),
  ),
  'title_taxonomy_term' => array(
    'auto_attach' => array(
      'name' => 'name',
      'description' => 0,
    ),
    'hide_label' => array(
      'page' => 0,
      'entity' => 0,
    ),
  ),
  'media__file_extensions' => 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv wmv ico',
  'media__wysiwyg_allowed_types' => array(
    0 => 'image',
  ),
  'media__wysiwyg_browser_plugins' => array(
    0 => 'upload',
    1 => 'media_default--media_browser_my_files',
    2 => 'media_internet',
  ),
  'media__wysiwyg_upload_directory' => 'wysiwyg_files/[current-user:uuid]',
  'admin_theme' => 'seven',
  'fep_audio' => array(
    'public' => array(
      'path' => '[file:mime]',
      'filename' => '[file:name-only-original].[file:extension-original]',
    ),
    'private' => array(
      'path' => '[file:mime]',
      'filename' => '[file:name-only-original].[file:extension-original]',
    ),
  ),
  'fep_document' => array(
    'public' => array(
      'path' => '[file:mime]',
      'filename' => '[file:name-only-original].[file:extension-original]',
    ),
    'private' => array(
      'path' => '[file:mime]',
      'filename' => '[file:name-only-original].[file:extension-original]',
    ),
  ),
  'fep_image' => array(
    'public' => array(
      'path' => '[file:mime]',
      'filename' => '[file:name-only-original].[file:extension-original]',
    ),
    'private' => array(
      'path' => '[file:mime]',
      'filename' => '[file:name-only-original].[file:extension-original]',
    ),
  ),
  'fep_video' => array(
    'public' => array(
      'path' => '[file:mime]',
      'filename' => '[file:name-only-original].[file:extension-original]',
    ),
    'private' => array(
      'path' => '[file:mime]',
      'filename' => '[file:name-only-original].[file:extension-original]',
    ),
  ),
  'i18n_string_allowed_formats' => array(
    'wysiwyg' => 'wysiwyg',
    'plain_text' => 'plain_text',
  ),
  'i18n_string_source_language' => 'en',
  'l10n_update_check_disabled' => 0,
  'l10n_update_check_frequency' => '0',
  'l10n_update_check_mode' => '3',
  'l10n_update_download_store' => 'sites/all/translations',
  'l10n_update_import_mode' => '1',
  'locale_language_providers_weight_language' => array(
    'locale-url' => '-8',
    'locale-session' => '-6',
    'locale-user' => '-4',
    'locale-browser' => '-2',
    'language-default' => '10',
  ),
  'locale_language_providers_weight_language_content' => array(
    'locale-url' => '-8',
    'locale-session' => '-6',
    'locale-user' => '-4',
    'locale-browser' => '-2',
    'locale-interface' => '8',
    'language-default' => '10',
  ),
  'pathauto_node_composer_en_pattern' => '',
  'pathauto_node_composer_hu_pattern' => '',
  'pathauto_node_composer_pattern' => 'composer/[node:title]',
  'pathauto_node_composer_und_pattern' => '',
  'pathauto_node_concert_en_pattern' => '',
  'pathauto_node_concert_hu_pattern' => 'koncert/[node:title]',
  'pathauto_node_concert_pattern' => 'concert/[node:title]',
  'pathauto_node_concert_und_pattern' => '',
  'pathauto_node_news_en_pattern' => '',
  'pathauto_node_news_hu_pattern' => 'hir/[node:title]',
  'pathauto_node_news_pattern' => 'news/[node:title]',
  'pathauto_node_news_und_pattern' => '',
  'pathauto_node_page_en_pattern' => '',
  'pathauto_node_page_hu_pattern' => '',
  'pathauto_node_page_pattern' => '',
  'pathauto_node_page_und_pattern' => '',
  'pathauto_node_person_en_pattern' => '',
  'pathauto_node_person_hu_pattern' => 'szemely/[node:title]',
  'pathauto_node_person_pattern' => 'person/[node:title]',
  'pathauto_node_person_und_pattern' => '',
  'pathauto_node_piece_en_pattern' => '',
  'pathauto_node_piece_hu_pattern' => 'darab/[node:title]',
  'pathauto_node_piece_pattern' => 'piece/[node:title]',
  'pathauto_node_piece_und_pattern' => '',
  'pathauto_taxonomy_term_instruments_pattern' => '',
  'pathauto_taxonomy_term_media_pattern' => '',
  'statistics_count_content_views' => 1,
  'statistics_enable_access_log' => 1,
  'statistics_flush_accesslog_timer' => '0',
  'user_admin_role' => '0',
  'user_cancel_method' => 'user_cancel_block',
  'user_email_verification' => 1,
  'user_register' => '0',
  'user_signatures' => 0,
  'install_profile' => 'mez_profile',
  'ctools_last_cron' => 1360693036,
  'statistics_day_timestamp' => 1360693007,
  'cron_last' => 1360693007,
  'javascript_parsed' => array(
    0 => 'misc/drupal.js',
    1 => 'misc/jquery.js',
    2 => 'misc/jquery.once.js',
    3 => 'sites/all/modules/contrib/panels/js/panels.js',
    4 => 'sites/all/modules/contrib/media_colorbox/media_colorbox.js',
    5 => 'sites/all/modules/contrib/devel/devel_krumo_path.js',
    6 => 'sites/all/modules/contrib/colorbox/js/colorbox.js',
    7 => 'sites/all/modules/contrib/colorbox/styles/default/colorbox_style.js',
    8 => 'sites/all/modules/contrib/admin_menu/admin_menu.js',
    9 => 'sites/all/modules/contrib/admin_menu/admin_menu_toolbar/admin_menu_toolbar.js',
    10 => 'http://zenekar.loc/sites/default/files/js/wysiwyg/wysiwyg_ckeditor_uWMoMQ7qlhtyf-cFJlMTazsAxhCeS88weKBiAtXujAQ.js',
    11 => 'sites/all/libraries/ckeditor/ckeditor.js',
    12 => 'sites/all/modules/contrib/wysiwyg/editors/js/ckeditor-3.0.js',
    13 => 'sites/all/modules/contrib/wysiwyg/wysiwyg.init.js',
    14 => 'sites/all/modules/contrib/wysiwyg/editors/js/none.js',
    15 => 'sites/all/modules/contrib/wysiwyg/wysiwyg.js',
    16 => 'sites/all/modules/contrib/features/features.js',
    17 => 'misc/tableheader.js',
    18 => 'misc/form.js',
    19 => 'misc/vertical-tabs.js',
    20 => 'sites/all/modules/contrib/ctools/js/dropbutton.js',
    21 => 'misc/progress.js',
    22 => 'misc/ajax.js',
    23 => 'misc/jquery.cookie.js',
    24 => 'misc/jquery.form.js',
    25 => 'sites/all/modules/contrib/ctools/js/auto-submit.js',
    26 => 'sites/all/modules/contrib/ctools/page_manager/js/page-list.js',
    27 => 'sites/all/modules/contrib/ctools/js/modal.js',
    28 => 'sites/all/modules/contrib/ctools/js/dependent.js',
    29 => 'sites/all/modules/contrib/ctools/js/dropdown.js',
    30 => 'sites/all/modules/contrib/panels/js/panels-base.js',
    31 => 'sites/all/modules/contrib/panels/js/display_editor.js',
    32 => 'misc/collapse.js',
    33 => 'misc/states.js',
    34 => 'misc/textarea.js',
    35 => 'sites/all/modules/contrib/panels/js/layout.js',
    36 => 'misc/machine-name.js',
    37 => 'misc/autocomplete.js',
  ),
  'site_slogan' => '',
  'default_nodes_main' => '10',
  'site_frontpage' => 'front',
  'site_403' => '',
  'site_404' => '',
  '404_fast_paths_exclude' => '/\\/(?:styles)\\//',
  '404_fast_paths' => '/\\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i',
  '404_fast_html' => '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>',
);
  $realm_variables['language']['en'] = array(
  'site_name' => 'Budapest Technical University Orchestra',
  'site_slogan' => '',
);
  $realm_variables['language']['hu'] = array(
  'site_name' => 'Műegyetemi Zenekar',
  'site_slogan' => '',
);

return $realm_variables;
}
