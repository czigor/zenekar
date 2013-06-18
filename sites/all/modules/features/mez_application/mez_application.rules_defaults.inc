<?php
/**
 * @file
 * mez_application.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mez_application_default_rules_configuration() {
  $items = array();
  $items['rules_application_submission'] = entity_import('rules_config', '{ "rules_application_submission" : {
      "LABEL" : "Application submission",
      "PLUGIN" : "rule",
      "TAGS" : [ "entityform submission" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entityform" : { "label" : "Submitted Entityform", "type" : "entityform" },
        "entityform_type" : { "label" : "Entityform Type", "type" : "entityform_type" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email_again" } },
        { "data_is_empty" : { "data" : [ "entityform:field-email-again" ] } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "pechan.rudolf@upcmail.hu, morocz.veronika@gmail.com, koteles.geza@gmail.com, czovekandras@gmail.com, outdare@citromail.hu",
            "subject" : "Zenekari jelentkez\\u00e9s",
            "message" : "[entityform:entityform-submittd-data]",
            "language" : [ "entityform-type:type" ]
          }
        }
      ]
    }
  }');
  $items['rules_application_validation'] = entity_import('rules_config', '{ "rules_application_validation" : {
      "LABEL" : "Application validation",
      "PLUGIN" : "rule",
      "TAGS" : [ "entityform validation" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entityform" : { "label" : "Submitted Entityform", "type" : "entityform" },
        "entityform_type" : { "label" : "Entityform Type", "type" : "entityform_type" },
        "validate_form" : { "label" : "Form Validates", "type" : "boolean", "parameter" : false }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email_again" } },
        { "NOT data_is_empty" : { "data" : [ "entityform:field-email-again" ] } }
      ],
      "DO" : [ { "redirect" : { "url" : "jelentkezes" } } ],
      "PROVIDES VARIABLES" : [ "validate_form" ]
    }
  }');
  return $items;
}
