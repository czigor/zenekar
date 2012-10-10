<?php

$plugin = array(
  'title' => t('NS Theme Content Column Two With Wrappers'),
  'theme' => 'ns_theme_content_column_two_w_wrappers',
  'icon' => 'ns-theme-content-column-two-w-wrappers.png',
  'category' => 'NS Theme',
  'regions' => array(
    'left' => t('Left'),
    'right' => t('Right'),
  ),
);

/**
 * Implementation of theme_preprocess_precision_column_two().
 */
function ns_theme_preprocess_ns_theme_content_column_two_w_wrappers(&$vars) {
  precision_check_layout_variables($vars);
}
