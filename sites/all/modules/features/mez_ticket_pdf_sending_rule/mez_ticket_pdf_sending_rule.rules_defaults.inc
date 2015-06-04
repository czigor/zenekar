<?php
/**
 * @file
 * mez_ticket_pdf_sending_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mez_ticket_pdf_sending_rule_default_rules_configuration() {
  $items = array();
  $items['rules_mez_ticket_pdf_sending'] = entity_import('rules_config', '{ "rules_mez_ticket_pdf_sending" : {
      "LABEL" : "MEZ ticket pdf sending",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "MEZ" ],
      "REQUIRES" : [
        "rules",
        "rules_i18n",
        "mimemail",
        "commerce_order",
        "mez_ticket_hacks"
      ],
      "ON" : { "mez_ticket_pdfs_generated" : [] },
      "IF" : [
        { "entity_has_field" : {
            "entity" : [ "commerce-order:commerce-line-items:0" ],
            "field" : "commerce_product"
          }
        },
        { "entity_has_field" : {
            "entity" : [ "commerce-order:commerce-line-items:0:commerce-product" ],
            "field" : "field_concert"
          }
        }
      ],
      "DO" : [
        { "component_rules_mez_get_last_transaction" : {
            "USING" : { "order" : [ "commerce-order" ] },
            "PROVIDE" : { "transaction" : { "transaction" : "Transaction" } }
          }
        },
        { "drupal_message" : { "message" : "\\u003Ch3\\u003EThank you for your purchase!\\u003C\\/h3\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThe transaction was successful.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EAn email has been sent to [commerce-order:mail] with the details and the tickets. Please print the tickets and bring them to the concert!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you have any questions or complains please contact us at [site:url]\\/contact.\\u003C\\/p\\u003E\\r\\n\\r\\n[commerce-order:summary]\\r\\n\\r\\n\\u003Cp\\u003EThe transaction id is [transaction:remote-id].\\u003Cbr\\/\\u003E\\r\\nThe response code is [transaction:remote-status].\\u003Cbr\\/\\u003E\\r\\nThe response message is: \\u0022[transaction:message]\\u0022.\\u003Cbr\\/\\u003E\\r\\nThe permission number is [transaction:commerce-cib-anum].\\u003Cbr\\/\\u003E\\r\\nThe paid amount is [transaction:amount] HUF.\\u003C\\/p\\u003E" } },
        { "mimemail" : {
            "key" : [ "commerce-order:order-id" ],
            "to" : [ "commerce-order:mail" ],
            "from_name" : "[site:name]",
            "from_mail" : "[site:mail]",
            "subject" : "MEZ concert tickets",
            "body" : "Dear Customer, \\r\\n\\r\\nYour ticket purchase at [site:name] has been successful. Attached to this mail you can find the tickets. Please print the tickets and bring them to the concert!\\r\\n\\r\\nIf you have any questions or complains, please contact us at [site:url]\\/contact.\\r\\n\\r\\n[commerce-order:summary]\\r\\n\\r\\nThe transaction id is [transaction:remote-id].\\r\\nThe response code is [transaction:remote-status] .\\r\\nThe response message is [transaction:message].\\r\\nThe permission number is [transaction:commerce-cib-anum].\\r\\nThe paid amount is [transaction:amount] HUF.\\r\\n\\r\\nThank you for your purchase!\\r\\n[site:name] team.",
            "plaintext" : [ "" ],
            "attachments" : "private:\\/\\/mez-tickets\\/[commerce-order:commerce-cib-env]\\/[commerce-order:commerce-line-items:0:commerce-product:field-concert:nid]\\/mez_concert_tickets_[commerce-order:order-id].pdf",
            "language" : [ "site:current-page:language" ]
          }
        },
        { "commerce_order_update_status" : { "commerce_order" : [ "commerce_order" ], "order_status" : "completed" } },
        { "redirect" : { "url" : "node\\/[commerce-order:commerce-line-items:0:commerce-product:field-concert:nid]" } }
      ]
    }
  }');
  return $items;
}
