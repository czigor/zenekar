<?php
/**
 * @file
 * iq_issue.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iq_issue_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_issue_agile_properties|comment|comment_node_issue|form';
  $field_group->group_name = 'group_issue_agile_properties';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Issue agile properties',
    'weight' => '7',
    'children' => array(
      0 => 'field_issue_done_if_when',
      1 => 'field_issue_estimate',
      2 => 'field_issue_how_to_demo',
      3 => 'field_issue_kanban',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Issue agile properties',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-issue-agile-properties field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_issue_agile_properties|comment|comment_node_issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_issue_agile_properties|node|issue|form';
  $field_group->group_name = 'group_issue_agile_properties';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Agile properties',
    'weight' => '9',
    'children' => array(
      0 => 'field_issue_done_if_when',
      1 => 'field_issue_estimate',
      2 => 'field_issue_how_to_demo',
      3 => 'field_issue_kanban',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Agile properties',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-issue-agile-properties field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_issue_agile_properties|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_issue_details|comment|comment_node_issue|form';
  $field_group->group_name = 'group_issue_details';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Issue details',
    'weight' => '0',
    'children' => array(
      0 => 'field_issue_assigned_to',
      1 => 'field_issue_business_value',
      2 => 'field_issue_status_term',
      3 => 'field_issue_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Issue details',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_issue_details|comment|comment_node_issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_issue_details|node|issue|form';
  $field_group->group_name = 'group_issue_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_issue_assigned_to',
      1 => 'field_issue_attachments',
      2 => 'field_issue_business_value',
      3 => 'field_issue_description',
      4 => 'field_issue_status_term',
      5 => 'field_issue_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-issue-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_issue_details|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_issue_relations|comment|comment_node_issue|form';
  $field_group->group_name = 'group_issue_relations';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Issue relations',
    'weight' => '6',
    'children' => array(
      0 => 'field_issue_parent',
      1 => 'field_issue_related',
      2 => 'field_issue_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Issue relations',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-issue-relations field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_issue_relations|comment|comment_node_issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_issue_relations|node|issue|form';
  $field_group->group_name = 'group_issue_relations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relations',
    'weight' => '8',
    'children' => array(
      0 => 'field_issue_parent',
      1 => 'field_issue_related',
      2 => 'field_issue_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Relations',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-issue-relations field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_issue_relations|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_issue_title_description|comment|comment_node_issue|form';
  $field_group->group_name = 'group_issue_title_description';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Issue title and description',
    'weight' => '4',
    'children' => array(
      0 => 'field_issue_description',
      1 => 'title_field',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Issue title and description',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-issue-title-description field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_issue_title_description|comment|comment_node_issue|form'] = $field_group;

  return $export;
}
