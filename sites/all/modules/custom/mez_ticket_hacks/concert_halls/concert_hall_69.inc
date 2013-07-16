<?php
/**
 * @file ZAK concert hall specific markup.
 */

function concert_hall_69($concert_hall_nid) {
  $return = array();

  $concert_hall = node_load($concert_hall_nid);
  $return['title'] = $concert_hall->title;
  $return['xsize'] = 760;
  $return['ysize'] = 960;
  $return['markup'] = '<div style="position:absolute; top:30px; left:100px;">1</div>';

  return $return;
}
