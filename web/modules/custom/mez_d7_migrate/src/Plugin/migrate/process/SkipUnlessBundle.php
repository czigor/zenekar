<?php

declare(strict_types=1);

namespace Drupal\mez_d7_migrate\Plugin\migrate\process;

use Drupal\migrate\MigrateExecutableInterface;
use Drupal\migrate\MigrateSkipProcessException;
use Drupal\migrate\ProcessPluginBase;
use Drupal\migrate\Row;

/**
 * Skips processing unless the destination media bundle matches.
 *
 * @MigrateProcessPlugin(
 *   id = "mez_skip_unless_bundle"
 * )
 */
class SkipUnlessBundle extends ProcessPluginBase {

  /**
   * {@inheritdoc}
   */
  public function transform($value, MigrateExecutableInterface $migrate_executable, Row $row, $destination_property) {
    $expected = (string) ($this->configuration['bundle'] ?? '');
    $actual = (string) ($row->getDestinationProperty('bundle') ?? '');

    if ($expected !== $actual) {
      throw new MigrateSkipProcessException();
    }

    return $value;
  }

}
