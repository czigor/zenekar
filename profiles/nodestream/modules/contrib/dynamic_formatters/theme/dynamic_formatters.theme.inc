<?php

/**
 * @file
 * Theme functions for dynamic formatters.
 */

/**
 * Theme function for the views style plugin.
 *
 * @todo
 *   Preprocess this function to remove some logics.
 *
 * @todo
 *   Wrap the inclution and creation of the DynamicView class in a separate
 *   function.
 */
function theme_dynamic_formatters_style($variables) {
  $output = '<div class="dynamic-formatters-group">';
  foreach ($variables['rows'] as $id => $row) {
    $output .= '<div>' . $row . '</div>';
  }
  return $output . '</div>';
}
