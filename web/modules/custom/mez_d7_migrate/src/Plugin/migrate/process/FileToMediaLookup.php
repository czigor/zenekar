<?php

declare(strict_types=1);

namespace Drupal\mez_d7_migrate\Plugin\migrate\process;

use Drupal\Core\Plugin\ContainerFactoryPluginInterface;
use Drupal\migrate\MigrateExecutableInterface;
use Drupal\migrate\MigrateLookupInterface;
use Drupal\migrate\MigrateSkipRowException;
use Drupal\migrate\Plugin\MigrationInterface;
use Drupal\migrate\ProcessPluginBase;
use Drupal\migrate\Row;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Looks up a migrated media entity ID from a Drupal 7 file ID.
 *
 * @MigrateProcessPlugin(
 *   id = "mez_file_to_media"
 * )
 */
class FileToMediaLookup extends ProcessPluginBase implements ContainerFactoryPluginInterface {

  /**
   * Constructs a FileToMediaLookup plugin.
   */
  public function __construct(
    array $configuration,
    $plugin_id,
    $plugin_definition,
    protected MigrationInterface $migration,
    protected MigrateLookupInterface $migrateLookup,
  ) {
    parent::__construct($configuration, $plugin_id, $plugin_definition);
  }

  /**
   * {@inheritdoc}
   */
  public static function create(ContainerInterface $container, array $configuration, $plugin_id, $plugin_definition, ?MigrationInterface $migration = NULL) {
    return new static(
      $configuration,
      $plugin_id,
      $plugin_definition,
      $migration,
      $container->get('migrate.lookup'),
    );
  }

  /**
   * {@inheritdoc}
   */
  public function transform($value, MigrateExecutableInterface $migrate_executable, Row $row, $destination_property) {
    $fid = NULL;
    if (is_array($value)) {
      $fid = $value['fid'] ?? $value['target_id'] ?? NULL;
    }
    elseif (is_numeric($value)) {
      $fid = $value;
    }

    if (!$fid) {
      if (!empty($this->configuration['skip_on_empty'])) {
        return NULL;
      }
      throw new MigrateSkipRowException('Missing file ID for media lookup.');
    }

    $migrations = (array) ($this->configuration['migration'] ?? 'upgrade_d7_file_entity');
    $destination_ids = $this->migrateLookup->lookup($migrations, [$fid]);

    if (!$destination_ids) {
      if (!empty($this->configuration['no_stub'])) {
        return NULL;
      }
      throw new MigrateSkipRowException(sprintf('No media entity found for file ID %d.', $fid));
    }

    return $this->extractDestinationId(reset($destination_ids));
  }

  /**
   * Extracts a single destination ID from a migrate lookup result row.
   */
  protected function extractDestinationId(mixed $record): mixed {
    if (!is_array($record)) {
      return $record;
    }

    return $record['mid']
      ?? $record['fid']
      ?? $record['nid']
      ?? $record['tid']
      ?? $record['target_id']
      ?? (isset($record[0]) && !is_array($record[0]) ? $record[0] : NULL);
  }

}
