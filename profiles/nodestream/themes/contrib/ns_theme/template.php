<?php

/**
 * Preprocessing the node template.
 *
 * This is basically here to unify and clean up some class names.
 */
function ns_theme_preprocess_node(&$vars) {
  $node = $vars['node'];
  $classes = array();
  $classes[] = 'node';
  $classes[] = 'node-' . strtr(check_plain($node->type), '_', '-');

  if ($node->sticky) {
    $classes[] = 'node-sticky';
  }
  if (empty($vars['classes'])) {
    $vars['classes'] = implode(' ', $classes);
  }
  else {
    $vars['classes'] = implode(' ', $classes) . ' ' . $vars['classes'];
  }
}

/*
 * Theme function to style the submitted by and submitted date of a comment
 */
function ns_theme_comment_submitted($variables) {
  return t('!username, @datetime',
    array(
    '!username' => $variables['username'],
    '@datetime' => format_date($variables['datetime'], 'custom', 'H:i F j, Y'),
  ));
}

/*
 * Implementation of hook_theme
 */
function ns_theme_theme($existing, $type, $theme, $path) {
  return array(
    'comment_submitted' => array(
      'variables' => array('username' => NULL, 'datetime' => NULL),
    )
  );
}

/*
 * Implementation of template_preprocess_comment
 */
function ns_theme_preprocess_comment(&$variables) {
  // Themes the author and submitted date of the comment
  $variables['submitted'] = theme('comment_submitted', array(
    'username' => $variables['author'],
    'datetime' => $variables['elements']['#comment']->created));
}

/*
 * Override of theme dynamic_formatters_style to add more classes to the promos.
 */
function ns_theme_dynamic_formatters_style($variables) {
  $output = '<div class="dynamic-formatters-group promo-group clearfix">';
  $i = 0;
  foreach ($variables['rows'] as $id => $row) {
    $additional = $variables['view']->result[$id]->additional_info;
    $grid = '';
    $margin = '';
    if (module_exists('ns_prod_news') && isset($additional['requiredcontext_entity:taxonomy_term_2'])) {
      $term = $additional['requiredcontext_entity:taxonomy_term_2']->data;
      $width = field_get_items('taxonomy_term', $term, 'field_ns_prod_news_width');
      $width = $width[0]['value'];
      $grid = '';
      $no_margin = '';
      if ($i > 0) {
        $grid = 'grid-' . intval($width / 2);
        if ($i % 2 == 0) {
          $no_margin = 'omega';
        }
        else {
          $no_margin = 'alpha';
        }
      }
    }
    $output .= '<div class="promo promo-' . $i . ' ' . $grid . ' ' . $no_margin . ' clearfix">' . $row . '</div>';
    $i++;
  }
  return $output . '</div>';
}

/*
 * Implementation of template_preprocess_field
 *
 * Unset the clearfix class to media caption and media credit field.
 */
function ns_theme_preprocess_field(&$variables) {
  if (in_array($variables['element']['#field_name'], array('field_ns_media_credit', 'field_ns_media_caption'))) {
    if (in_array('clearfix', $variables['classes_array'])) {
      foreach ($variables['classes_array'] as $key => $value) {
        if ($value == 'clearfix') {
          unset($variables['classes_array'][$key]);
        }
      }
    }
  }
  // Add slideshow if necessary.
  if ($variables['element']['#field_type'] == 'file' && $variables['element']['#formatter'] == 'file_rendered') {
    $cycle = libraries_get_path('jquery.cycle') . '/jquery.cycle.min.js';
    drupal_add_js($cycle);
    drupal_add_js(drupal_get_path('theme', 'ns_theme') . '/js/media_slideshow.js');
  }
}