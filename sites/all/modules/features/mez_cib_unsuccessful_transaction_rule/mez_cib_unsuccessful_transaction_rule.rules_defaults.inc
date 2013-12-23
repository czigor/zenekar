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
      "REQUIRES" : [ "rules_i18n", "rules", "commerce_order", "commerce_cib" ],
      "ON" : { "commerce_cib_transaction_fails" : [] },
      "DO" : [
        { "drupal_message" : { "message" : "Something went wrong during the communication with CIB. No money has been removed from your account and the selected tickets have not been bought yet. Please try again!\\r\\n\\r\\nThe transaction id is: [commerce-order:commerce-cib-trid].\\r\\nThe response code is: [commerce-order:commerce-cib-rc] .\\r\\nThe response message is: [commerce-order:commerce-cib-rt].\\r\\nAn email has been sent to [commerce-order:mail] with the details.\\r\\n\\r\\nWe are sorry about your inconvenience!" } },
        { "mail" : {
            "to" : "[commerce-order:mail]",
            "subject" : "Unsuccesful order on [site:name]",
            "message" : "Dear Customer,\\r\\n\\r\\nSomething went wrong during the communication with CIB. No money has been removed from your account and the selected tickets have not been bought yet. Please try again!\\r\\n\\r\\nThe transaction id is: [commerce-order:commerce-cib-trid].\\r\\nThe response code is: [commerce-order:commerce-cib-rc] .\\r\\nThe response message is: [commerce-order:commerce-cib-rt].\\r\\nAn email has been sent to [commerce-order:mail] with the details.\\r\\n\\r\\nWe are sorry about your inconvenience!\\r\\n\\r\\nThe [site:name] team",
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
