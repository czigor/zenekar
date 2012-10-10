<?php

$plugin = array(
  'title' => t('NS Theme Content Column One'),
  'theme' => 'ns_theme_content_column_one',
  'icon' => 'ns-theme-content-column-one.png',
  'category' => 'NS Theme',
  'regions' => array(
    'main' => t('Main'),
  ),
);

/**
 * Implementation of theme_preprocess_precision_column_one().
 */
function ns_theme_preprocess_ns_theme_content_column_one(&$vars) {
  precision_check_layout_variables($vars);
}
