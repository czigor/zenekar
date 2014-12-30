<?php
/**
 * @file
 * mez_concert_ct.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mez_concert_ct_default_rules_configuration() {
  $items = array();
  $items['rules_mez_updating_concert_files'] = entity_import('rules_config', '{ "rules_mez_updating_concert_files" : {
      "LABEL" : "MEZ Updating concert file infos",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : {
        "node_update--concert" : { "bundle" : "concert" },
        "node_insert--concert" : { "bundle" : "concert" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_media" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-media" ] },
            "ITEM" : { "file" : "File" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_has_field" : { "entity" : [ "file:file" ], "field" : "field_day_date" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_time" } },
                            "DO" : [
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "data_is_empty" : { "data" : [ "file:file:field-day-date" ] } },
                                    "DO" : [
                                      { "data_set" : {
                                          "data" : [ "file:file:field-day-date" ],
                                          "value" : [ "node:field-time:value" ]
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
