<?php

declare(strict_types=1);

namespace Drupal\mez_d7_migrate\Plugin\migrate\process;

use Drupal\Core\Database\DatabaseExceptionWrapper;
use Drupal\Core\Plugin\ContainerFactoryPluginInterface;
use Drupal\migrate\MigrateExecutableInterface;
use Drupal\migrate\Plugin\MigrationInterface;
use Drupal\migrate\ProcessPluginBase;
use Drupal\migrate\Row;
use Drupal\migrate_drupal\Plugin\migrate\source\DrupalSqlBase;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Converts Drupal 7 Location module values to Address field values.
 *
 * @MigrateProcessPlugin(
 *   id = "location_to_address"
 * )
 */
class LocationToAddress extends ProcessPluginBase implements ContainerFactoryPluginInterface {

  /**
   * Constructs a LocationToAddress plugin.
   */
  public function __construct(
    array $configuration,
    $plugin_id,
    $plugin_definition,
    protected MigrationInterface $migration,
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
    );
  }

  /**
   * {@inheritdoc}
   */
  public function transform($value, MigrateExecutableInterface $migrate_executable, Row $row, $destination_property) {
    $lid = $this->extractLid($value);
    if ($lid === NULL) {
      return NULL;
    }

    $source_plugin = $this->migration->getSourcePlugin();
    if (!$source_plugin instanceof DrupalSqlBase) {
      return NULL;
    }

    try {
      $location = $source_plugin->getDatabase()->select('location', 'l')
        ->fields('l')
        ->condition('l.lid', $lid)
        ->execute()
        ->fetchAssoc();
    }
    catch (DatabaseExceptionWrapper) {
      return NULL;
    }

    if (!$location) {
      return NULL;
    }

    return $this->mapLocationToAddress($location);
  }

  /**
   * Extracts a location ID from a D7 field value.
   */
  protected function extractLid(mixed $value): ?int {
    if ($value === NULL || $value === '' || $value === []) {
      return NULL;
    }

    if (is_numeric($value)) {
      return (int) $value;
    }

    if (!is_array($value)) {
      return NULL;
    }

    if (isset($value['lid']) && is_numeric($value['lid'])) {
      return (int) $value['lid'];
    }

    $first = reset($value);
    if (is_array($first)) {
      return $this->extractLid($first);
    }

    return NULL;
  }

  /**
   * Maps a D7 location table row to an Address field item.
   */
  protected function mapLocationToAddress(array $location): ?array {
    $street = trim((string) ($location['street'] ?? ''));
    $additional = trim((string) ($location['additional'] ?? ''));
    $city = trim((string) ($location['city'] ?? ''));
    $province = trim((string) ($location['province'] ?? ''));
    $postal_code = trim((string) ($location['postal_code'] ?? ''));
    $name = trim((string) ($location['name'] ?? ''));
    $country = strtoupper(trim((string) ($location['country'] ?? '')));

    if ($country === '') {
      $country = 'HU';
    }

    if ($street === '' && $additional === '' && $city === '' && $postal_code === '' && $name === '') {
      return NULL;
    }

    $address_line1 = $street !== '' ? $street : $name;
    $organization = ($street !== '' && $name !== '') ? $name : '';

    return [
      'langcode' => 'hu',
      'country_code' => $country,
      'administrative_area' => $province,
      'locality' => $city,
      'dependent_locality' => '',
      'postal_code' => $postal_code,
      'sorting_code' => '',
      'address_line1' => $address_line1,
      'address_line2' => $additional,
      'organization' => $organization,
      'given_name' => '',
      'additional_name' => '',
      'family_name' => '',
    ];
  }

}
