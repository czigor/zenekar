<?php

declare(strict_types=1);

namespace Drupal\mez_d7_migrate\Plugin\migrate\process;

use Drupal\migrate\MigrateExecutableInterface;
use Drupal\migrate\MigrateSkipProcessException;
use Drupal\migrate\ProcessPluginBase;
use Drupal\migrate\Row;

/**
 * Converts Drupal 7 youtube:// URIs to oEmbed-ready URLs.
 *
 * @MigrateProcessPlugin(
 *   id = "mez_youtube_uri_to_oembed"
 * )
 */
class YoutubeUriToOembed extends ProcessPluginBase {

  /**
   * {@inheritdoc}
   */
  public function transform($value, MigrateExecutableInterface $migrate_executable, Row $row, $destination_property) {
    if (!$row->getSourceProperty('is_youtube')) {
      throw new MigrateSkipProcessException();
    }

    $uri = (string) $value;
    if (!str_starts_with($uri, 'youtube://')) {
      throw new MigrateSkipProcessException();
    }

    if (preg_match('#youtube://v/([^/?]+)#', $uri, $matches)) {
      return 'https://www.youtube.com/watch?v=' . $matches[1];
    }

    return $uri;
  }

}
