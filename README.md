# zenekar.bme.hu

## Set up development environment

### Prerequisites

- Install [DDEV](https://ddev.com/)

### Project setup

Start the development environment.

$ ddev start

Install dependencies.

$ ddev composer install

Apply recent database updates and configuration changes.

$ ddev drush deploy

Get the URL for the site.

$ ddev status

## Useful commands

One time login link for the superuser.

$ ddev drush uli

List all the available commands.

$ ddev drush help

```

```
