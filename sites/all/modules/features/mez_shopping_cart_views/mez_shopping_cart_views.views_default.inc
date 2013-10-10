<?php
/**
 * @file
 * mez_shopping_cart_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mez_shopping_cart_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'commerce_cart_form_mez';
  $view->description = 'Display a shopping cart update form.';
  $view->tag = 'commerce';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Commerce cart form for MEZ';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Shopping cart';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmazás';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'commerce_display_path' => 'commerce_display_path',
    'line_item_title' => 'line_item_title',
    'commerce_unit_price' => 'commerce_unit_price',
    'edit_quantity' => 'edit_quantity',
    'edit_delete' => 'edit_delete',
    'commerce_total' => 'commerce_total',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'commerce_display_path' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'line_item_title' => array(
      'align' => '',
      'separator' => '',
    ),
    'commerce_unit_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_quantity' => array(
      'align' => '',
      'separator' => '',
    ),
    'edit_delete' => array(
      'align' => '',
      'separator' => '',
    ),
    'commerce_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Lábléc: Commerce Line Item: Line item summary */
  $handler->display->display_options['footer']['line_item_summary']['id'] = 'line_item_summary';
  $handler->display->display_options['footer']['line_item_summary']['table'] = 'commerce_line_item';
  $handler->display->display_options['footer']['line_item_summary']['field'] = 'line_item_summary';
  $handler->display->display_options['footer']['line_item_summary']['label'] = 'Cart summary';
  $handler->display->display_options['footer']['line_item_summary']['info'] = array(
    'quantity' => 0,
    'total' => 'total',
  );
  /* Kapcsolat: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
  /* Kapcsolat: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['label'] = 'product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['required'] = TRUE;
  /* Kapcsolat: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_seat_target_id']['id'] = 'field_seat_target_id';
  $handler->display->display_options['relationships']['field_seat_target_id']['table'] = 'field_data_field_seat';
  $handler->display->display_options['relationships']['field_seat_target_id']['field'] = 'field_seat_target_id';
  $handler->display->display_options['relationships']['field_seat_target_id']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['field_seat_target_id']['label'] = 'seat';
  $handler->display->display_options['relationships']['field_seat_target_id']['required'] = TRUE;
  /* Mező: Mező: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_seat_target_id';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Mező: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['commerce_unit_price']['label'] = 'Price';
  $handler->display->display_options['fields']['commerce_unit_price']['element_class'] = 'price';
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  /* Mező: Commerce Line Item: Delete button */
  $handler->display->display_options['fields']['edit_delete']['id'] = 'edit_delete';
  $handler->display->display_options['fields']['edit_delete']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['edit_delete']['field'] = 'edit_delete';
  $handler->display->display_options['fields']['edit_delete']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['edit_delete']['label'] = 'Remove';
  /* Rendezési szempont: Commerce Line Item: Line item ID */
  $handler->display->display_options['sorts']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['sorts']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['sorts']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['sorts']['line_item_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Szövegkörnyezeti szűrő: Commerce Order: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['order_id']['exception']['title'] = 'Minden';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  /* Szűrési feltétel: Commerce Line Item: Line item is of a product line item type */
  $handler->display->display_options['filters']['product_line_item_type']['id'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['product_line_item_type']['field'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['filters']['product_line_item_type']['value'] = '1';
  $handler->display->display_options['filters']['product_line_item_type']['group'] = 0;
  $export['commerce_cart_form_mez'] = $view;

  $view = new view();
  $view->name = 'mez_shopping_cart_summary';
  $view->description = 'Cart line item summary displayed during checkout.';
  $view->tag = 'commerce';
  $view->base_table = 'commerce_order';
  $view->human_name = 'MEZ shopping cart summary';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Shopping cart';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmazás';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'line_item_title' => 'line_item_title',
    'commerce_unit_price' => 'commerce_unit_price',
    'quantity' => 'quantity',
    'commerce_total' => 'commerce_total',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'line_item_title' => array(
      'align' => '',
      'separator' => '',
    ),
    'commerce_unit_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'quantity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'commerce_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
    ),
  );
  /* Lábléc: Commerce Order: Order total */
  $handler->display->display_options['footer']['order_total']['id'] = 'order_total';
  $handler->display->display_options['footer']['order_total']['table'] = 'commerce_order';
  $handler->display->display_options['footer']['order_total']['field'] = 'order_total';
  /* Kapcsolat: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
  /* Kapcsolat: Commerce Line item: Referenced products */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['label'] = 'product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['required'] = TRUE;
  /* Kapcsolat: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_seat_target_id']['id'] = 'field_seat_target_id';
  $handler->display->display_options['relationships']['field_seat_target_id']['table'] = 'field_data_field_seat';
  $handler->display->display_options['relationships']['field_seat_target_id']['field'] = 'field_seat_target_id';
  $handler->display->display_options['relationships']['field_seat_target_id']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['field_seat_target_id']['label'] = 'seat';
  $handler->display->display_options['relationships']['field_seat_target_id']['required'] = TRUE;
  /* Mező: Mező: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_seat_target_id';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Mező: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['commerce_unit_price']['label'] = 'Price';
  $handler->display->display_options['fields']['commerce_unit_price']['element_class'] = 'price';
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Rendezési szempont: Commerce Line Item: Line item ID */
  $handler->display->display_options['sorts']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['sorts']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['sorts']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['sorts']['line_item_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Szövegkörnyezeti szűrő: Commerce Order: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['order_id']['exception']['title'] = 'Minden';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  /* Szűrési feltétel: Commerce Line Item: Line item is of a product line item type */
  $handler->display->display_options['filters']['product_line_item_type']['id'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['product_line_item_type']['field'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['filters']['product_line_item_type']['value'] = '1';
  $handler->display->display_options['filters']['product_line_item_type']['group'] = 0;
  $export['mez_shopping_cart_summary'] = $view;

  return $export;
}
