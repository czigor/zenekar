<?php
/**
 * @file
 * ns_prod_news.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ns_prod_news_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ns_prod_news_c_l_a_2_col';
  $mini->category = '';
  $mini->admin_title = 'Children style: left attachment two columns';
  $mini->admin_description = 'A mini panel that shows a promo with it\'s attachment to the left in a small grid.';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'Region',
      'keyword' => 'region',
      'name' => 'entity:taxonomy_term',
      'id' => 1,
    ),
    2 => array(
      'identifier' => 'Topic',
      'keyword' => 'topic',
      'name' => 'entity:taxonomy_term',
      'id' => 2,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'ns-core-content-column-two';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-73';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '<',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '24',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_5',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-73'] = $pane;
    $display->panels['left'][0] = 'new-73';
    $pane = new stdClass();
    $pane->pid = 'new-74';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '>',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '36',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_10',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $display->content['new-74'] = $pane;
    $display->panels['left'][1] = 'new-74';
    $pane = new stdClass();
    $pane->pid = 'new-75';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '>',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '24',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '<',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '36',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_8',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $display->content['new-75'] = $pane;
    $display->panels['left'][2] = 'new-75';
    $pane = new stdClass();
    $pane->pid = 'new-76';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_article';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-76'] = $pane;
    $display->panels['right'][0] = 'new-76';
    $pane = new stdClass();
    $pane->pid = 'new-77';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_kicker';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $display->content['new-77'] = $pane;
    $display->panels['right'][1] = 'new-77';
    $pane = new stdClass();
    $pane->pid = 'new-78';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $display->content['new-78'] = $pane;
    $display->panels['right'][2] = 'new-78';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-73';
  $mini->display = $display;
  $export['ns_prod_news_c_l_a_2_col'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ns_prod_news_c_t_a_2_col';
  $mini->category = '';
  $mini->admin_title = 'Children style: Top attachment two columns.';
  $mini->admin_description = 'A mini panel that shows child promos with it\'s attachment on top in a small grid.';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'Region',
      'keyword' => 'region',
      'name' => 'entity:taxonomy_term',
      'id' => 1,
    ),
    2 => array(
      'identifier' => 'Topic',
      'keyword' => 'topic',
      'name' => 'entity:taxonomy_term',
      'id' => 2,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'ns-core-content-column-one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'main' => NULL,
    ),
    'left' => array(
      'style' => 'default',
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-79';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '=',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '49',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_24',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-79'] = $pane;
    $display->panels['main'][0] = 'new-79';
    $pane = new stdClass();
    $pane->pid = 'new-80';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '=',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '35',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_17',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $display->content['new-80'] = $pane;
    $display->panels['main'][1] = 'new-80';
    $pane = new stdClass();
    $pane->pid = 'new-81';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '=',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '23',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_11',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $display->content['new-81'] = $pane;
    $display->panels['main'][2] = 'new-81';
    $pane = new stdClass();
    $pane->pid = 'new-82';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '=',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '12',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_11',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $display->content['new-82'] = $pane;
    $display->panels['main'][3] = 'new-82';
    $pane = new stdClass();
    $pane->pid = 'new-83';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_article';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $display->content['new-83'] = $pane;
    $display->panels['main'][4] = 'new-83';
    $pane = new stdClass();
    $pane->pid = 'new-84';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_kicker';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $display->content['new-84'] = $pane;
    $display->panels['main'][5] = 'new-84';
    $pane = new stdClass();
    $pane->pid = 'new-85';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = '';
    $display->content['new-85'] = $pane;
    $display->panels['main'][6] = 'new-85';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['ns_prod_news_c_t_a_2_col'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ns_prod_news_contributor';
  $mini->category = '';
  $mini->admin_title = 'Contributor';
  $mini->admin_description = 'Contributor';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'ns_core_naked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-86';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_contributor_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_4',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-86'] = $pane;
    $display->panels['main'][0] = 'new-86';
    $pane = new stdClass();
    $pane->pid = 'new-87';
    $pane->panel = 'main';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $display->content['new-87'] = $pane;
    $display->panels['main'][1] = 'new-87';
    $pane = new stdClass();
    $pane->pid = 'new-88';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="contributor-email"><a href="mailto:%node:field-ns-contributor-email">%node:field-ns-contributor-email</a>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-88'] = $pane;
    $display->panels['main'][2] = 'new-88';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-87';
  $mini->display = $display;
  $export['ns_prod_news_contributor'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ns_prod_news_p_l_a';
  $mini->category = '';
  $mini->admin_title = 'Parent style: Left attachment';
  $mini->admin_description = 'A mini panel that shows a promo with it\'s attachment to the left.';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'Region',
      'keyword' => 'region',
      'name' => 'entity:taxonomy_term',
      'id' => 1,
    ),
    2 => array(
      'identifier' => 'Topic',
      'keyword' => 'topic',
      'name' => 'entity:taxonomy_term',
      'id' => 2,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'ns-core-content-column-two';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'left' => array(
      'style' => 'default',
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-89';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '<',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '24',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_11',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-89'] = $pane;
    $display->panels['left'][0] = 'new-89';
    $pane = new stdClass();
    $pane->pid = 'new-90';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '>',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '24',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_17',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $display->content['new-90'] = $pane;
    $display->panels['left'][1] = 'new-90';
    $pane = new stdClass();
    $pane->pid = 'new-91';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_article';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-91'] = $pane;
    $display->panels['right'][0] = 'new-91';
    $pane = new stdClass();
    $pane->pid = 'new-92';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_kicker';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $display->content['new-92'] = $pane;
    $display->panels['right'][1] = 'new-92';
    $pane = new stdClass();
    $pane->pid = 'new-93';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $display->content['new-93'] = $pane;
    $display->panels['right'][2] = 'new-93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-89';
  $mini->display = $display;
  $export['ns_prod_news_p_l_a'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ns_prod_news_p_t_a';
  $mini->category = '';
  $mini->admin_title = 'Parent style: Top attachment';
  $mini->admin_description = 'A mini panel that shows a parent promo with it\'s attachment on top.';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'Region',
      'keyword' => 'region',
      'name' => 'entity:taxonomy_term',
      'id' => 1,
    ),
    2 => array(
      'identifier' => 'Topic',
      'keyword' => 'topic',
      'name' => 'entity:taxonomy_term',
      'id' => 2,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'ns-theme-content-column-one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'main' => NULL,
    ),
    'left' => array(
      'style' => 'default',
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-94';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '=',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '49',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_48',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-94'] = $pane;
    $display->panels['main'][0] = 'new-94';
    $pane = new stdClass();
    $pane->pid = 'new-95';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '=',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '35',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_34',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $display->content['new-95'] = $pane;
    $display->panels['main'][1] = 'new-95';
    $pane = new stdClass();
    $pane->pid = 'new-96';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '=',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '23',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_22',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $display->content['new-96'] = $pane;
    $display->panels['main'][2] = 'new-96';
    $pane = new stdClass();
    $pane->pid = 'new-97';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_media';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'int_comparision',
          'settings' => array(
            'operator' => '=',
            'value1' => '%topic:field-ns-prod-news-width',
            'value2' => '12',
            'substitute' => 1,
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'formatter_settings' => array(
        'file_view_mode' => 'ns_styles_grid_11',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $display->content['new-97'] = $pane;
    $display->panels['main'][3] = 'new-97';
    $pane = new stdClass();
    $pane->pid = 'new-98';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_article';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $display->content['new-98'] = $pane;
    $display->panels['main'][4] = 'new-98';
    $pane = new stdClass();
    $pane->pid = 'new-99';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_kicker';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $display->content['new-99'] = $pane;
    $display->panels['main'][5] = 'new-99';
    $pane = new stdClass();
    $pane->pid = 'new-100';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ns_prod_news_promo_lead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = '';
    $display->content['new-100'] = $pane;
    $display->panels['main'][6] = 'new-100';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['ns_prod_news_p_t_a'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ns_prod_news_teaser';
  $mini->category = '';
  $mini->admin_title = 'Web Teaser';
  $mini->admin_description = 'This is a teaser panel pan that can be used for various teasers';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'precision_naked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
    'style' => 'naked',
    'main' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-101';
    $pane->panel = 'main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'requiredcontext_entity:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-101'] = $pane;
    $display->panels['main'][0] = 'new-101';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-101';
  $mini->display = $display;
  $export['ns_prod_news_teaser'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ns_prod_news_topic_panel';
  $mini->category = '';
  $mini->admin_title = 'Topic Panel';
  $mini->admin_description = 'A panel displaying all articles in a topic';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array(
    0 => array(
      'identifier' => 'topic',
      'keyword' => 'topic',
      'name' => 'entity_from_field:field_ns_prod_news_topic-node-taxonomy_term',
      'context' => 'requiredcontext_entity:node_1',
      'delta' => '0',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'ns_core_column_three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_alpha' => NULL,
      'header_beta' => NULL,
      'main' => NULL,
      'aside_alpha' => NULL,
      'aside_beta' => NULL,
      'footer_alpha' => NULL,
      'footer_beta' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'aside_alpha';
    $pane->type = 'views_panes';
    $pane->subtype = 'ns_prod_news_topic-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
      'arguments' => array(
        'uuid' => '149a424b-72b4-1874-2559-57830f58194e',
      ),
      'context' => array(
        0 => 'relationship_entity_from_field:field_ns_prod_news_topic-node-taxonomy_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['aside_alpha'][0] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'header_alpha';
    $pane->type = 'views_panes';
    $pane->subtype = 'ns_prod_news_topic-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
      'arguments' => array(
        'uuid' => '999d1976-6850-afa4-b555-398d330431fa',
      ),
      'context' => array(
        0 => 'relationship_entity_from_field:field_ns_prod_news_topic-node-taxonomy_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['header_alpha'][0] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'header_beta';
    $pane->type = 'views_panes';
    $pane->subtype = 'ns_prod_news_topic-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
      'arguments' => array(
        'uuid' => '616385ed-713a-4764-5904-4a64ed03811e',
      ),
      'context' => array(
        0 => 'relationship_entity_from_field:field_ns_prod_news_topic-node-taxonomy_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['header_beta'][0] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'ns_prod_news_topic-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
      'arguments' => array(
        'uuid' => 'a3e30f46-72ed-e304-913c-3af5663d15f3',
      ),
      'context' => array(
        0 => 'relationship_entity_from_field:field_ns_prod_news_topic-node-taxonomy_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['main'][0] = 'new-11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['ns_prod_news_topic_panel'] = $mini;

  return $export;
}
