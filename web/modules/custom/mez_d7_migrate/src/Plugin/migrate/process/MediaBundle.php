<?php

declare(strict_types=1);

namespace Drupal\mez_d7_migrate\Plugin\migrate\process;

use Drupal\migrate\MigrateExecutableInterface;
use Drupal\migrate\ProcessPluginBase;
use Drupal\migrate\Row;

/**
 * Maps a Drupal 7 file entity to a Drupal media bundle.
 *
 * @MigrateProcessPlugin(
 *   id = "mez_media_bundle"
 * )
 */
class MediaBundle extends ProcessPluginBase {

  /**
   * {@inheritdoc}
   */
  public function transform($value, MigrateExecutableInterface $migrate_executable, Row $row, $destination_property) {
    if ($row->getSourceProperty('is_youtube')) {
      return 'remote_video';
    }

    $type = $row->getSourceProperty('file_bundle') ?: $row->getSourceProperty('type');
    $uri = (string) $row->getSourceProperty('uri');

    return match ($type) {
      'image' => str_starts_with($uri, 'private://') ? 'image_private' : 'image',
      'audio' => 'sound',
      'video', 'document' => 'file',
      default => 'file',
    };
  }

}
