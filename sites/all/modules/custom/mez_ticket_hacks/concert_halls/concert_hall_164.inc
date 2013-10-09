<?php
/**
 * @file ZAK concert hall specific markup.
 */

function concert_hall_164($concert_hall_nid) {
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

  return $return;
}
