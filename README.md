# [zenekar.bme.hu](http://zenekar.bme.hu)

## Set up development environment

### Prerequisites

- Install [DDEV](https://ddev.com/)

### Project setup

Start the development environment.

`ddev start`

Install dependencies.

`ddev composer install`

Install Drupal.

`ddev si --existing-config`

Apply recent database updates and configuration changes.

`ddev drush deploy`

Get the URL for the site.

`ddev status`

### Migrate Drupal 7 content

Create the file `web/sites/default/settings.local.php` with the following content:

```
<?php

// @codingStandardsIgnoreFile

$settings['skip_permissions_hardening'] = TRUE;

$databases = [];
$databases['migrate']['default'] = array (
  'database' => 'd7_source',
  'username' => 'root',
  'password' => 'root',
  'prefix' => 'mez7_',
  'host' => 'db',
  'port' => '3306',
  'namespace' => 'Drupal\\Core\\Database\\Driver\\mysql',
  'driver' => 'mysql',
);
```

Make sure you are in the project root and copy the Drupal 7 database file from the server to the project root.

`scp zenekar.bme.hu:db_backups/zenekar7-prod-20260706.sql .`

Make it available for Drupal 11.

`ddev import-db --file=zenekar7-prod-20260706.sql -d d7_source`

No need to copy over files, the migration process takes care of that.

Run migrations.

```
ddev drush migrate:import --execute-dependencies upgrade_d7_file
ddev drush migrate:import --execute-dependencies upgrade_d7_node_complete_piece,upgrade_d7_node_complete_person,upgrade_d7_node_complete_location,upgrade_d7_node_complete_mez_news,upgrade_d7_node_complete_page
ddev drush migrate:import --execute-dependencies upgrade_d7_taxonomy_term_instruments,upgrade_d7_taxonomy_term_concert_type
ddev drush migrate:import --execute-dependencies upgrade_d7_field_collection_performers,upgrade_d7_field_collection_revisions_performers
ddev drush migrate:import --execute-dependencies upgrade_d7_field_collection_programme,upgrade_d7_field_collection_revisions_programme
ddev drush migrate:import --execute-dependencies upgrade_d7_field_collection_orchestra_performers,upgrade_d7_field_collection_revisions_orchestra_performers
ddev drush migrate:import --execute-dependencies upgrade_d7_file_entity,upgrade_d7_node_complete_concert,upgrade_d7_media_concert_reference,upgrade_d7_node_complete_media_asset
```

## Useful commands

One time login link for the superuser.

`ddev drush uli`

List all the available commands.

`ddev drush help`
