<?php
/**
 * @file
 * ns_prod_news.defaultconfig_optionals_settings.inc
 */

/**
 * Implements hook_defaultconfig_optionals_settings().
 */
function ns_prod_news_defaultconfig_optionals_settings() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'field_default_fields:file-image-field_ns_media_credit';
  $preset->status = 1;
  $export['field_default_fields:file-image-field_ns_media_credit'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'field_default_fields:file-video-field_ns_media_credit';
  $preset->status = 1;
  $export['field_default_fields:file-video-field_ns_media_credit'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'field_default_fields:node-ns_article-field_ns_article_byline';
  $preset->status = 1;
  $export['field_default_fields:node-ns_article-field_ns_article_byline'] = $preset;

  return $export;
}
