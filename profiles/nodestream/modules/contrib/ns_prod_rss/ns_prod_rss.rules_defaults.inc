<?php
/**
 * @file
 * ns_prod_rss.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ns_prod_rss_default_rules_configuration() {
  $items = array();
  $items['rules_ns_prod_rss_create_promo'] = entity_import('rules_config', '{ "rules_ns_prod_rss_create_promo" : {
      "LABEL" : "ns_prod_rss_create_promo",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "REQUIRES" : [ "rules", "crossclone" ],
      "ON" : [ "crossclone_node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ns_article" : "ns_article" } }
          }
        }
      ],
      "DO" : [
        { "crossclone_node_action" : {
            "USING" : {
              "original_node" : [ "node" ],
              "bundle" : "ns_prod_rss_promo",
              "clone" : "2",
              "couple_setting" : "0",
              "delete_setting" : "1"
            },
            "PROVIDE" : { "created_node" : { "created_rss_node" : "Created rss node" } }
          }
        },
        { "node_publish" : { "node" : [ "created-rss-node" ] } },
        { "entity_save" : { "data" : [ "created-rss-node" ] } }
      ]
    }
  }');
  return $items;
}
