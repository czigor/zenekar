<?php

declare(strict_types=1);

namespace Drupal\mez_d7_migrate\Plugin\migrate\process;

use Drupal\Core\Entity\EntityTypeManagerInterface;
use Drupal\Core\Plugin\ContainerFactoryPluginInterface;
use Drupal\migrate\MigrateExecutableInterface;
use Drupal\migrate\ProcessPluginBase;
use Drupal\migrate\Plugin\MigrationPluginManagerInterface;
use Drupal\migrate\Row;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Resolves paragraph revision IDs for entity-reference-revisions fields.
 *
 * Lookup order:
 * 1. Field Collection Revisions Content map by D7 revision ID.
 * 2. Field Collection Content map by D7 item ID, then the paragraph's current
 *    revision ID (not the often-stale destid2 in the content map).
 *
 * Source must be [field_collection_item_id, field_collection_revision_id].
 *
 * @MigrateProcessPlugin(
 *   id = "mez_paragraphs_err_lookup"
 * )
 */
class ParagraphsErrLookup extends ProcessPluginBase implements ContainerFactoryPluginInterface {

  public function __construct(
    array $configuration,
    $plugin_id,
    $plugin_definition,
    protected MigrationPluginManagerInterface $migrationPluginManager,
    protected EntityTypeManagerInterface $entityTypeManager,
  ) {
    parent::__construct($configuration, $plugin_id, $plugin_definition);
  }

  /**
   * {@inheritdoc}
   */
  public static function create(ContainerInterface $container, array $configuration, $plugin_id, $plugin_definition, $migration = NULL) {
    return new static(
      $configuration,
      $plugin_id,
      $plugin_definition,
      $container->get('plugin.manager.migration'),
      $container->get('entity_type.manager'),
    );
  }

  /**
   * {@inheritdoc}
   */
  public function transform($value, MigrateExecutableInterface $migrate_executable, Row $row, $destination_property) {
    $value = array_values((array) $value);
    $item_id = $value[0] ?? NULL;
    $revision_id = $value[1] ?? NULL;

    if ($revision_id !== NULL && $revision_id !== '') {
      $destination = $this->lookupByTag('Field Collection Revisions Content', [$revision_id]);
      if ($destination) {
        // entity_reference_revisions destination ids: [id, revision_id].
        return $destination[1] ?? $destination[0];
      }
    }

    if ($item_id === NULL || $item_id === '') {
      return NULL;
    }

    $destination = $this->lookupByTag('Field Collection Content', [$item_id]);
    if (!$destination) {
      return NULL;
    }

    $paragraph_id = $destination[0];
    $paragraph = $this->entityTypeManager->getStorage('paragraph')->load($paragraph_id);
    return $paragraph ? (int) $paragraph->getRevisionId() : NULL;
  }

  /**
   * Looks up destination IDs in migrations that have the given tag.
   *
   * @param string $tag
   *   Migration tag.
   * @param array $source_id_values
   *   Source ID values for the id map lookup.
   *
   * @return array|null
   *   Destination ID values, or NULL if not found.
   */
  protected function lookupByTag(string $tag, array $source_id_values): ?array {
    foreach ($this->migrationPluginManager->createInstancesByTag($tag) as $migration) {
      $destination_ids = $migration->getIdMap()->lookupDestinationIds($source_id_values);
      if ($destination_ids) {
        return array_values(reset($destination_ids));
      }
    }
    return NULL;
  }

}
