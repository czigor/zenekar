<?php
/**
 * @file
 * iq_kanban_board.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iq_kanban_board_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
