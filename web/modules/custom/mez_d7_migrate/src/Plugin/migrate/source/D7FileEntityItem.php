<?php

declare(strict_types=1);

namespace Drupal\mez_d7_migrate\Plugin\migrate\source;

use Drupal\migrate\Row;
use Drupal\migrate_drupal\Plugin\migrate\source\d7\FieldableEntity;

/**
 * Drupal 7 File Entity source.
 *
 * Reads rows from file_managed for File Entity module types and YouTube URIs.
 *
 * @MigrateSource(
 *   id = "d7_file_entity_item",
 *   source_module = "file_entity"
 * )
 */
class D7FileEntityItem extends FieldableEntity {

  /**
   * File entity bundles that should become media entities.
   */
  protected const MEDIA_TYPES = [
    'image',
    'audio',
    'video',
    'document',
  ];

  /**
   * {@inheritdoc}
   */
  public function query() {
    $query = $this->select('file_managed', 'f')
      ->fields('f')
      ->condition('f.uri', 'temporary://%', 'NOT LIKE')
      ->orderBy('f.fid');

    $or = $query->orConditionGroup()
      ->condition('f.type', self::MEDIA_TYPES, 'IN')
      ->condition('f.uri', 'youtube://%', 'LIKE');

    $query->condition($or);

    if (!empty($this->configuration['scheme'])) {
      $schemes = array_diff((array) $this->configuration['scheme'], ['temporary']);
      if ($schemes) {
        $scheme_group = $query->orConditionGroup();
        foreach ($schemes as $scheme) {
          $scheme_group->condition('f.uri', $this->getDatabase()->escapeLike($scheme . '://') . '%', 'LIKE');
        }
        $query->condition($scheme_group);
      }
    }

    return $query;
  }

  /**
   * {@inheritdoc}
   */
  public function prepareRow(Row $row) {
    $fid = $row->getSourceProperty('fid');
    $bundle = $row->getSourceProperty('type');
    $uri = $row->getSourceProperty('uri');

    if (str_starts_with($uri, 'youtube://')) {
      $row->setSourceProperty('is_youtube', TRUE);
    }
    else {
      $row->setSourceProperty('is_youtube', FALSE);
    }

    if (!in_array($bundle, self::MEDIA_TYPES, TRUE) && $row->getSourceProperty('is_youtube')) {
      $bundle = 'video';
      $row->setSourceProperty('type', $bundle);
    }

    if (!$bundle || $bundle === 'undefined') {
      return FALSE;
    }

    $row->setSourceProperty('file_bundle', $bundle);

    foreach (array_keys($this->getFields('file', $bundle)) as $field_name) {
      $row->setSourceProperty($field_name, $this->getFieldValues('file', $field_name, $fid));
    }

    return parent::prepareRow($row);
  }

  /**
   * {@inheritdoc}
   */
  public function fields() {
    return [
      'fid' => $this->t('File ID'),
      'uid' => $this->t('The user ID'),
      'filename' => $this->t('File name'),
      'uri' => $this->t('File URI'),
      'filemime' => $this->t('MIME type'),
      'filesize' => $this->t('File size'),
      'status' => $this->t('File status'),
      'timestamp' => $this->t('Timestamp'),
      'uuid' => $this->t('UUID'),
      'type' => $this->t('File entity bundle'),
      'file_bundle' => $this->t('Normalized file entity bundle'),
      'is_youtube' => $this->t('Whether the URI is a YouTube reference'),
    ];
  }

  /**
   * {@inheritdoc}
   */
  public function getIds() {
    return [
      'fid' => [
        'type' => 'integer',
        'alias' => 'f',
      ],
    ];
  }

}
