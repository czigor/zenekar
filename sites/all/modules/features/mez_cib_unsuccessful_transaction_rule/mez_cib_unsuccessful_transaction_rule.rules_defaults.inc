<?php
/**
 * @file
 * mez_cib_unsuccessful_transaction_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mez_cib_unsuccessful_transaction_rule_default_rules_configuration() {
  $items = array();
  $items['rules_cib_unsuccessful_transaction'] = entity_import('rules_config', '{ "rules_cib_unsuccessful_transaction" : {
      "LABEL" : "CIB unsuccessful transaction",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "CIB" ],
      "REQUIRES" : [ "rules", "rules_i18n", "commerce_order", "commerce_cib" ],
      "ON" : { "commerce_cib_transaction_fails" : [] },
      "DO" : [
        { "component_rules_mez_get_last_transaction" : {
            "USING" : { "order" : [ "commerce-order" ] },
            "PROVIDE" : { "transaction" : { "transaction" : "Transaction" } }
          }
        },
        { "drupal_message" : {
            "message" : "\\u003Cp\\u003ESomething went wrong during the communication with CIB. No money has been removed from your account and the selected tickets have not been bought yet. Please try again!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThe transaction id is: [transaction:remote-id].\\u003Cbr\\/\\u003E\\r\\nThe response code is: [transaction:remote-status].\\u003Cbr\\/\\u003E\\r\\nThe response message is: [transaction:message].\\u003Cbr\\/\\u003E\\r\\nAn email has been sent to [commerce-order:mail] with the details.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EWe are sorry about your inconvenience!\\u003C\\/p\\u003E",
            "type" : "warning"
          }
        },
        { "mail" : {
            "to" : "[commerce-order:mail]",
            "subject" : "Unsuccesful order on [site:name]",
            "message" : "Dear Customer,\\r\\n\\r\\nSomething went wrong during the communication with CIB. No money has been removed from your account and the selected tickets have not been bought yet. Please try again!\\r\\n\\r\\nThe transaction id is: [transaction:remote-id].\\r\\nThe response code is: [transaction:remote-status].\\r\\nThe response message is: [transaction:message].\\r\\n\\r\\nWe are sorry about your inconvenience!\\r\\n\\r\\nThe [site:name] team",
            "language" : [ "site:current-page:language" ]
          }
        },
        { "commerce_order_update_status" : {
            "commerce_order" : [ "commerce_order" ],
            "order_status" : "checkout_checkout"
          }
        },
        { "redirect" : { "url" : "checkout" } }
      ]
    }
  }');
  return $items;
}
