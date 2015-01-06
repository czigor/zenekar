<?php
/**
 * @file
 * mez_settings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mez_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_a-zenekarrl:node/2
  $menu_links['main-menu_a-zenekarrl:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'A zenekarról',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_a-zenekarrl:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_application:eform/submit/application
  $menu_links['main-menu_application:eform/submit/application'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eform/submit/application',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Application',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_application:eform/submit/application',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_kapcsolat:contact',
  );
  // Exported menu link: main-menu_bngsz-nzet:media-store-browser
  $menu_links['main-menu_bngsz-nzet:media-store-browser'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-store-browser',
    'router_path' => 'media-store-browser',
    'link_title' => 'Böngésző nézet',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_bngsz-nzet:media-store-browser',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_mdiatr:media-store',
  );
  // Exported menu link: main-menu_browser-view:media-store-browser
  $menu_links['main-menu_browser-view:media-store-browser'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-store-browser',
    'router_path' => 'media-store-browser',
    'link_title' => 'Browser view',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_browser-view:media-store-browser',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_media-store:media-store',
  );
  // Exported menu link: main-menu_concerts:concerts
  $menu_links['main-menu_concerts:concerts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'concerts',
    'router_path' => 'concerts',
    'link_title' => 'Concerts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_concerts:concerts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_gykezel:issues
  $menu_links['main-menu_gykezel:issues'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'issues',
    'router_path' => 'issues',
    'link_title' => 'Ügykezelő',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_gykezel:issues',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_history:node/2
  $menu_links['main-menu_history:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_history:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_the-orchestra:node/2',
  );
  // Exported menu link: main-menu_hrek:news
  $menu_links['main-menu_hrek:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'Hírek',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_hrek:news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_issues:issues
  $menu_links['main-menu_issues:issues'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'issues',
    'router_path' => 'issues',
    'link_title' => 'Issues',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_issues:issues',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_gykezel:issues',
  );
  // Exported menu link: main-menu_jelentkezs:eform/submit/application
  $menu_links['main-menu_jelentkezs:eform/submit/application'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eform/submit/application',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Jelentkezés',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_jelentkezs:eform/submit/application',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_kapcsolat:contact',
  );
  // Exported menu link: main-menu_kapcsolat:contact
  $menu_links['main-menu_kapcsolat:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Kapcsolat',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_kapcsolat:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_koncertek:concerts
  $menu_links['main-menu_koncertek:concerts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'concerts',
    'router_path' => 'concerts',
    'link_title' => 'Koncertek',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_koncertek:concerts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_list-view:media-store
  $menu_links['main-menu_list-view:media-store'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-store',
    'router_path' => 'media-store',
    'link_title' => 'List view',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_list-view:media-store',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_media-store:media-store',
  );
  // Exported menu link: main-menu_lista-nzet:media-store
  $menu_links['main-menu_lista-nzet:media-store'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-store',
    'router_path' => 'media-store',
    'link_title' => 'Lista nézet',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_lista-nzet:media-store',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_mdiatr:media-store',
  );
  // Exported menu link: main-menu_mdiatr:media-store
  $menu_links['main-menu_mdiatr:media-store'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-store',
    'router_path' => 'media-store',
    'link_title' => 'Médiatár',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_mdiatr:media-store',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -41,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_media-admin-list:media
  $menu_links['main-menu_media-admin-list:media'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media',
    'router_path' => 'media',
    'link_title' => 'Media admin list',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_media-admin-list:media',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_mdiatr:media-store',
  );
  // Exported menu link: main-menu_media-store:media-store
  $menu_links['main-menu_media-store:media-store'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-store',
    'router_path' => 'media-store',
    'link_title' => 'Media store',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_media-store:media-store',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_news:news
  $menu_links['main-menu_news:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_news:news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_prbaterem:node/79
  $menu_links['main-menu_prbaterem:node/79'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/79',
    'router_path' => 'node/%',
    'link_title' => 'Próbaterem',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_prbaterem:node/79',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_kapcsolat:contact',
  );
  // Exported menu link: main-menu_projects:projects
  $menu_links['main-menu_projects:projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_projects:projects',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_gykezel:issues',
  );
  // Exported menu link: main-menu_support-the-orchestra:node/13
  $menu_links['main-menu_support-the-orchestra:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Support the orchestra!',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_support-the-orchestra:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_the-orchestra:node/2',
  );
  // Exported menu link: main-menu_the-orchestra:node/2
  $menu_links['main-menu_the-orchestra:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'The orchestra',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_the-orchestra:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_tmogats:node/13
  $menu_links['main-menu_tmogats:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Támogatás',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_tmogats:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_a-zenekarrl:node/2',
  );
  // Exported menu link: main-menu_trtnelem:node/2
  $menu_links['main-menu_trtnelem:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Történelem',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_trtnelem:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_a-zenekarrl:node/2',
  );
  // Exported menu link: menu-mez-user_logout:user/logout
  $menu_links['menu-mez-user_logout:user/logout'] = array(
    'menu_name' => 'menu-mez-user',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-mez-user_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-mez-user_user-account:user
  $menu_links['menu-mez-user_user-account:user'] = array(
    'menu_name' => 'menu-mez-user',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-mez-user_user-account:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A zenekarról');
  t('Application');
  t('Browser view');
  t('Böngésző nézet');
  t('Concerts');
  t('History');
  t('Hírek');
  t('Issues');
  t('Jelentkezés');
  t('Kapcsolat');
  t('Koncertek');
  t('List view');
  t('Lista nézet');
  t('Logout');
  t('Media admin list');
  t('Media store');
  t('Médiatár');
  t('News');
  t('Projects');
  t('Próbaterem');
  t('Support the orchestra!');
  t('The orchestra');
  t('Támogatás');
  t('Történelem');
  t('User account');
  t('Ügykezelő');


  return $menu_links;
}
