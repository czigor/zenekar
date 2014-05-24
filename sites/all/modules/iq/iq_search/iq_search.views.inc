<?php

/**
 * Implements hook_views_data_alter().
 */
function iq_search_views_data_alter(&$data) {

  $key = 'search_api_multi';
  $table = & $data[$key];

  // Author filter.
  $table['search_api_multi_author']['group'] = t('Multi Search');
  $table['search_api_multi_author']['title'] = t('Author');
  $table['search_api_multi_author']['help'] = t('Filter search result to author.');
  $table['search_api_multi_author']['filter']['handler'] = 'SearchApiMultiHandlerFilterAuthor';
  // Node type filter.
  $table['search_api_multi_node_type']['group'] = t('Multi Search');
  $table['search_api_multi_node_type']['title'] = t('Node type');
  $table['search_api_multi_node_type']['help'] = t('Filter search result to node type.');
  $table['search_api_multi_node_type']['filter']['handler'] = 'SearchApiMultiHandlerFilterNodeType';
  // Project filter.
  $table['search_api_multi_project']['group'] = t('Multi Search');
  $table['search_api_multi_project']['title'] = t('Project');
  $table['search_api_multi_project']['help'] = t('Filter search result to project.');
  $table['search_api_multi_project']['filter']['handler'] = 'SearchApiMultiHandlerFilterProject';

  return $data;
}