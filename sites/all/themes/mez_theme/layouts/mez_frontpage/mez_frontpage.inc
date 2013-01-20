<?php

// Plugin definition
$plugin = array(
  'title' => t('MEZ frontpage'),
  'category' => t('Custom'),
  'icon' => 'mez_frontpage.png',
  'theme' => 'mez-frontpage',
  'css' => 'mez_frontpage.css',
  'regions' => array(
    'header_content' => t('Header Content'),
    'menu' => t('Menu'),
    'news' => t('News'),
    'main_1' => t('Main 1'),
    'main_2' => t('Main 2'),
    'footer' => t('Footer'),
  ),
);
