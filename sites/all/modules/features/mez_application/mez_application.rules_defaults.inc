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
