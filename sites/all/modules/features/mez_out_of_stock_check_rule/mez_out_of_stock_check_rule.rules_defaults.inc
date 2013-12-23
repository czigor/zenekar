<?php
/**
 * @file
 * mez_out_of_stock_check_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mez_out_of_stock_check_rule_default_rules_configuration() {
  $items = array();
  $items['rules_out_of_stock_check'] = entity_import('rules_config', '{ "rules_out_of_stock_check" : {
      "LABEL" : "Out of stock check",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "MEZ" ],
      "REQUIRES" : [ "mez_ticket_hacks", "commerce_cib" ],
      "ON" : { "commerce_cib_pre_redirect" : [] },
      "DO" : [
        { "mez_ticket_out_of_stock_check" : { "commerce_order" : [ "commerce_order" ] } }
      ]
    }
  }');
  return $items;
}
