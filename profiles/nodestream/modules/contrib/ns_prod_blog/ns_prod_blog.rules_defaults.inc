<?php
/**
 * @file
 * ns_prod_blog.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ns_prod_blog_default_rules_configuration() {
  $items = array();
  $items['rules_ns_prod_blog_clear_blog'] = entity_import('rules_config', '{ "rules_ns_prod_blog_clear_blog" : {
      "LABEL" : "Clear blog cache",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : [ "node_insert", "node_delete", "node_update" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "ns_blog" : "ns_blog" } } } }
      ],
      "DO" : [
        { "cache_actions_action_clear_cache_cid" : { "bin" : "cache", "cid" : "blog_page_blogs", "wildcard" : 1 } }
      ]
    }
  }');
  $items['rules_ns_prod_blog_clear_blog_post'] = entity_import('rules_config', '{ "rules_ns_prod_blog_clear_blog_post" : {
      "LABEL" : "ns_prod_blog_clear_blog_post",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : [ "node_insert", "node_delete", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ns_blog_post" : "ns_blog_post" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_cache_cid" : {
            "bin" : "cache",
            "cid" : "blog|[node:field-ns-blog-post-blog:nid]",
            "wildcard" : 1
          }
        },
        { "cache_actions_action_clear_cache_cid" : { "bin" : "cache", "cid" : "blog_page_blog_posts", "wildcard" : 1 } }
      ]
    }
  }');
  return $items;
}
