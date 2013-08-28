<?php
/**
 * @file
 * mez_seat_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function mez_seat_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'seats';
  $feeds_importer->config = array(
    'name' => 'Seats',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '23',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'floor',
            'target' => 'field_seat_floor',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'side',
            'target' => 'field_seat_side',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'row',
            'target' => 'field_seat_row',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'number',
            'target' => 'field_seat_number',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'x',
            'target' => 'field_x_coordinate',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'y',
            'target' => 'field_y_coordinate',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'concert hall',
            'target' => 'field_concert_hall:label',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'seat',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['seats'] = $feeds_importer;

  return $export;
}
