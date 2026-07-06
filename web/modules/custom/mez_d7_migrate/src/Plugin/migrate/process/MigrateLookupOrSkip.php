<?php

declare(strict_types=1);

namespace Drupal\mez_d7_migrate\Plugin\migrate\process;

use Drupal\migrate\MigrateExecutableInterface;
use Drupal\migrate\MigrateLookupInterface;
use Drupal\migrate\MigrateSkipProcessException;
use Drupal\migrate\MigrateStubInterface;
use Drupal\migrate\Plugin\MigrationInterface;
use Drupal\migrate\Plugin\migrate\process\MigrationLookup;
use Drupal\migrate\Row;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Looks up a migrated entity ID and skips the property if not found.
 *
 * @MigrateProcessPlugin(
 *   id = "mez_migration_lookup_or_skip",
 *   handle_multiples = TRUE
 * )
 */
class MigrateLookupOrSkip extends MigrationLookup {

  /**
   * Constructs a MigrateLookupOrSkip plugin.
   */
  public function __construct(
    array $configuration,
    $plugin_id,
    $plugin_definition,
    MigrationInterface $migration,
    MigrateLookupInterface $migrate_lookup,
    MigrateStubInterface $migrate_stub,
  ) {
    parent::__construct($configuration, $plugin_id, $plugin_definition, $migration, $migrate_lookup, $migrate_stub);
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
      $container->get('migrate.stub'),
    );
  }

  /**
   * {@inheritdoc}
   */
  public function transform($value, MigrateExecutableInterface $migrate_executable, Row $row, $destination_property) {
    if ($value === NULL || $value === '' || $value === []) {
      throw new MigrateSkipProcessException();
    }

    $configuration = $this->configuration + ['no_stub' => TRUE];
    $this->configuration = $configuration;

    try {
      $destination_id = parent::transform($value, $migrate_executable, $row, $destination_property);
    }
    catch (\Exception) {
      throw new MigrateSkipProcessException();
    }

    $destination_id = $this->normalizeDestinationId($destination_id);
    if ($destination_id === NULL || $destination_id === '') {
      throw new MigrateSkipProcessException();
    }

    return $destination_id;
  }

  /**
   * Reduces migration lookup results to a single entity ID.
   */
  protected function normalizeDestinationId(mixed $destination_id): mixed {
    if ($destination_id === NULL || $destination_id === '' || $destination_id === []) {
      return NULL;
    }

    if (!is_array($destination_id)) {
      return $destination_id;
    }

    if (isset($destination_id['target_id'])) {
      return $destination_id['target_id'];
    }
    if (isset($destination_id['nid'])) {
      return $destination_id['nid'];
    }
    if (isset($destination_id['tid'])) {
      return $destination_id['tid'];
    }
    if (isset($destination_id['mid'])) {
      return $destination_id['mid'];
    }
    if (isset($destination_id[0])) {
      return $this->normalizeDestinationId($destination_id[0]);
    }

    return NULL;
  }

}
