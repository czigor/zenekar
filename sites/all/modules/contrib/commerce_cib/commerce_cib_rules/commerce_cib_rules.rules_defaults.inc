<?php
/**
 * @file
 * commerce_cib_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerce_cib_rules_default_rules_configuration() {
  $items = array();
  $items['rules_cib_bank'] = entity_import('rules_config', '{ "rules_cib_bank" : {
      "LABEL" : "CIB bank",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_cib" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "cib",
                "settings" : {
                  "pid" : "XXX0001",
                  "cur" : "HUF",
                  "env" : "testing",
                  "des-test" : "\\/this\\/is\\/the\\/test\\/des\\/file.des",
                  "des-live" : "\\/this\\/is\\/the\\/live\\/des\\/file.des"
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['rules_cib_bank_transaction_communication_failure'] = entity_import('rules_config', '{ "rules_cib_bank_transaction_communication_failure" : {
      "LABEL" : "CIB bank transaction communication failure",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "CIB" ],
      "REQUIRES" : [ "rules_i18n", "rules", "commerce_order", "commerce_cib" ],
      "ON" : { "commerce_cib_no_communication" : [] },
      "DO" : [
        { "drupal_message" : { "message" : "Sorry, we could not communicate with CIB. Please try again later!\\r\\n\\u003Ca href=\\u0022\\/checkout\\u0022\\u003EGo back to the checkout page\\u003C\\/a\\u003E" } },
        { "commerce_order_update_state" : { "commerce_order" : [ "commerce_order" ], "order_state" : "checkout" } }
      ]
    }
  }');
  $items['rules_cib_succesful_transaction'] = entity_import('rules_config', '{ "rules_cib_succesful_transaction" : {
      "LABEL" : "CIB succesful transaction",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "CIB" ],
      "REQUIRES" : [ "rules", "rules_i18n", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "drupal_message" : { "message" : "The transaction id is: [commerce-order:commerce-cib-trid].\\r\\nThe response code is: [commerce-order:commerce-cib-rc] .\\r\\nThe response message is: [commerce-order:commerce-cib-rt].\\r\\nAn email has been sent to [commerce-order:mail] with the details.\\r\\n\\r\\nThe permission number is: [commerce-order:commerce-cib-anum].\\r\\nThe paid amount is: [commerce-order:commerce-cib-amo] HUF." } },
        { "mail" : {
            "to" : [ "commerce-order:mail" ],
            "subject" : "Order on [site:name]",
            "message" : "Dear Customer, \\r\\n\\r\\nThe transaction id is: [commerce-order:commerce-cib-trid].\\r\\nThe response code is: [commerce-order:commerce-cib-rc] .\\r\\nThe response message is: [commerce-order:commerce-cib-rt].\\r\\n\\r\\nThe permission number is: [commerce-order:commerce-cib-anum].\\r\\nThe paid amount is: [commerce-order:commerce-cib-amo] HUF.\\r\\n\\r\\nThank you for your purchase!\\r\\n[site:name] team.",
            "language" : [ "site:current-user:language" ]
          }
        },
        { "redirect" : { "url" : "[site:url]" } }
      ]
    }
  }');
  $items['rules_cib_transaction_initialization_failure'] = entity_import('rules_config', '{ "rules_cib_transaction_initialization_failure" : {
      "LABEL" : "CIB transaction initialization failure",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "CIB" ],
      "REQUIRES" : [ "rules_i18n", "rules", "commerce_cib" ],
      "ON" : { "commerce_cib_initialization_fails" : [] },
      "DO" : [
        { "drupal_message" : { "message" : "Transaction initialization failed.", "type" : "warning" } },
        { "redirect" : { "url" : "checkout" } }
      ]
    }
  }');
  $items['rules_cib_unsuccesful_transaction'] = entity_import('rules_config', '{ "rules_cib_unsuccesful_transaction" : {
      "LABEL" : "CIB unsuccesful transaction",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "CIB" ],
      "REQUIRES" : [ "rules", "commerce_order", "commerce_cib" ],
      "ON" : { "commerce_cib_transaction_fails" : [] },
      "DO" : [
        { "drupal_message" : { "message" : "The transaction id is: [commerce-order:commerce-cib-trid].\\r\\nThe response code is: [commerce-order:commerce-cib-rc] .\\r\\nThe response message is: [commerce-order:commerce-cib-rt].\\r\\nAn email has been sent to [commerce-order:mail] with the details.\\r\\n\\r\\nSomething went wrong. Please try again!" } },
        { "mail" : {
            "to" : "[commerce-order:mail]",
            "subject" : "Unsuccesful order on [site:name]",
            "message" : "Dear Customer, \\r\\n\\r\\nThe transaction id is: [commerce-order:commerce-cib-trid].\\r\\nThe response code is: [commerce-order:commerce-cib-rc] .\\r\\nThe response message is: [commerce-order:commerce-cib-rt].\\r\\n\\r\\nSomething went wrong with the order. Please try again!\\r\\n\\r\\n[site:name] team.",
            "language" : [ "" ]
          }
        },
        { "commerce_order_update_status" : {
            "commerce_order" : [ "commerce_order" ],
            "order_status" : "checkout_checkout"
          }
        },
        { "redirect" : { "url" : "[site:url]" } }
      ]
    }
  }');
  return $items;
}
