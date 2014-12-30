<?php
/**
 * @file
 * mez_media_asset_ct.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mez_media_asset_ct_default_rules_configuration() {
  $items = array();
  $items['rules_mez_media_asset_files'] = entity_import('rules_config', '{ "rules_mez_media_asset_files" : {
      "LABEL" : "MEZ Updating media asset file infos",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : {
        "node_update--media_asset" : { "bundle" : "media_asset" },
        "node_insert--media_asset" : { "bundle" : "media_asset" }
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
                                          "value" : [ "node:field-day-date" ]
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
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_has_field" : { "entity" : [ "file:file" ], "field" : "field_tags" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_tags" } },
                            "DO" : [
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "data_is_empty" : { "data" : [ "file:file:field-tags" ] } },
                                    "DO" : [
                                      { "data_set" : { "data" : [ "file:file:field-tags" ], "value" : [ "node:field-tags" ] } }
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
