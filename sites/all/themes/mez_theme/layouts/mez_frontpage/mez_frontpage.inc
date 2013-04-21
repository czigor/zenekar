<?php

// Plugin definition
$plugin = array(
  'title' => t('MEZ frontpage'),
  'category' => t('Custom'),
  'icon' => 'mez_frontpage.png',
  'theme' => 'mez_frontpage',
  'css' => 'mez_frontpage.css',
  'regions' => array(
    'up' => t('Up'),
    'news' => t('News'),
    'top_main' => t('Main 1'),
    'bottom_main' => t('Main 2'),
    'bottom' => t('Bottom'),
  ),
);
