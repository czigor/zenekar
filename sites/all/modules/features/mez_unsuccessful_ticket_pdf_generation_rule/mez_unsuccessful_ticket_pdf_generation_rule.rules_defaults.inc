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
      "REQUIRES" : [ "rules_i18n", "rules", "commerce_order", "mez_ticket_hacks" ],
      "ON" : { "mez_ticket_pdfs_failure" : [] },
      "DO" : [
        { "drupal_message" : { "message" : "An error occured during the generation of the concert ticket you purchased at [site:url]. A site admin will contact you shortly to send you the ticket manually. \\r\\n\\r\\nSorry for the inconvenience.\\r\\n\\r\\nThe transaction id is [commerce-order:commerce-cib-trid].\\r\\nThe response code is [commerce-order:commerce-cib-rc] .\\r\\nThe response message is [commerce-order:commerce-cib-rt].\\r\\nThe permission number is [commerce-order:commerce-cib-anum].\\r\\nThe paid amount is [commerce-order:commerce-cib-amo] HUF." } },
        { "mail" : {
            "to" : [ "commerce-order:mail" ],
            "subject" : "[site:name] ticket generation failure",
            "message" : "Dear Customer,\\r\\n\\r\\nAn error occured during the generation of the concert ticket you purchased at [site:url]. A site admin will contact you shortly to send you the ticket(s) manually. \\r\\n\\r\\nSorry for the inconvenience.\\r\\n\\r\\nThe transaction id is [commerce-order:commerce-cib-trid].\\r\\nThe response code is [commerce-order:commerce-cib-rc] .\\r\\nThe response message is [commerce-order:commerce-cib-rt].\\r\\nThe permission number is [commerce-order:commerce-cib-anum].\\r\\nThe paid amount is [commerce-order:commerce-cib-amo] HUF.\\r\\n\\r\\nBest wishes,\\r\\n-- the [site:name] team",
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
