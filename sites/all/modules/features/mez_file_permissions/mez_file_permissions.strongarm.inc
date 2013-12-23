<?php
/**
 * @file
 * mez_file_permissions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mez_file_permissions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_default_allowed_extensions';
  $strongarm->value = 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm wmv ico';
  $export['file_entity_default_allowed_extensions'] = $strongarm;

  return $export;
}
