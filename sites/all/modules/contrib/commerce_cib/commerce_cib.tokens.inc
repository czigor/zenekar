<?php

/**
 * @file
 * Builds tokens for Commerce CIB.
 */

/**
 * Implements hook_token_info().
 */
function commerce_cib_token_info() {
  $order['commerce-cib-trid'] = array(
    'name' => t("TRID"),
    'description' => t("The transaction ID."),
  );
  $order['commerce-cib-rc'] = array(
    'name' => t("RC"),
    'description' => t("Response code."),
  );
  $order['commerce-cib-rt'] = array(
    'name' => t("RT"),
    'description' => t("Response text."),
  );
  $order['commerce-cib-history'] = array(
    'name' => t("History"),
    'description' => t("Transaction history."),
  );
  $order['commerce-cib-msg'] = array(
    'name' => t("Message"),
    'description' => t("Message to display."),
  );
  $order['commerce-cib-anum'] = array(
    'name' => t("Permission number"),
    'description' => t("Permission number."),
  );
  $order['commerce-cib-amo'] = array(
    'name' => t("Amount"),
    'description' => t("Paid amount."),
  );
  $order['commerce-cib-env'] = array(
    'name' => t("Environment"),
    'description' => t("Testing or live payment."),
  );
  return array(
    'tokens' => array('commerce-order' => $order),
  );
}

/**
 * Implements hook_tokens().
 */
function commerce_cib_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();

  if ($type == 'commerce-order' && !empty($data['commerce-order'])) {
    $order = $data['commerce-order'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        // Commerce CIB related values.
        case 'commerce-cib-trid':
          $replacements[$original] = $order->commerce_cib['trid'];
          break;

        case 'commerce-cib-rc':
          $replacements[$original] = $order->commerce_cib['rc'];
          break;

        case 'commerce-cib-rt':
          $replacements[$original] = $order->commerce_cib['rt'];
          break;

        case 'commerce-cib-history':
          $replacements[$original] = $order->commerce_cib['history'];
          break;

        case 'commerce-cib-msg':
          $replacements[$original] = $order->commerce_cib['msg'];
          break;

        case 'commerce-cib-anum':
          $replacements[$original] = $order->commerce_cib['anum'];
          break;

        case 'commerce-cib-amo':
          $replacements[$original] = $order->commerce_cib['amo'];
          break;

        case 'commerce-cib-env':
          $payment_method = commerce_payment_method_instance_load($order->data['payment_method']);
          $replacements[$original] = $payment_method['settings']['env'];
          break;
      }
    }
  }
  return $replacements;
}
