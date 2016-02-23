<?php

/**
 * @file
 * Builds tokens for Commerce CIB.
 */

/**
 * Implements hook_token_info().
 */
function commerce_cib_token_info() {
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
        case 'commerce-cib-env':
          $payment_method = commerce_payment_method_instance_load($order->data['payment_method']);
          $replacements[$original] = $payment_method['settings']['env'];
          break;
      }
    }
  }
  return $replacements;
}
