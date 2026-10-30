<?php

namespace Drupal\mez_d7_migrate\Plugin\migrate\source;

use Drupal\node\Plugin\migrate\source\d7\NodeComplete as CoreNodeComplete;

/**
 * Drupal 7 complete node migration using entity_translation.
 *
 * Supports Drupal 7 sites where Entity Translation revision support
 * was disabled.
 *
 * @MigrateSource(
 *   id = "mez_d7_node_complete",
 *   source_module = "node"
 * )
 */
class MezD7NodeComplete extends CoreNodeComplete {

  /**
   * {@inheritdoc}
   */
  public function query() {

    // Reproduce the core Node::query() implementation without calling
    // NodeComplete::query(), which adds the problematic revision join.
    $query = $this->select('node_revision', 'nr')
      ->fields('n', [
        'nid',
        'type',
        'language',
        'status',
        'created',
        'changed',
        'comment',
        'promote',
        'sticky',
        'tnid',
        'translate',
      ])
      ->fields('nr', [
        'vid',
        'title',
        'log',
        'timestamp',
      ]);

    $query->addField('n', 'uid', 'node_uid');
    $query->addField('nr', 'uid', 'revision_uid');

    // Use the JOIN constant inherited from NodeComplete.
    $query->innerJoin('node', 'n', static::JOIN);

    // Preserve core Content Translation source language handling.
    if ($this->moduleHandler->moduleExists('content_translation')) {
      $query->leftJoin('node', 'nt', '[n].[tnid] = [nt].[nid]');
      $query->addField('nt', 'language', 'source_langcode');
    }

    // Entity Translation metadata is stored in entity_translation,
    // not entity_translation_revision.
    if ($this->getDatabase()->schema()->tableExists('entity_translation')) {

      $query->leftJoin(
        'entity_translation',
        'et',
        "[nr].[nid] = [et].[entity_id] AND [et].[entity_type] = 'node'"
      );

      $query->fields('et', [
        'entity_type',
        'entity_id',
        'source',
        'translate',
      ]);

      // IMPORTANT:
      // NodeComplete::prepareRow() expects revision_id and uses it
      // to set the actual source vid.
      //
      // Use the real node revision ID, NOT et.revision_id.
      $query->addExpression('[nr].[vid]', 'revision_id');

      $query->addExpression(
        'COALESCE([et].[language], [n].[language])',
        'language'
      );

      $query->addField('et', 'uid', 'etr_uid');
      $query->addField('et', 'status', 'etr_status');
      $query->addField('et', 'created', 'etr_created');
      $query->addField('et', 'changed', 'etr_changed');

      $query->orderBy('et.language');
    }

    // Apply the same node type filtering as Drupal core.
    if (isset($this->configuration['node_type'])) {
      $query->condition(
        'n.type',
        (array) $this->configuration['node_type'],
        'IN'
      );
    }

    $query->orderBy('nr.vid');

    return $query;
  }

}
