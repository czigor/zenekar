<?php
/**
 * @file
 * mez_cib_timeout_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mez_cib_timeout_rule_default_rules_configuration() {
  $items = array();
  $items['rules_cib_timeout'] = entity_import('rules_config', '{ "rules_cib_timeout" : {
      "LABEL" : "CIB timeout",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules_i18n", "rules", "commerce_cib" ],
      "ON" : { "commerce_cib_timeout" : [] },
      "DO" : [
        { "mail" : {
            "to" : [ "commerce-order:mail" ],
            "subject" : "[site:name] transaction timeout",
            "message" : "Dear Customer,\\r\\nYou are receiving this email because your email address ([commerce-order:mail])  was given in an order at [site:url] with transaction ID [commerce-order:trid].\\r\\n\\r\\nWe apologize but your transaction did not get through. The error was the following:\\r\\n[commerce-order:commerce-cib-rt]\\r\\n\\r\\nImportant\\r\\nIf your card is processed during the transaction, the payment processor is automatically reversing your transaction within 10 minutes.\\r\\n\\r\\nThe products are kept in your shopping cart at [site:name]. \\r\\n\\r\\nThe transaction id is [commerce-order:commerce-cib-trid].\\r\\nThe response code is [commerce-order:commerce-cib-rc] .\\r\\nThe permission number is [commerce-order:commerce-cib-anum].\\r\\nThe paid amount is [commerce-order:commerce-cib-amo] HUF.\\r\\n\\r\\nWe apologize for the inconvenience.\\r\\n\\r\\n-- [site:name]  team",
            "language" : [ "site:current-page:language" ]
          }
        }
      ]
    }
  }');
  return $items;
}
