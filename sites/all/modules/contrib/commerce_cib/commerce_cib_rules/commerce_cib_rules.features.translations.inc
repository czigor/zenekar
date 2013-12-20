<?php
/**
 * @file
 * commerce_cib_rules.features.translations.inc
 */

/**
 * Implements hook_translations_defaults().
 */
function commerce_cib_rules_translations_defaults() {
  $translations = array();
  $translations['hu:rules']['794afed429dd35d17afc7afc8c468dd9'] = array(
    'source' => 'CIB succesful transaction',
    'context' => 'rules_config:rules_cib_succesful_transaction:label',
    'location' => 'rules:rules_config:rules_cib_succesful_transaction:label',
    'translation' => 'CIB sikeres transzakció',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['hu:rules']['83eb142688e3afcd45567bc6ec68194e'] = array(
    'source' => 'The transaction id is: [commerce-order:commerce-cib-trid].
The response code is: [commerce-order:commerce-cib-rc] .
The response message is: [commerce-order:commerce-cib-rt].
An email has been sent to [commerce-order:mail] with the details.

The permission number is: [commerce-order:anum].
The paid amount is: [commerce-order:amo] HUF.',
    'context' => 'rules_config:rules_cib_succesful_transaction:3:message',
    'location' => 'rules:rules_config:rules_cib_succesful_transaction:3:message',
    'translation' => 'A transzakció azonosító [commerce-order:commerce-cib-trid].
A válaszkód [commerce-order:commerce-cib-rc] .
A válaszüzenet: [commerce-order:commerce-cib-rt].
A részletekkel egy emailt küldtünk a [commerce-order:mail] címre.

Engedélyszám: [commerce-order:anum].
A fizetett összeg: [commerce-order:amo] HUF.',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['hu:rules']['bf2a6e7a333df27f140ab006e3da17a2'] = array(
    'source' => 'Order on [site:name]',
    'context' => 'rules_config:rules_cib_succesful_transaction:4:subject',
    'location' => 'rules:rules_config:rules_cib_succesful_transaction:4:subject',
    'translation' => 'Rendelés a [site:name] oldalon',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['hu:rules']['e7c1afe0b426e0c807c5e77d69f5e78a'] = array(
    'source' => 'Dear Customer, 

The transaction id is: [commerce-order:commerce-cib-trid].
The response code is: [commerce-order:commerce-cib-rc] .
The response message is: [commerce-order:commerce-cib-rt].

The permission number is: [commerce-order:anum].
The paid amount is: [commerce-order:amo] HUF.

Thank you for your purchase!
[site:name] team.',
    'context' => 'rules_config:rules_cib_succesful_transaction:4:message',
    'location' => 'rules:rules_config:rules_cib_succesful_transaction:4:message',
    'translation' => 'Kedves vásárló!

A transzakció azonosító [commerce-order:commerce-cib-trid].
A válaszkód [commerce-order:commerce-cib-rc] .
A válaszüzenet: [commerce-order:commerce-cib-rt].

Engedélyszám: [commerce-order:anum].
A fizetett összeg: [commerce-order:amo] HUF.

Köszönjük a vásárlást!
A [site:name] csapata.',
    'plid' => 0,
    'plural' => 0,
  );
  return $translations;
}
