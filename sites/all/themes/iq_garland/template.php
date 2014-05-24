<?php
/**
 * @file
 * Contains the theme's functions to define new theme functions or to override
 * the ones set by the base theme.
 */

/**
 * Removing div.panel-separator's from the panels.
 *
 * (They would make CSS 'adjacent element' selectors impossible).
 */
function iq_garland_panels_default_style_render_region($vars) {
  $output = '';
  $output .= implode('', $vars['panes']);
  return $output;
}
