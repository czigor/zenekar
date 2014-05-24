<?php
/**
 * @file
 * iq_bugreport.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iq_bugreport_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function iq_bugreport_default_entityform_type() {
  $items = array();
  $items['bugreport'] = entity_import('entityform_type', '{
    "type" : "bugreport",
    "label" : "Bug report",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "ckeditor" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EYour submission has been saved. IssueQ developers will inform you about the results.\\u003C\\/p\\u003E\\r\\n",
        "format" : "ckeditor"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "3" : "3", "1" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "ckeditor" }
    },
    "weight" : "0",
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/bugreport",
        "alias" : "bugreport",
        "language" : "und"
      }
    }
  }');
  return $items;
}
