<?php
/**
 * @file
 * ns_prod_news.features.uuid_term.inc
 */

/**
 * Some nice topic region terms.
 */
 function ns_prod_news_defaultconfig_taxonomy_default_terms() {
  $terms = array();
  // Region topics.
  $terms['149a424b-72b4-1874-2559-57830f58194e'] = array(
    'name' => 'Aside',
    'description' => '<p>Side region</p>',
    'format' => 'html_editor',
    'weight' => '0',
    'uuid' => '149a424b-72b4-1874-2559-57830f58194e',
    'vocabulary_machine_name' => 'ns_prod_news_topic_region',
    'field_ns_prod_news_width' => array(
      'und' => array(
        0 => array(
          'value' => '12',
        ),
      ),
    ),
  );
  $terms['616385ed-713a-4764-5904-4a64ed03811e'] = array(
    'name' => 'Main (2 col)',
    'description' => '<p>Region that covers 2 columns.</p>',
    'format' => 'html_editor',
    'weight' => '0',
    'uuid' => '616385ed-713a-4764-5904-4a64ed03811e',
    'vocabulary_machine_name' => 'ns_prod_news_topic_region',
    'field_ns_prod_news_width' => array(
      'und' => array(
        0 => array(
          'value' => '35',
        ),
      ),
    ),
  );
  $terms['999d1976-6850-afa4-b555-398d330431fa'] = array(
    'name' => 'Main (3 col)',
    'description' => '<p>Region that covers 3 columns.</p>',
    'format' => 'html_editor',
    'weight' => '0',
    'uuid' => '999d1976-6850-afa4-b555-398d330431fa',
    'vocabulary_machine_name' => 'ns_prod_news_topic_region',
    'field_ns_prod_news_width' => array(
      'und' => array(
        0 => array(
          'value' => '49',
        ),
      ),
    ),
  );
  $terms['a3e30f46-72ed-e304-913c-3af5663d15f3'] = array(
    'name' => 'Main (1 col)',
    'description' => '<p>Region that covers 3 columns.</p>',
    'format' => 'html_editor',
    'weight' => '0',
    'uuid' => 'a3e30f46-72ed-e304-913c-3af5663d15f3',
    'vocabulary_machine_name' => 'ns_prod_news_topic_region',
    'field_ns_prod_news_width' => array(
      'und' => array(
        0 => array(
          'value' => '23',
        ),
      ),
    ),
  );
  // Front page topic
  $terms['2688176d-b733-bd44-1959-a3de9b349fff'] = array(
    'name' => 'Front page',
    'description' => '<p>The front page topic.</p>',
    'format' => 'html_editor',
    'weight' => '0',
    'uuid' => '2688176d-b733-bd44-1959-a3de9b349fff',
    'vocabulary_machine_name' => 'ns_prod_news_topic',
    'menu' => array(
      'menu_name' => 'main-menu',
      'frontpage' => TRUE,
    ),
  );
  return $terms;
}
