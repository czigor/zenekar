<?php
/**
 * @file
 * ns_prod_news.dynamic_formatters_default.inc
 */

/**
 * Implements hook_dynamic_formatters_presets_default().
 */
function ns_prod_news_dynamic_formatters_presets_default() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'ns_prod_news_left_attachment_left_attachment_two_col';
  $preset->title = 'Left attachment, Left attachment two columns';
  $preset->description = 'Show the main article with attachment to the left, and children in a two column grid with attachment to the left.';
  $preset->parent_style = 'ns_prod_news_p_l_a';
  $preset->children_style = 'ns_prod_news_c_l_a_2_col';
  $preset->renderer = 'dynamic_formatters_renderer_panels_mini';
  $preset->options = '';
  $export['ns_prod_news_left_attachment_left_attachment_two_col'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'ns_prod_news_left_attachment_top_attachment_two_col';
  $preset->title = 'Left attachment, top attachment two columns';
  $preset->description = 'Shows the main promo with attachment to the left, and children in a two column grid with attachment on top.';
  $preset->parent_style = 'ns_prod_news_p_l_a';
  $preset->children_style = 'ns_prod_news_c_t_a_2_col';
  $preset->renderer = 'dynamic_formatters_renderer_panels_mini';
  $preset->options = '';
  $export['ns_prod_news_left_attachment_top_attachment_two_col'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'ns_prod_news_top_attachment_left_attachment_two_col';
  $preset->title = 'Top attachment, left attachment two columns';
  $preset->description = 'Shows the main promo with attachment on top, and children in a two column grid with attachment to the left.';
  $preset->parent_style = 'ns_prod_news_p_t_a';
  $preset->children_style = 'ns_prod_news_c_l_a_2_col';
  $preset->renderer = 'dynamic_formatters_renderer_panels_mini';
  $preset->options = '';
  $export['ns_prod_news_top_attachment_left_attachment_two_col'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'ns_prod_news_top_attachment_top_attachment_two_col';
  $preset->title = 'Top attachment, top attachment two columns';
  $preset->description = 'Shows the main promo with attachment on top, and children in a two column grid with attachment on top.';
  $preset->parent_style = 'ns_prod_news_p_t_a';
  $preset->children_style = 'ns_prod_news_c_t_a_2_col';
  $preset->renderer = 'dynamic_formatters_renderer_panels_mini';
  $preset->options = '';
  $export['ns_prod_news_top_attachment_top_attachment_two_col'] = $preset;

  return $export;
}
