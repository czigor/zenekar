<?php

declare(strict_types=1);

namespace Drupal\mez_d7_migrate\Plugin\migrate\process;

use Drupal\migrate\MigrateExecutableInterface;
use Drupal\migrate\MigrateSkipProcessException;
use Drupal\migrate\ProcessPluginBase;
use Drupal\migrate\Row;

/**
 * Skips processing unless the media bundle is in the configured list.
 *
 * @MigrateProcessPlugin(
 *   id = "mez_skip_unless_bundle_in"
 * )
 */
class SkipUnlessBundleIn extends ProcessPluginBase {

  /**
   * {@inheritdoc}
   */
  public function transform($value, MigrateExecutableInterface $migrate_executable, Row $row, $destination_property) {
    $expected = (array) ($this->configuration['bundles'] ?? []);
    $actual = (string) ($row->getDestinationProperty('bundle') ?? '');

    if (!in_array($actual, $expected, TRUE)) {
      throw new MigrateSkipProcessException();
    }

    return $value;
  }

}
