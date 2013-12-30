<?php
/**
 * @file
 * mez_application.features.inc
 */

/**
 * Implements hook_default_entity_rule_setting().
 */
function mez_application_default_entity_rule_setting() {
  $items = array();
  $items['1'] = entity_import('entity_rule_setting', '{
    "id" : "1",
    "entity_type" : "entityform",
    "bundle" : "application",
    "op" : "validation",
    "rules_config" : "rules_mez_application_validation",
    "weight" : "0",
    "args" : null,
    "false_msg" : null
  }');
  $items['2'] = entity_import('entity_rule_setting', '{
    "id" : "2",
    "entity_type" : "entityform",
    "bundle" : "application",
    "op" : "entityform_submission",
    "rules_config" : "rules_mez_application_submission",
    "weight" : "0",
    "args" : null,
    "false_msg" : null
  }');
  return $items;
}

/**
 * Implements hook_default_entityform_type().
 */
function mez_application_default_entityform_type() {
  $items = array();
  $items['application'] = entity_import('entityform_type', '{
    "type" : "application",
    "label" : "Jelentkez\\u00e9s",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "wysiwyg" },
      "submit_button_text" : "Elk\\u00fcld",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Thank you for submitting the application!",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EWe will get back to you shortly.\\u003C\\/p\\u003E",
        "format" : "wysiwyg"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : 0, "4" : 0, "5" : 0 },
      "resubmit_action" : "old",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u00d6r\\u00f6mmel k\\u00f6sz\\u00f6nt\\u00fcnk a Jelentkez\\u00e9s oldalon!\\r\\n\\r\\nMiel\\u0151tt kit\\u00f6lten\\u00e9d \\u00e9s elk\\u00fclden\\u00e9d jelentkez\\u00e9sedet, gondold \\u00e1t, tudod-e v\\u00e1llalni a komoly munk\\u00e1t!\\r\\nZenekarunk a tanulm\\u00e1nyi id\\u0151szakban heti 2 alkalommal, h\\u00e9tf\\u0151n \\u00e9s p\\u00e9nteken este 18:15 \\u00e9s 21:30 k\\u00f6z\\u00f6tt tartja pr\\u00f3b\\u00e1it. A pr\\u00f3b\\u00e1kr\\u00f3l csak el\\u0151zetes \\u00e9rtes\\u00edt\\u00e9s mellet, indokolt esetben lehet hi\\u00e1nyozni! \\r\\n\\r\\nA zenekar l\\u00e9tsz\\u00e1ma korl\\u00e1tozott, a felv\\u00e9tel nem automatikus, de minden jelentkez\\u0151vel sz\\u00edvesen megismerked\\u00fcnk, s ha nem tudjuk foglalkoztatni - b\\u00e1r megfelelne -, v\\u00e1r\\u00f3list\\u00e1ra tessz\\u00fck. Sz\\u00fcks\\u00e9g eset\\u00e9n meghallgat\\u00e1st szervez\\u00fcnk, vagy csak pr\\u00f3baid\\u0151re be\\u00fcltet\\u00fcnk a zenekarba. Az is el\\u0151fordulhat, hogy hangszeres tud\\u00e1sod nem elegend\\u0151, de ha van kedved a zenekar k\\u00f6r\\u00fcl  sertepert\\u00e9lni, adunk feladatot!\\r\\n\\r\\nJelentkezz b\\u00e1tran!\\r\\n",
        "format" : "plain_text"
      }
    },
    "weight" : "0",
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/application",
        "alias" : "jelentkezes",
        "language" : "und"
      }
    }
  }');
  return $items;
}
