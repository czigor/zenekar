<?php
/**
 * @file
 * mez_get_last_transaction_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mez_get_last_transaction_rule_default_rules_configuration() {
  $items = array();
  $items['rules_mez_get_last_transaction'] = entity_import('rules_config', '{ "rules_mez_get_last_transaction" : {
      "LABEL" : "MEZ get last transaction",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "order" : { "label" : "Order", "type" : "commerce_order" },
        "transaction" : {
          "label" : "Transaction",
          "type" : "commerce_payment_transaction",
          "parameter" : false
        }
      },
      "ACTION SET" : [
        { "entity_query" : {
            "USING" : {
              "type" : "commerce_payment_transaction",
              "property" : "order_id",
              "value" : [ "order:order-id" ]
            },
            "PROVIDE" : { "entity_fetched" : { "transactions" : "Transactions" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "transactions" ] },
            "ITEM" : { "list_item" : "Aktu\\u00e1lis listaelem" },
            "DO" : [
              { "data_set" : { "data" : [ "transaction" ], "value" : [ "list-item" ] } }
            ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "transaction" ]
    }
  }');
  return $items;
}
