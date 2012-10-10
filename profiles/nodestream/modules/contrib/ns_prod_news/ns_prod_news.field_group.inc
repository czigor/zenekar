
<?php
/**
 * @file
 * ns_article.field_group.inc
 */

/**
 * Implements hook_defaultconfig_field_group_info().
 */
function ns_prod_news_defaultconfig_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ns_article_attach|node|ns_article|form';
  $field_group->group_name = 'group_ns_prod_news_attach';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ns_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '10',
    'children' => array(
      0 => 'field_ns_article_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ns_article_attach|node|ns_article|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ns_article_byline|node|ns_article|form';
  $field_group->group_name = 'group_ns_prod_news_byline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ns_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Byline',
    'weight' => '4',
    'children' => array(
      0 => 'field_ns_article_byline',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ns_article_byline|node|ns_article|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ns_article_category|node|ns_article|form';
  $field_group->group_name = 'group_ns_prod_news_category';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ns_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '6',
    'children' => array(
      0 => 'field_ns_prod_news_region',
      1 => 'field_ns_prod_news_topic',
      2 => 'field_ns_ch_rss_topic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ns_article_category|node|ns_article|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ns_article_media|node|ns_article|form';
  $field_group->group_name = 'group_ns_prod_news_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ns_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '5',
    'children' => array(
      0 => 'field_ns_article_media',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_ns_article_media|node|ns_article|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ns_fact|node|ns_article|form';
  $field_group->group_name = 'group_ns_fact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ns_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Facts',
    'weight' => '7',
    'children' => array(
      0 => 'field_ns_fact_ns_article_fact',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ns_fact|node|ns_article|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ns_form|node|ns_article|form';
  $field_group->group_name = 'group_ns_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ns_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Forms',
    'weight' => '9',
    'children' => array(
      0 => 'field_ns_form_ns_article_form',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ns_form|node|ns_article|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ns_poll|node|ns_article|form';
  $field_group->group_name = 'group_ns_poll';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ns_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Polls',
    'weight' => '9',
    'children' => array(
      0 => 'field_ns_poll_ns_article_poll',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ns_poll|node|ns_article|form'] = $field_group;

  return $export;
}
