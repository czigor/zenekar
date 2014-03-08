<?php
/**
 * @file ZAK concert hall specific markup.
 */

function concert_hall_1201($concert_hall_nid) {
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
  $return['xsize'] = 760 / $compression;
  $return['ysize'] = 560 / $compression;
  $return['markup'] = '<div style="position:absolute; top:' . 120 / $compression . 'px; left:' . 380 / $compression . 'px;">' . t('STAGE') . '</div>';
  $return['markup'] .= '<svg width="1000" height="480" x="200" y="100">
      <rect x="230" y="90" width="350" height="100" style="fill:white;stroke:black;stroke-width:1;fill-opacity:0;" />
      <line x1="210" y1="100" x2="210" y2="450" style="stroke:rgb(100,100,100);stroke-width:2" />
      <line x1="210" y1="450" x2="600" y2="450" style="stroke:rgb(100,100,100);stroke-width:2" />
      <line x1="600" y1="450" x2="600" y2="100" style="stroke:rgb(100,100,100);stroke-width:2" />
      Sorry, your browser does not support inline SVG.
    </svg>';
  $return['markup'] .= '<div style="position:absolute; top:' . 0 . 'px; left:' . 0 . 'px;">
    <div class="mez-legend">
      <div class="mez-ticket free mez-ticket-price-1000"><span class="inner"></span>' . t('1000 Ft') . '</div>
      <div class="mez-ticket free mez-ticket-price-2000"><span class="inner"></span>' . t('2000 Ft') . '</div>
      <div class="mez-ticket free mez-ticket-price-2500"><span class="inner"></span>' . t('2500 Ft') . '</div>
      <div class="mez-ticket free mez-ticket-price-10000"><span class="inner"></span>' . t('10000 Ft sponsor ticket') . '</div>
      <div class="mez-ticket reserved"><span class="inner"></span>' . t('my reservation') . '</div>
      <div class="mez-ticket sold"><span class="inner"></span>' . t('not available') . '</div>
    </div>
  </div>';

  return $return;
}
