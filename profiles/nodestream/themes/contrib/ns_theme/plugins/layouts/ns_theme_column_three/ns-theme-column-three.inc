<?php

$plugin = array(
  'title' => t('NS Theme three columns'),
  'theme' => 'ns_theme_column_three',
  'icon' => 'ns-theme-column-three.png',
  'category' => 'NS Theme',
  'regions' => array(
    'header_alpha' => t('Header alpha'),
    'main' => t('Main'),
    'footer_main' => t('Footer main'),
    'aside_alpha' => t('Aside alpha'),
    'aside_beta' => t('Aside beta'),
    'footer_alpha' => t('Footer alpha'),
    'footer_beta' => t('Footer beta'),
  ),
);

/**
 * Implementation of theme_preprocess_precision_column_two().
 */
function ns_theme_preprocess_ns_theme_column_three(&$vars) {
  precision_check_layout_variables($vars);

  $defaults = array(
    'main' => array(
      'width' => 24,
    ),
    'aside_alpha' => array(
      'width' => 12,
      'alpha' => TRUE,
    ),
    'aside_beta' => array(
      'width' => 12,
      'omega' => TRUE,
    ),
  );
  
  if (empty($vars['content']['aside_alpha'])) {
    $defaults['main']['width'] += $defaults['aside_alpha']['width'];
    $defaults['main']['alpha'] = TRUE;
  }

  if (empty($vars['content']['aside_beta'])) {
    $defaults['main']['width'] += $defaults['aside_beta']['width'];
    $defaults['main']['omega'] = TRUE;
  }

  foreach ($defaults as $region => $gridcnf) {
    $vars[$region . '_class'] = array(
      'width' => 'grid-' . $gridcnf['width'],
    );
    if (!empty($gridcnf['alpha'])) {
      $vars[$region . '_class']['alpha'] = 'alpha';
    }
    if (!empty($gridcnf['omega'])) {
      $vars[$region . '_class']['omega'] = 'omega';
    }
    $vars[$region . '_class'] = implode(' ', $vars[$region . '_class']);
  }
}
