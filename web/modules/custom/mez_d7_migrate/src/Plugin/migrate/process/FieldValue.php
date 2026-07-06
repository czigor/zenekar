<?php

declare(strict_types=1);

namespace Drupal\mez_d7_migrate\Plugin\migrate\process;

use Drupal\migrate\MigrateExecutableInterface;
use Drupal\migrate\MigrateSkipProcessException;
use Drupal\migrate\ProcessPluginBase;
use Drupal\migrate\Row;

/**
 * Extracts the first value from a field API value array.
 *
 * @MigrateProcessPlugin(
 *   id = "mez_field_value",
 *   handle_multiples = TRUE
 * )
 */
class FieldValue extends ProcessPluginBase {

  /**
   * {@inheritdoc}
   */
  public function transform($value, MigrateExecutableInterface $migrate_executable, Row $row, $destination_property) {
    if (!is_array($value) || $value === []) {
      throw new MigrateSkipProcessException();
    }

    $item = reset($value);
    $key = $this->configuration['key'] ?? 'value';

    if (is_array($item)) {
      $extracted = $item[$key] ?? $item['target_id'] ?? NULL;
      if ($extracted === NULL || $extracted === '' || $extracted === []) {
        throw new MigrateSkipProcessException();
      }
      return $extracted;
    }

    if ($item === NULL || $item === '' || $item === []) {
      throw new MigrateSkipProcessException();
    }

    return $item;
  }

}
