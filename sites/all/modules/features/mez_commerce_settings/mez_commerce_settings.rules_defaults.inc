<?php
/**
 * @file
 * mez_commerce_settings.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mez_commerce_settings_default_rules_configuration() {
  $items = array();
  $items['rules_cib_bank'] = entity_import('rules_config', '{ "rules_cib_bank" : {
      "LABEL" : "CIB bank",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_cib" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "cib",
                "settings" : {
                  "pid" : "MEZ0001",
                  "cur" : "HUF",
                  "env" : "testing",
                  "des" : "\\/var\\/www\\/html\\/web1\\/zenekar\\/zenekar-des\\/MEZ.des"
                }
              }
            }
          }
        }
      ]
    }
  }');
  return $items;
}
