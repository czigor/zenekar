<?php
/**
 * @file
 * mez_cib_successful_transaction_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mez_cib_successful_transaction_rule_default_rules_configuration() {
  $items = array();
  $items['rules_cib_successful_transaction'] = entity_import('rules_config', '{ "rules_cib_successful_transaction" : {
      "LABEL" : "CIB successful transaction",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "CIB" ],
      "REQUIRES" : [ "rules", "mez_ticket_hacks", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "IF" : [
        { "entity_has_field" : {
            "entity" : [ "commerce-order:commerce-line-items:0" ],
            "field" : "commerce_product"
          }
        }
      ],
      "DO" : [
        { "mez_create_ticket_pdf" : { "commerce_order" : [ "commerce_order" ] } }
      ]
    }
  }');
  return $items;
}
