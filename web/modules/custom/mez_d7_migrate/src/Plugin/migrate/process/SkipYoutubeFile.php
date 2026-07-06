<?php

declare(strict_types=1);

namespace Drupal\mez_d7_migrate\Plugin\migrate\process;

use Drupal\migrate\MigrateExecutableInterface;
use Drupal\migrate\MigrateSkipProcessException;
use Drupal\migrate\ProcessPluginBase;
use Drupal\migrate\Row;

/**
 * Skips processing for YouTube file entities.
 *
 * @MigrateProcessPlugin(
 *   id = "mez_skip_youtube_file"
 * )
 */
class SkipYoutubeFile extends ProcessPluginBase {

  /**
   * {@inheritdoc}
   */
  public function transform($value, MigrateExecutableInterface $migrate_executable, Row $row, $destination_property) {
    if ($row->getSourceProperty('is_youtube')) {
      throw new MigrateSkipProcessException();
    }

    return $value;
  }

}
