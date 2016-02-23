<?php
/**
 * @file ZAK concert hall specific markup.
 */

function concert_hall_164($concert_hall_nid, $concert_nid) {
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
  $return['ysize'] = 1200 / $compression;
  $return['markup'] = '<div style="position:absolute; top:' . 100 / $compression . 'px; left:' . 400 / $compression . 'px;">' . t('STAGE') . '</div>';
  $return['markup'] .= '<div style="position:absolute; top:' . 0 . 'px; left:' . 0 . 'px;">
    <div class="mez-legend">
      <div class="mez-ticket free"><span class="inner"></span>' . t('available') . '</div>
      <div class="mez-ticket reserved"><span class="inner"></span>' . t('my reservation') . '</div>
      <div class="mez-ticket sold"><span class="inner"></span>' . t('(online) not available') . '</div>
    </div>
  </div>';

  return $return;
}
