<?php
/**
 * @file
 * mez_application.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mez_application_default_rules_configuration() {
  $items = array();
  $items['rules_application_submission'] = entity_import('rules_config', '{ "rules_application_submission" : {
      "LABEL" : "Application submission",
      "PLUGIN" : "rule",
      "TAGS" : [ "entityform submission" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entityform" : { "label" : "Submitted Entityform", "type" : "entityform" },
        "entityform_type" : { "label" : "Entityform Type", "type" : "entityform_type" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email_again" } },
        { "data_is_empty" : { "data" : [ "entityform:field-email-again" ] } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "pechan.rudolf@upcmail.hu, morocz.veronika@gmail.com, koteles.geza@gmail.com, czovekandras@gmail.com, outdare@citromail.hu",
            "subject" : "Zenekari jelentkez\\u00e9s",
            "message" : "N\\u00e9v: [entityform:name-field]\\r\\nSz\\u00fclet\\u00e9si \\u00e9v: [entityform:field-birth-year]\\r\\nHangszer: [entityform:field-app-instrument]\\r\\nVan hangszered? [entityform:field-own-instrument]\\t\\r\\nLegmagasabb zenei oszt\\u00e1ly: [entityform:field-music-class]\\t\\r\\nH\\u00e1ny \\u00e9vet tanult\\u00e1l a hangszeren? [entityform:field-study-years]\\t\\r\\nZeneiskola: [entityform:field-music-school]\\r\\nUtols\\u00f3 zenetan\\u00e1r: [entityform:field-last-teacher]\\t\\r\\nUtols\\u00f3 tanult darabok: [entityform:field-learnt-pieces]\\r\\nD\\u00edjak, eredm\\u00e9nyek: [entityform:field-prizes-results]\\t\\r\\nZenekari tapasztalat (\\u00e9vek): [entityform:field-experience]\\r\\nZenekar t\\u00edpusa: [entityform:field-orchestra-type]\\r\\nTanulm\\u00e1nyok: [entityform:field-studies]\\r\\nMunkahely \\u00e9s foglalkoz\\u00e1s: [entityform:field-job-workplace]\\r\\n\\u00c1lland\\u00f3 lakc\\u00edm: [entityform:field-address:country], [entityform:field-address:city], [entityform:field-address:postal_code],[entityform:field-address:street]\\r\\nIdeiglenes lakc\\u00edm: [entityform:field-temp-address:country], [entityform:field-temp-address:city], [entityform:field-temp-address:postal_code], [entityform:field-temp-address:street]\\r\\nEmail: [entityform:field-app-email]\\r\\nTelefon: [entityform:field-app-phone]\\r\\nMegjegyz\\u00e9s, k\\u00e9rd\\u00e9s: [entityform:field-remark]",
            "language" : [ "entityform-type:type" ]
          }
        }
      ]
    }
  }');
  $items['rules_application_validation'] = entity_import('rules_config', '{ "rules_application_validation" : {
      "LABEL" : "Application validation",
      "PLUGIN" : "rule",
      "TAGS" : [ "entityform validation" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entityform" : { "label" : "Submitted Entityform", "type" : "entityform" },
        "entityform_type" : { "label" : "Entityform Type", "type" : "entityform_type" },
        "validate_form" : { "label" : "Form Validates", "type" : "boolean", "parameter" : false }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_email_again" } },
        { "NOT data_is_empty" : { "data" : [ "entityform:field-email-again" ] } }
      ],
      "DO" : [ { "redirect" : { "url" : "jelentkezes" } } ],
      "PROVIDES VARIABLES" : [ "validate_form" ]
    }
  }');
  return $items;
}
