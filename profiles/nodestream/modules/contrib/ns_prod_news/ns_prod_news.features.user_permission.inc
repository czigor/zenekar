<?php
/**
 * @file
 * ns_prod_news.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function ns_prod_news_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ns_prod_news_promo content
  $permissions['create ns_prod_news_promo content'] = array(
    'name' => 'create ns_prod_news_promo content',
    'roles' => array(
      0 => 'administrator',
      1 => 'chief editor',
      2 => 'editor',
      3 => 'super user',
      4 => 'writer',
    ),
    'module' => 'node',
  );

  // Exported permission: manage topic regions
  $permissions['manage topic regions'] = array(
    'name' => 'manage topic regions',
    'roles' => array(
      0 => 'administrator',
      1 => 'chief editor',
      2 => 'editor',
      3 => 'super user',
      4 => 'writer',
    ),
    'module' => 'ns_core',
  );

  // Exported permission: delete any ns_prod_news_promo content
  $permissions['delete any ns_prod_news_promo content'] = array(
    'name' => 'delete any ns_prod_news_promo content',
    'roles' => array(
      0 => 'administrator',
      1 => 'chief editor',
      2 => 'editor',
      3 => 'super user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ns_prod_news_promo content
  $permissions['delete own ns_prod_news_promo content'] = array(
    'name' => 'delete own ns_prod_news_promo content',
    'roles' => array(
      0 => 'administrator',
      1 => 'chief editor',
      2 => 'editor',
      3 => 'super user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ns_prod_news_promo content
  $permissions['edit any ns_prod_news_promo content'] = array(
    'name' => 'edit any ns_prod_news_promo content',
    'roles' => array(
      0 => 'administrator',
      1 => 'chief editor',
      2 => 'editor',
      3 => 'super user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ns_prod_news_promo content
  $permissions['edit own ns_prod_news_promo content'] = array(
    'name' => 'edit own ns_prod_news_promo content',
    'roles' => array(
      0 => 'administrator',
      1 => 'chief editor',
      2 => 'editor',
      3 => 'super user',
      4 => 'writer',
    ),
    'module' => 'node',
  );

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'blogger',
      2 => 'chief editor',
      3 => 'editor',
      4 => 'super user',
      5 => 'writer',
    ),
    'module' => 'node',
  );

  // Exported permission: view own unpublished content
  $permissions['administer dynamic formatters'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      2 => 'chief editor',
      3 => 'super user',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
      1 => 'chief editor',
      2 => 'editor',
      3 => 'super user',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'comment',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'chief editor',
    ),
    'module' => 'panels',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      0 => 'chief editor',
    ),
    'module' => 'panels',
  );

  return $permissions;
}
