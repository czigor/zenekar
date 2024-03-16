<?php

/**
 * @file
 */

/**
 * Alter the list of commerce_order statuses where the coupon should have its
 * usage tracked.
 *
 *  @see commerce_coupon_usage_tracked_order_statuses().
 */
function hook_commerce_coupon_usage_tracked_order_statuses_alter(&$statuses) {
  $statuses[] = 'shipping_in_progress';
}
