<?php
/**
 * @file
 * mez_existing_pages.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function mez_existing_pages_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'existing_page';
  $pm_existing_page->label = 'Existing page';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'admin/content
admin/content/comment
admin/content/comment/approval
admin/content/comment/new
admin/content/file
admin/content/file/edit-multiple/%media_multi
admin/content/file/import
admin/content/file/list
admin/content/file/thumbnails
admin/content/file/thumbnails/import
file/%file
file/add/web
file/add/upload
file/add
admin/structure/features
admin/appearance
admin/appearance/default
admin/appearance/disable
admin/appearance/enable
admin/appearance/install
admin/appearance/list
admin/appearance/settings
admin/appearance/settings/bartik
admin/appearance/settings/garland
admin/appearance/settings/global
admin/structure/features/create
admin/structure/field-collections
admin/structure/features/manage
admin/structure/features/cleanup
admin/structure/pages
admin/structure/pages/%ctools_js/disable/%page_manager_cache
admin/structure/pages/%ctools_js/enable/%page_manager_cache
admin/structure/pages/%ctools_js/operation/%page_manager_cache
admin/structure/pages/add
admin/structure/pages/add-existing
admin/structure/pages/argument
admin/structure/pages/edit/%page_manager_cache
admin/structure/pages/existing-pages
admin/structure/pages/existing-pages/add
admin/structure/features/%feature
admin/structure/features/%feature/diff
admin/structure/features/%feature/status
admin/structure/features/%feature/recreate
admin/structure/features/%feature/view
admin/structure/pages/existing-pages/list/%ctools_export_ui
admin/structure/pages/existing-pages/list/%ctools_export_ui/clone
admin/structure/pages/existing-pages/list/%ctools_export_ui/delete
admin/structure/pages/existing-pages/list/%ctools_export_ui/disable
admin/structure/pages/existing-pages/list/%ctools_export_ui/edit
admin/structure/pages/existing-pages/list/%ctools_export_ui/enable
admin/structure/pages/existing-pages/list/%ctools_export_ui/export
admin/structure/pages/existing-pages/list/%ctools_export_ui/revert
admin/structure/file-types
admin/structure/file-types/manage/%file_type
admin/structure/file-types/manage/%file_type/edit
admin/structure/file-types/manage/%file_type/fields
admin/structure/file-types/manage/%file_type/fields/%field_ui_menu
admin/structure/file-types/manage/%file_type/fields/%field_ui_menu/delete
admin/structure/file-types/manage/%file_type/fields/%field_ui_menu/edit
admin/structure/file-types/manage/%file_type/fields/%field_ui_menu/translate
admin/structure/file-types/manage/%file_type/fields/%field_ui_menu/field-settings
admin/structure/file-types/manage/%file_type/fields/%field_ui_menu/translate/%i18n_language
admin/structure/file-types/manage/%file_type/fields/%field_ui_menu/widget-type
file/%file/delete
file/%file/devel
file/%file/devel/load
file/%file/devel/render
file/%file/devel/token
file/%file/edit
admin/structure/ds/view_modes
admin/structure/ds/view_modes/manage
admin/structure/ds/view_modes/revert
admin/structure/ds/view_modes/delete
admin/structure/ds
admin/structure/ds/%ctools_js/add_field/%
admin/structure/ds/classes
admin/structure/ds/fields
admin/structure/ds/fields/delete
admin/structure/ds/fields/manage
admin/structure/ds/fields/manage_block
admin/structure/ds/fields/manage_ctools
admin/structure/ds/fields/manage_ctools/content
devel/php
devel/phpinfo
videos
admin/structure/taxonomy
admin/structure/taxonomy/%taxonomy_vocabulary_machine_name
admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/add
admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/display
admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/display/default
admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/display/diff_standard
admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/display/full
admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/display/token
admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/edit
admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/fields';
  $export['existing_page'] = $pm_existing_page;

  return $export;
}
