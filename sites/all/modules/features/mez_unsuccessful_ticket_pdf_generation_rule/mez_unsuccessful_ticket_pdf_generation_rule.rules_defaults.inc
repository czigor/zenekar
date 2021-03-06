<?php
/**
 * @file
 * mez_unsuccessful_ticket_pdf_generation_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mez_unsuccessful_ticket_pdf_generation_rule_default_rules_configuration() {
  $items = array();
  $items['rules_mez_unsuccessful_ticket_pdf_generation'] = entity_import('rules_config', '{ "rules_mez_unsuccessful_ticket_pdf_generation" : {
      "LABEL" : "MEZ unsuccessful ticket pdf generation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "MEZ" ],
      "REQUIRES" : [ "rules", "rules_i18n", "commerce_order", "mez_ticket_hacks" ],
      "ON" : { "mez_ticket_pdfs_failure" : [] },
      "DO" : [
        { "component_rules_mez_get_last_transaction" : {
            "USING" : { "order" : [ "commerce-order" ] },
            "PROVIDE" : { "transaction" : { "transaction" : "Transaction" } }
          }
        },
        { "drupal_message" : {
            "message" : "\\u003Cp\\u003EAn error occured during the generation of the concert ticket you purchased at [site:url]. A site admin will contact you shortly to send you the ticket manually.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ESorry for the inconvenience.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThe transaction id is [transaction:remote-id].\\u003Cbr\\/\\u003E\\r\\nThe response code is [transaction:remote-status].\\u003Cbr\\/\\u003E\\r\\nThe response message is: \\u0022[transaction:message]\\u0022.\\u003Cbr\\/\\u003E\\r\\nThe permission number is [transaction:commerce-cib-anum].\\u003Cbr\\/\\u003E\\r\\nThe paid amount is [transaction:amount] HUF.\\u003C\\/p\\u003E",
            "type" : "warning"
          }
        },
        { "mail" : {
            "to" : [ "site:mail" ],
            "subject" : "Unsuccessful ticket pdf generation",
            "message" : "The ticket generation for order [commerce-order:order-id] was unsuccessful.",
            "language" : [ "commerce-order:state" ]
          }
        },
        { "mail" : {
            "to" : [ "commerce-order:mail" ],
            "subject" : "[site:name] ticket generation failure",
            "message" : "Dear Customer,\\r\\n\\r\\nAn error occured during the generation of the concert ticket you purchased at [site:url]. A site admin will contact you shortly to send you the ticket(s) manually. \\r\\n\\r\\nSorry for the inconvenience.\\r\\n\\r\\nThe transaction id is [transaction:remote-id].\\r\\nThe response code is [transaction:remote-status] .\\r\\nThe response message is [transaction:message].\\r\\nThe permission number is [transaction:commerce-cib-anum].\\r\\nThe paid amount is [transaction:amount] HUF.\\r\\n\\r\\nBest wishes,\\r\\n-- the [site:name] team",
            "language" : [ "site:current-page:language" ]
          }
        },
        { "commerce_order_update_state" : { "commerce_order" : [ "commerce_order" ], "order_state" : "pending" } },
        { "redirect" : { "url" : "\\/" } }
      ]
    }
  }');
  return $items;
}
