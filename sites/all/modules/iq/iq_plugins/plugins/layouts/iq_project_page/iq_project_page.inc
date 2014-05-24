<?php

/**
 * @file
 * Plugin to provide custom project page layout for IssueQ.
 */

$plugin = array(
  'title' => t('IssueQ project page'),
  'category' => t('Custom'),
  'icon' => 'iq_project_page.png',
  'theme' => 'iq_project_page',
  'css' => 'iq_project_page.css',
  'regions' => array(
    'top' => t('Top'),
    'middle_1st_col' => t('Middle - 1st col'),
    'middle_2nd_col' => t('Middle - 2nd col'),
    'middle_3rd_col' => t('Middle - 3rd col'),
    'bottom' => t('Bottom'),
  )
);
