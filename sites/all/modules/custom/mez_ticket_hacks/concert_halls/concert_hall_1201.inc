<?php
/**
 * @file ZAK concert hall specific markup.
 */

function concert_hall_1201($concert_hall_nid, $concert_nid) {
  $return = array();

  $concert_hall = node_load($concert_hall_nid);
  $compression = &drupal_static('mez_compression');
  if (!isset($compression)) {
    $compression = field_get_items('node', $concert_hall, 'field_ticket_map_compression');
    if ($compression) {
      $compression = $compression[0]['value'];
    }
    else {
      $compression = 1;
    }
  }

  $return['title'] = $concert_hall->title;
  $return['xsize'] = 630;
  $return['ysize'] = 480;
  $return['markup'] = '<div style="position:absolute; top:' . 120 / $compression . 'px; left:' . 380 / $compression . 'px;">' . t('STAGE') . '</div>';
  $return['markup'] .= '<svg width="630" height="480" x="200" y="100">
      <rect  x="' . 230 / $compression . '"  y="' .  90 / $compression . '" width="'. 350 / $compression . '" height="' . 100 / $compression . '" style="fill:white;stroke:black;stroke-width:1;fill-opacity:0;" />
      <line x1="' . 210 / $compression . '" y1="' . 100 / $compression . '" x2="' . 210 / $compression . '" y2="' . 450 / $compression . '" style="stroke:rgb(100,100,100);stroke-width:2" />
      <line x1="' . 210 / $compression . '" y1="' . 450 / $compression . '" x2="' . 600 / $compression . '" y2="' . 450 / $compression . '" style="stroke:rgb(100,100,100);stroke-width:2" />
      <line x1="' . 600 / $compression . '" y1="' . 450 / $compression . '" x2="' . 600 / $compression . '" y2="' . 100 / $compression . '" style="stroke:rgb(100,100,100);stroke-width:2" />
      Sorry, your browser does not support inline SVG.
    </svg>';
  // Get all ticket prices for this concert.
  $query = db_select('field_data_commerce_price', 'price')
    ->fields('price', ['commerce_price_amount'])
    ->condition('price.entity_type', 'commerce_product')
    ->condition('price.bundle', 'ticket');
  $concert_alias = $query->innerJoin('field_data_field_concert', 'concert', "%alias.entity_id = price.entity_id");
  $ticket_prices = $query->condition("{$concert_alias}.entity_type", 'commerce_product')
    ->condition("{$concert_alias}.bundle", 'ticket')
    ->condition("{$concert_alias}.field_concert_target_id", $concert_nid)
    ->execute()
    ->fetchAllKeyed(0,0);
  asort($ticket_prices);
  $return['markup'] .= '<div style="position:absolute; top:' . 0 . 'px; left:' . 0 . 'px;">
    <div class="mez-legend">';
    foreach ($ticket_prices as $ticket_price) {
      $return['markup'] .= '<div class="mez-ticket free mez-ticket-price-' . $ticket_price . '"><span class="inner"></span>' . t('@price Ft', ['@price' => $ticket_price]) . '</div>';
    }
  $return['markup'] .= '<div class="mez-ticket reserved"><span class="inner"></span>' . t('my reservation') . '</div>
      <div class="mez-ticket sold"><span class="inner"></span>' . t('not available') . '</div>
    </div>
  </div>';

  return $return;
}
