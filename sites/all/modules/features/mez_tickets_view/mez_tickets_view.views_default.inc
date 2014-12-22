<?php
/**
 * @file
 * mez_tickets_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mez_tickets_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mez_tickets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'MEZ Tickets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tickets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any commerce_product entity of bundle ticket';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmazás';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'product_id' => 'product_id',
    'title_1' => 'title_1',
    'field_seat_floor' => 'field_seat_floor',
    'field_seat_side' => 'field_seat_side',
    'field_seat_row' => 'field_seat_row',
    'field_seat_number' => 'field_seat_number',
    'commerce_price' => 'commerce_price',
    'commerce_stock' => 'commerce_stock',
  );
  $handler->display->display_options['style_options']['default'] = 'product_id';
  $handler->display->display_options['style_options']['info'] = array(
    'product_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seat_floor' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seat_side' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seat_row' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seat_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_price' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_stock' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Kapcsolat: Entity Reference: Hivatkozott entitás */
  $handler->display->display_options['relationships']['field_concert_target_id']['id'] = 'field_concert_target_id';
  $handler->display->display_options['relationships']['field_concert_target_id']['table'] = 'field_data_field_concert';
  $handler->display->display_options['relationships']['field_concert_target_id']['field'] = 'field_concert_target_id';
  $handler->display->display_options['relationships']['field_concert_target_id']['label'] = 'concert';
  $handler->display->display_options['relationships']['field_concert_target_id']['required'] = TRUE;
  /* Kapcsolat: Entity Reference: Hivatkozott entitás */
  $handler->display->display_options['relationships']['field_seat_target_id']['id'] = 'field_seat_target_id';
  $handler->display->display_options['relationships']['field_seat_target_id']['table'] = 'field_data_field_seat';
  $handler->display->display_options['relationships']['field_seat_target_id']['field'] = 'field_seat_target_id';
  $handler->display->display_options['relationships']['field_seat_target_id']['label'] = 'seat';
  $handler->display->display_options['relationships']['field_seat_target_id']['required'] = TRUE;
  /* Kapcsolat: Entity Reference: Hivatkozott entitás */
  $handler->display->display_options['relationships']['field_concert_hall_target_id']['id'] = 'field_concert_hall_target_id';
  $handler->display->display_options['relationships']['field_concert_hall_target_id']['table'] = 'field_data_field_concert_hall';
  $handler->display->display_options['relationships']['field_concert_hall_target_id']['field'] = 'field_concert_hall_target_id';
  $handler->display->display_options['relationships']['field_concert_hall_target_id']['relationship'] = 'field_seat_target_id';
  $handler->display->display_options['relationships']['field_concert_hall_target_id']['label'] = 'concert_hall';
  $handler->display->display_options['relationships']['field_concert_hall_target_id']['required'] = TRUE;
  /* Mező: Tömeges műveletek: Commerce Product */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'status' => 'status',
          'ticket::commerce_price' => 'ticket::commerce_price',
          'ticket::commerce_stock' => 'ticket::commerce_stock',
          'ticket::field_concert' => 'ticket::field_concert',
          'ticket::field_seat' => 'ticket::field_seat',
        ),
      ),
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Mező: Commerce Product: Cikkszám */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Mező: Commerce Product: Termékazonosító */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['label'] = 'ID';
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 1;
  /* Mező: Tartalom: Cím */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_concert_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Concert';
  /* Mező: Tartalom: Floor */
  $handler->display->display_options['fields']['field_seat_floor']['id'] = 'field_seat_floor';
  $handler->display->display_options['fields']['field_seat_floor']['table'] = 'field_data_field_seat_floor';
  $handler->display->display_options['fields']['field_seat_floor']['field'] = 'field_seat_floor';
  $handler->display->display_options['fields']['field_seat_floor']['relationship'] = 'field_seat_target_id';
  $handler->display->display_options['fields']['field_seat_floor']['type'] = 'i18n_list_default';
  /* Mező: Tartalom: Side */
  $handler->display->display_options['fields']['field_seat_side']['id'] = 'field_seat_side';
  $handler->display->display_options['fields']['field_seat_side']['table'] = 'field_data_field_seat_side';
  $handler->display->display_options['fields']['field_seat_side']['field'] = 'field_seat_side';
  $handler->display->display_options['fields']['field_seat_side']['relationship'] = 'field_seat_target_id';
  $handler->display->display_options['fields']['field_seat_side']['type'] = 'i18n_list_default';
  /* Mező: Tartalom: Row */
  $handler->display->display_options['fields']['field_seat_row']['id'] = 'field_seat_row';
  $handler->display->display_options['fields']['field_seat_row']['table'] = 'field_data_field_seat_row';
  $handler->display->display_options['fields']['field_seat_row']['field'] = 'field_seat_row';
  $handler->display->display_options['fields']['field_seat_row']['relationship'] = 'field_seat_target_id';
  $handler->display->display_options['fields']['field_seat_row']['label'] = 'Sor';
  $handler->display->display_options['fields']['field_seat_row']['type'] = 'i18n_list_default';
  /* Mező: Tartalom: Seat number */
  $handler->display->display_options['fields']['field_seat_number']['id'] = 'field_seat_number';
  $handler->display->display_options['fields']['field_seat_number']['table'] = 'field_data_field_seat_number';
  $handler->display->display_options['fields']['field_seat_number']['field'] = 'field_seat_number';
  $handler->display->display_options['fields']['field_seat_number']['relationship'] = 'field_seat_target_id';
  /* Mező: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = 'Ár';
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_raw_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Mező: Commerce Product: Stock */
  $handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['label'] = 'Készlet';
  $handler->display->display_options['fields']['commerce_stock']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Szűrési feltétel: Commerce Product: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Szűrési feltétel: Commerce Product: Stock (commerce_stock) */
  $handler->display->display_options['filters']['commerce_stock_value']['id'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['filters']['commerce_stock_value']['field'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['group'] = 1;
  $handler->display->display_options['filters']['commerce_stock_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['operator_id'] = 'commerce_stock_value_op';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['label'] = 'Stock';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['operator'] = 'commerce_stock_value_op';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['identifier'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Szűrési feltétel: Commerce Product: Price (commerce_price:amount) */
  $handler->display->display_options['filters']['commerce_price_amount']['id'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['filters']['commerce_price_amount']['field'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['group'] = 1;
  $handler->display->display_options['filters']['commerce_price_amount']['exposed'] = TRUE;
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['operator_id'] = 'commerce_price_amount_op';
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['label'] = 'Price';
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['operator'] = 'commerce_price_amount_op';
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['identifier'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Szűrési feltétel: Mező: Concert (field_concert) */
  $handler->display->display_options['filters']['field_concert_target_id']['id'] = 'field_concert_target_id';
  $handler->display->display_options['filters']['field_concert_target_id']['table'] = 'field_data_field_concert';
  $handler->display->display_options['filters']['field_concert_target_id']['field'] = 'field_concert_target_id';
  $handler->display->display_options['filters']['field_concert_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_concert_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_concert_target_id']['expose']['operator_id'] = 'field_concert_target_id_op';
  $handler->display->display_options['filters']['field_concert_target_id']['expose']['label'] = 'Concert';
  $handler->display->display_options['filters']['field_concert_target_id']['expose']['operator'] = 'field_concert_target_id_op';
  $handler->display->display_options['filters']['field_concert_target_id']['expose']['identifier'] = 'field_concert_target_id';
  $handler->display->display_options['filters']['field_concert_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_concert_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Szűrési feltétel: Tartalom: Floor (field_seat_floor) (translated) */
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['id'] = 'field_seat_floor_value_i18n';
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['table'] = 'field_data_field_seat_floor';
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['field'] = 'field_seat_floor_value_i18n';
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['relationship'] = 'field_seat_target_id';
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['expose']['operator_id'] = 'field_seat_floor_value_i18n_op';
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['expose']['label'] = 'Floor';
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['expose']['operator'] = 'field_seat_floor_value_i18n_op';
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['expose']['identifier'] = 'field_seat_floor_value_i18n';
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Szűrési feltétel: Tartalom: Row (field_seat_row) (translated) */
  $handler->display->display_options['filters']['field_seat_row_value_i18n']['id'] = 'field_seat_row_value_i18n';
  $handler->display->display_options['filters']['field_seat_row_value_i18n']['table'] = 'field_data_field_seat_row';
  $handler->display->display_options['filters']['field_seat_row_value_i18n']['field'] = 'field_seat_row_value_i18n';
  $handler->display->display_options['filters']['field_seat_row_value_i18n']['relationship'] = 'field_seat_target_id';
  $handler->display->display_options['filters']['field_seat_row_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_seat_row_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seat_row_value_i18n']['expose']['operator_id'] = 'field_seat_row_value_i18n_op';
  $handler->display->display_options['filters']['field_seat_row_value_i18n']['expose']['label'] = 'Row';
  $handler->display->display_options['filters']['field_seat_row_value_i18n']['expose']['operator'] = 'field_seat_row_value_i18n_op';
  $handler->display->display_options['filters']['field_seat_row_value_i18n']['expose']['identifier'] = 'field_seat_row_value_i18n';
  $handler->display->display_options['filters']['field_seat_row_value_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_seat_row_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Szűrési feltétel: Tartalom: Seat number (field_seat_number) (translated) */
  $handler->display->display_options['filters']['field_seat_number_value_i18n']['id'] = 'field_seat_number_value_i18n';
  $handler->display->display_options['filters']['field_seat_number_value_i18n']['table'] = 'field_data_field_seat_number';
  $handler->display->display_options['filters']['field_seat_number_value_i18n']['field'] = 'field_seat_number_value_i18n';
  $handler->display->display_options['filters']['field_seat_number_value_i18n']['relationship'] = 'field_seat_target_id';
  $handler->display->display_options['filters']['field_seat_number_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_seat_number_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seat_number_value_i18n']['expose']['operator_id'] = 'field_seat_number_value_i18n_op';
  $handler->display->display_options['filters']['field_seat_number_value_i18n']['expose']['label'] = 'Seat number';
  $handler->display->display_options['filters']['field_seat_number_value_i18n']['expose']['operator'] = 'field_seat_number_value_i18n_op';
  $handler->display->display_options['filters']['field_seat_number_value_i18n']['expose']['identifier'] = 'field_seat_number_value_i18n';
  $handler->display->display_options['filters']['field_seat_number_value_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_seat_number_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Szűrési feltétel: Tartalom: Side (field_seat_side) (translated) */
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['id'] = 'field_seat_side_value_i18n';
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['table'] = 'field_data_field_seat_side';
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['field'] = 'field_seat_side_value_i18n';
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['relationship'] = 'field_seat_target_id';
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['expose']['operator_id'] = 'field_seat_side_value_i18n_op';
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['expose']['label'] = 'Side';
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['expose']['operator'] = 'field_seat_side_value_i18n_op';
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['expose']['identifier'] = 'field_seat_side_value_i18n';
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Szűrési feltétel: Tartalom: Concert hall (field_concert_hall) */
  $handler->display->display_options['filters']['field_concert_hall_target_id']['id'] = 'field_concert_hall_target_id';
  $handler->display->display_options['filters']['field_concert_hall_target_id']['table'] = 'field_data_field_concert_hall';
  $handler->display->display_options['filters']['field_concert_hall_target_id']['field'] = 'field_concert_hall_target_id';
  $handler->display->display_options['filters']['field_concert_hall_target_id']['relationship'] = 'field_seat_target_id';
  $handler->display->display_options['filters']['field_concert_hall_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_concert_hall_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_concert_hall_target_id']['expose']['operator_id'] = 'field_concert_hall_target_id_op';
  $handler->display->display_options['filters']['field_concert_hall_target_id']['expose']['label'] = 'Concert hall';
  $handler->display->display_options['filters']['field_concert_hall_target_id']['expose']['operator'] = 'field_concert_hall_target_id_op';
  $handler->display->display_options['filters']['field_concert_hall_target_id']['expose']['identifier'] = 'field_concert_hall_target_id';
  $handler->display->display_options['filters']['field_concert_hall_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_concert_hall_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tickets';
  $export['mez_tickets'] = $view;

  return $export;
}
