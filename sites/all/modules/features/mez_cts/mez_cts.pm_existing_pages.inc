<?php
/**
 * @file
 * mez_cts.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function mez_cts_pm_existing_pages_info() {
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
file/add
file/%file';
  $export['existing_page'] = $pm_existing_page;

  return $export;
}
