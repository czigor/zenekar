<?php
/**
 * @file
 * iq_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iq_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iq_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function iq_search_default_search_api_index() {
  $items = array();
  $items['commentindex'] = entity_import('search_api_index', '{
    "name" : "CommentIndex",
    "machine_name" : "commentindex",
    "description" : null,
    "server" : "mysql",
    "item_type" : "comment",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "200",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "author:uid" : { "type" : "integer" },
        "field_issue_comment_body:value" : { "type" : "text" },
        "node:og_group_ref" : { "type" : "integer", "entity_type" : "node" },
        "node:type" : { "type" : "string" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_comment_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : { "status" : 0, "weight" : "15", "settings" : { "fields" : [] } },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  $items['contentindex'] = entity_import('search_api_index', '{
    "name" : "ContentIndex",
    "machine_name" : "contentindex",
    "description" : null,
    "server" : "mysql",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "200",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_documentation_body:value" : { "type" : "text" },
        "field_issue_description:value" : { "type" : "text" },
        "field_news_body:value" : { "type" : "text" },
        "field_project_body:value" : { "type" : "text" },
        "og_group_ref" : { "type" : "integer", "entity_type" : "node" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_project_body:value" : true,
              "field_issue_description:value" : true,
              "field_documentation_body:value" : true,
              "field_news_body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_project_body:value" : true,
              "field_issue_description:value" : true,
              "field_documentation_body:value" : true,
              "field_news_body:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "field_project_body:value" : true,
              "field_issue_description:value" : true,
              "field_documentation_body:value" : true,
              "field_news_body:value" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_project_body:value" : true,
              "field_issue_description:value" : true,
              "field_documentation_body:value" : true,
              "field_news_body:value" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_project_body:value" : true,
              "field_issue_description:value" : true,
              "field_documentation_body:value" : true,
              "field_news_body:value" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function iq_search_default_search_api_server() {
  $items = array();
  $items['mysql'] = entity_import('search_api_server', '{
    "name" : "MySQL",
    "machine_name" : "mysql",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : {
        "commentindex" : {
          "status" : {
            "table" : "search_api_db_commentindex",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_commentindex_search_api_access_node",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_commentindex",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "author:uid" : {
            "table" : "search_api_db_commentindex",
            "column" : "author_uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "node:type" : {
            "table" : "search_api_db_commentindex",
            "column" : "node_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "node:og_group_ref" : {
            "table" : "search_api_db_commentindex",
            "column" : "node_og_group_ref",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_issue_comment_body:value" : {
            "table" : "search_api_db_commentindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_commentindex",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          }
        },
        "contentindex" : {
          "type" : {
            "table" : "search_api_db_contentindex",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_contentindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_contentindex",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_contentindex",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "og_group_ref" : {
            "table" : "search_api_db_contentindex",
            "column" : "og_group_ref",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_contentindex",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_project_body:value" : {
            "table" : "search_api_db_contentindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_news_body:value" : {
            "table" : "search_api_db_contentindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_documentation_body:value" : {
            "table" : "search_api_db_contentindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_issue_description:value" : {
            "table" : "search_api_db_contentindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_contentindex_search_api_access_node",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
