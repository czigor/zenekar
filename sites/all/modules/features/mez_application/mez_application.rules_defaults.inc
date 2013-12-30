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
  $items['rules_mez_application_submission'] = entity_import('rules_config', '{ "rules_mez_application_submission" : {
      "LABEL" : "MEZ Application submission",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules", "rules_i18n" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_email_again" } },
        { "data_is_empty" : { "data" : [ "entity:field-email-again" ] } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "pechan.rudolf@upcmail.hu, morocz.veronika@gmail.com, koteles.geza@gmail.com, czovekandras@gmail.com, outdare@citromail.hu, davidagota@gmail.com",
            "subject" : "Zenekari jelentkez\\u00e9s",
            "message" : "[entity:textexport-email]",
            "language" : [ "site:current-page:language" ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_mez_application_validation'] = entity_import('rules_config', '{ "rules_mez_application_validation" : {
      "LABEL" : "MEZ Application validation",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_validation" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "entity" : { "label" : "Entity", "type" : "entityform" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_email_again" } },
        { "NOT data_is_empty" : { "data" : [ "entity:field-email-again" ] } }
      ],
      "DO" : [ { "redirect" : { "url" : "jelentkezes" } } ]
    }
  }');
  return $items;
}
