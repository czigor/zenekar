<?php

$plugin = array(
  'title' => t('NodeStream Intranet site template'),
  'theme' => 'ns_intranet_site_template',
  'icon' => 'ns-intranet-site-template.png',
  'category' => 'NodeStream Intranet',
  'regions' => array(
    'toolbar' => t('Toolbar'),
    'branding' => t('Branding'),
    'nav' => t('Navigation'),
    'main' => t('Main'),
    'footer' => t('Footer'),
  ),
);

/**
 * Preprocess the site template layout.
 */
function precision_preprocess_ns_intranet_site_template(&$vars) {
  precision_check_layout_variables($vars);
}
