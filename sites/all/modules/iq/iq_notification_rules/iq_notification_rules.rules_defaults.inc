<?php
/**
 * @file
 * iq_notification_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function iq_notification_rules_default_rules_configuration() {
  $items = array();
  $items['iq_notification_rules_iq_documentation_saved'] = entity_import('rules_config', '{ "iq_notification_rules_iq_documentation_saved" : {
      "LABEL" : "Documentation saved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag", "rules_conditional", "og" ],
      "ON" : {
        "node_insert--documentation" : { "bundle" : "documentation" },
        "node_update--documentation" : { "bundle" : "documentation" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_documentation_body" } }
      ],
      "DO" : [
        { "flag_fetch_users_node" : {
            "USING" : { "flag" : "subscription_to_node", "node" : [ "node" ] },
            "PROVIDE" : { "users" : { "final_users" : "Users who flagged" } }
          }
        },
        { "flag_fetch_users_node" : {
            "USING" : { "flag" : "subscription_to_node", "node" : [ "node:og-group-ref" ] },
            "PROVIDE" : { "users" : { "users3" : "Users who flagged" } }
          }
        },
        { "flag_fetch_user_by_user" : {
            "USING" : {
              "flag" : "subscription_to_everything",
              "flagging_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "content_flagged_by_user" : { "users4" : "Users subscribed to everything" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "users3" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "list_add" : { "list" : [ "final-users" ], "item" : [ "list-item" ], "unique" : 1 } }
            ]
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "users4" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "list_add" : { "list" : [ "final-users" ], "item" : [ "list-item" ], "unique" : 1 } }
            ]
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "final-users" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "og_user_in_group" : {
                        "account" : [ "list-item" ],
                        "group" : [ "node:og-group-ref" ],
                        "states" : { "value" : { "1" : "1" } }
                      }
                    },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "NOT user_is_blocked" : { "account" : [ "list-item" ] } },
                            "DO" : [
                              { "mail" : {
                                  "to" : [ "list-item:mail" ],
                                  "subject" : "[[node:og-group-ref:title]] Update for Documentation: [node:title] #[node:nid]",
                                  "message" : "Greetings [list-item:name], here are some details:\\r\\n\\r\\n[node:field-documentation-body:value]\\r\\n\\r\\nAuthor: [node:author:name]\\r\\n\\r\\n--\\r\\nRead on or unsubscribe at: [node:url]",
                                  "from" : [ "" ],
                                  "language" : [ "" ]
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['iq_notification_rules_iq_issue_commented'] = entity_import('rules_config', '{ "iq_notification_rules_iq_issue_commented" : {
      "LABEL" : "Issue commented",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag", "rules_conditional", "og", "comment_alter" ],
      "ON" : { "comment_alter_node_postsave" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_issue_assigned_to" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_issue_tags" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_issue_business_value" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_issue_status_term" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_issue_type" } },
        { "entity_has_field" : { "entity" : [ "node-unchanged" ], "field" : "og_group_ref" } },
        { "entity_has_field" : { "entity" : [ "node-unchanged" ], "field" : "field_issue_assigned_to" } },
        { "entity_has_field" : { "entity" : [ "node-unchanged" ], "field" : "field_issue_tags" } },
        { "entity_has_field" : {
            "entity" : [ "node-unchanged" ],
            "field" : "field_issue_business_value"
          }
        },
        { "entity_has_field" : { "entity" : [ "node-unchanged" ], "field" : "field_issue_status_term" } },
        { "entity_has_field" : { "entity" : [ "node-unchanged" ], "field" : "field_issue_type" } },
        { "entity_has_field" : { "entity" : [ "comment" ], "field" : "field_issue_comment_body" } }
      ],
      "DO" : [
        { "flag_fetch_users_node" : {
            "USING" : { "flag" : "subscription_to_node", "node" : [ "node" ] },
            "PROVIDE" : { "users" : { "final_users" : "Users who flagged" } }
          }
        },
        { "flag_fetch_user_by_user" : {
            "USING" : {
              "flag" : "subscription_to_everything",
              "flagging_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "content_flagged_by_user" : { "users2" : "Users subscribed to everything" } }
          }
        },
        { "flag_fetch_users_node" : {
            "USING" : { "flag" : "subscription_to_node", "node" : [ "node:og-group-ref" ] },
            "PROVIDE" : { "users" : { "users3" : "Users who flagged" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "users2" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "list_add" : { "list" : [ "final-users" ], "item" : [ "list-item" ], "unique" : 1 } }
            ]
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "users3" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "list_add" : { "list" : [ "final-users" ], "item" : [ "list-item" ], "unique" : 1 } }
            ]
          }
        },
        { "list_add" : {
            "list" : [ "final-users" ],
            "item" : [ "node:field-issue-assigned-to" ],
            "unique" : 1
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "final-users" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "og_user_in_group" : {
                        "account" : [ "list-item" ],
                        "group" : [ "node:og-group-ref" ],
                        "states" : { "value" : { "1" : "1" } }
                      }
                    },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "NOT user_is_blocked" : { "account" : [ "list-item" ] } },
                            "DO" : [
                              { "mail" : {
                                  "to" : [ "list-item:mail" ],
                                  "subject" : "[[node:og-group-ref:title]] New comment for Issue: [node:title] #[comment:node:nid]",
                                  "message" : "Greetings [list-item:name], new comment by [comment:author:name]\\r\\n\\r\\n[comment:field-issue-comment-body:value]\\r\\n\\r\\nAssigned to: [node-unchanged:field-issue-assigned-to:name] \\u21d2 [node:field-issue-assigned-to:name]\\r\\nStatus: [node-unchanged:field-issue-status-term:name] \\u21d2 [node:field-issue-status-term:name]\\r\\nBusiness value: [node-unchanged:field-issue-business-value] \\u21d2 [node:field-issue-business-value]\\r\\nType: [node-unchanged:field-issue-type] \\u21d2 [node:field-issue-type]\\r\\nDescription:\\r\\n[node:field_issue_description]\\r\\n--\\r\\nRead on or unsubscribe at: [comment:url]\\r\\n",
                                  "from" : [ "" ],
                                  "language" : [ "" ]
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['iq_notification_rules_iq_issue_saved'] = entity_import('rules_config', '{ "iq_notification_rules_iq_issue_saved" : {
      "LABEL" : "Issue saved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag", "rules_conditional", "og", "comment_alter" ],
      "ON" : {
        "node_insert--issue" : { "bundle" : "issue" },
        "comment_alter_node_update--issue" : { "bundle" : "issue" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_issue_assigned_to" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_issue_tags" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_issue_business_value" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_issue_status_term" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_issue_type" } }
      ],
      "DO" : [
        { "flag_fetch_users_node" : {
            "USING" : { "flag" : "subscription_to_node", "node" : [ "node" ] },
            "PROVIDE" : { "users" : { "final_users" : "Users who flagged" } }
          }
        },
        { "flag_fetch_user_by_user" : {
            "USING" : {
              "flag" : "subscription_to_everything",
              "flagging_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "content_flagged_by_user" : { "users2" : "Users subscribed to everything" } }
          }
        },
        { "flag_fetch_users_node" : {
            "USING" : { "flag" : "subscription_to_node", "node" : [ "node:og-group-ref" ] },
            "PROVIDE" : { "users" : { "users3" : "Users who flagged" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "users2" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "list_add" : { "list" : [ "final-users" ], "item" : [ "list-item" ], "unique" : 1 } }
            ]
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "users3" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "list_add" : { "list" : [ "final-users" ], "item" : [ "list-item" ], "unique" : 1 } }
            ]
          }
        },
        { "list_add" : {
            "list" : [ "final-users" ],
            "item" : [ "node:field-issue-assigned-to" ],
            "unique" : 1
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "final-users" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "og_user_in_group" : {
                        "account" : [ "list-item" ],
                        "group" : [ "node:og-group-ref" ],
                        "states" : { "value" : { "1" : "1" } }
                      }
                    },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "NOT user_is_blocked" : { "account" : [ "list-item" ] } },
                            "DO" : [
                              { "mail" : {
                                  "to" : [ "list-item:mail" ],
                                  "subject" : "[[node:og-group-ref:title]] New comment for Issue: [node:title] #[node:nid]",
                                  "message" : "Greetings [list-item:name], change by [site:current-user:name]\\r\\n\\r\\n[node:field-issue-comment-body:value]\\r\\n\\r\\nAssigned to: [node:field-issue-assigned-to:name]\\r\\nStatus: [node:field-issue-status-term:name]\\r\\nBusiness value: [node:field-issue-business-value]\\r\\nType: [node:field-issue-type]\\r\\nLabels: [node:field-issue-tags:0:name], [node:field-issue-tags:1:name], [node:field-issue-tags:2:name], [node:field-issue-tags:3:name]\\r\\nDescription:\\r\\n[node:field_issue_description]\\r\\n--\\r\\nRead on or unsubscribe at: [node:url]\\r\\n",
                                  "from" : [ "" ],
                                  "language" : [ "" ]
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['iq_notification_rules_iq_news_saved'] = entity_import('rules_config', '{ "iq_notification_rules_iq_news_saved" : {
      "LABEL" : "News saved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "og", "rules_conditional" ],
      "ON" : {
        "node_insert--news" : { "bundle" : "news" },
        "node_update--news" : { "bundle" : "news" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_news_body" } }
      ],
      "DO" : [
        { "og_get_members" : {
            "USING" : { "group_content" : [ "node" ] },
            "PROVIDE" : { "group_members" : { "group_members" : "List of group members" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-members" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "NOT user_is_blocked" : { "account" : [ "list-item" ] } },
                    "DO" : [
                      { "mail" : {
                          "to" : [ "list-item:mail" ],
                          "subject" : "[[node:og-group-ref:title]] Update for News: [node:title] #[node:nid]",
                          "message" : "Greetings [list-item:name], here are some details:\\r\\n\\r\\n[node:field-news-body:value]\\r\\n\\r\\nAuthor: [node:author:name]\\r\\n\\r\\n--\\r\\nRead on or unsubscribe at: [node:url]",
                          "from" : [ "" ],
                          "language" : [ "" ]
                        }
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['iq_notification_rules_iq_project_saved'] = entity_import('rules_config', '{ "iq_notification_rules_iq_project_saved" : {
      "LABEL" : "Project saved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag", "rules_conditional", "og" ],
      "ON" : {
        "node_insert--project" : { "bundle" : "project" },
        "node_update--project" : { "bundle" : "project" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_project_body" } }
      ],
      "DO" : [
        { "flag_fetch_users_node" : {
            "USING" : { "flag" : "subscription_to_node", "node" : [ "node" ] },
            "PROVIDE" : { "users" : { "final_users" : "Users who flagged" } }
          }
        },
        { "flag_fetch_user_by_user" : {
            "USING" : {
              "flag" : "subscription_to_everything",
              "flagging_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "content_flagged_by_user" : { "users2" : "Users subscribed to everything" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "users2" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "list_add" : { "list" : [ "final-users" ], "item" : [ "list-item" ], "unique" : 1 } }
            ]
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "final-users" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "og_user_in_group" : {
                        "account" : [ "list-item" ],
                        "group" : [ "node" ],
                        "states" : { "value" : { "1" : "1" } }
                      }
                    },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "NOT user_is_blocked" : { "account" : [ "list-item" ] } },
                            "DO" : [
                              { "mail" : {
                                  "to" : [ "list-item:mail" ],
                                  "subject" : "[[node:title]] Update for Project #[node:nid]",
                                  "message" : "Greetings [list-item:name], here are some details:\\r\\n\\r\\n[node:field-project-body:value]\\r\\n\\r\\nAuthor: [node:author:name]\\r\\n\\r\\n--\\r\\nRead on or unsubscribe at: [node:url]",
                                  "from" : [ "" ],
                                  "language" : [ "" ]
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
