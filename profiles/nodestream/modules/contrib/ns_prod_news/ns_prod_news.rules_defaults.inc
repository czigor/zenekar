<?php
/**
 * @file
 * ns_prod_news.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ns_prod_news_default_rules_configuration() {
  $items = array();
  $items['rules_ns_prod_news_clear_article'] = entity_import('rules_config', '{ "rules_ns_prod_news_clear_article" : {
      "LABEL" : "Clear article cache",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : [ "node_insert", "node_delete", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "ns_article" : "ns_article",
                "ns_prod_news_promo" : "ns_prod_news_promo"
              }
            }
          }
        }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-ns-prod-news-topic" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "cache_actions_action_clear_cache_cid" : { "bin" : "cache", "cid" : "topic|[list-item:tid]", "wildcard" : 1 } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_ns_prod_news_clear_footer'] = entity_import('rules_config', '{ "rules_ns_prod_news_clear_footer" : {
      "LABEL" : "Clear footer cache",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : [ "node_insert", "node_delete", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ns_footer_content" : "ns_footer_content" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_cache_cid" : { "bin" : "cache", "cid" : "footer_content", "wildcard" : 1 } }
      ]
    }
  }');
  $items['rules_ns_prod_news_create_promo'] = entity_import('rules_config', '{ "rules_ns_prod_news_create_promo" : {
      "LABEL" : "ns_prod_news_create_promo",
      "PLUGIN" : "reaction rule",
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
              "bundle" : "ns_prod_news_promo",
              "clone" : "2",
              "couple_setting" : "0",
              "delete_setting" : "1"
            },
            "PROVIDE" : { "created_node" : { "created_node" : "Created node" } }
          }
        },
        { "node_publish" : { "node" : [ "created-node" ] } },
        { "entity_save" : { "data" : [ "created-node" ] } }
      ]
    }
  }');
  $items['rules_ns_prod_news_clear_topic'] = entity_import('rules_config',  '{ "rules_ns_prod_news_clear_topic" : {
      "LABEL" : "Clear topic cache when reordered",
        "PLUGIN" : "reaction rule",
        "REQUIRES" : [ "rules", "cache_actions", "draggableviews" ],
        "ON" : [ "draggableviews_rules_event_sorted" ],
        "IF" : [
          { "text_matches" : { "text" : [ "view-name" ], "match" : "ns_prod_news_topic" } }
        ],
        "DO" : [
          { "cache_actions_action_clear_cache_cid" : { "bin" : "cache", "cid" : "topic", "wildcard" : 1 } }
    ]
        }
  }');
  return $items;
}
