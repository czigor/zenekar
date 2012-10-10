<?php

$plugin = array(
  'title' => t('NS Theme Content Column Two'),
  'theme' => 'ns_theme_content_column_two',
  'icon' => 'ns-theme-content-column-two.png',
  'category' => 'NS Theme',
  'regions' => array(
    'left' => t('Left'),
    'right' => t('Right'),
  ),
);

/**
 * Implementation of theme_preprocess_precision_column_two().
 */
function ns_theme_preprocess_ns_theme_content_column_two(&$vars) {
  precision_check_layout_variables($vars);
}
