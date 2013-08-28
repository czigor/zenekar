<?php
/**
 * @file
 * mez_seats_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mez_seats_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'seats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Seats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Seats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer mez ticket selling';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'sexy_exposed';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmazás';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['exposed_form']['options']['sexy'] = array(
    'field_concert_hall_target_id' => array(
      'needs_sexy_love' => 1,
      'sexy_number' => '0',
      'sexy_width' => '0',
    ),
    'field_seat_floor_value_i18n' => array(
      'needs_sexy_love' => 1,
      'sexy_number' => '0',
      'sexy_width' => '0',
    ),
    'field_seat_side_value_i18n' => array(
      'needs_sexy_love' => 1,
      'sexy_number' => '0',
      'sexy_width' => '0',
    ),
  );
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
  /* Mező: Tömeges műveletek: Tartalom */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
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
    'action::node_unpublish_by_keyword_action' => array(
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
          'seat::field_concert_hall' => 'seat::field_concert_hall',
        ),
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Mező: Mező: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Cím';
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Mező: Tartalom: Hivatkozás törlése */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Mező: Tartalom: Szerkesztés hivatkozása */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Szűrési feltétel: Tartalom: Közzétéve */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Szűrési feltétel: Tartalom: Típus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'seat' => 'seat',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Szűrési feltétel: Tartalom: Concert hall (field_concert_hall) */
  $handler->display->display_options['filters']['field_concert_hall_target_id']['id'] = 'field_concert_hall_target_id';
  $handler->display->display_options['filters']['field_concert_hall_target_id']['table'] = 'field_data_field_concert_hall';
  $handler->display->display_options['filters']['field_concert_hall_target_id']['field'] = 'field_concert_hall_target_id';
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
  /* Szűrési feltétel: Tartalom: Floor (field_seat_floor) (translated) */
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['id'] = 'field_seat_floor_value_i18n';
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['table'] = 'field_data_field_seat_floor';
  $handler->display->display_options['filters']['field_seat_floor_value_i18n']['field'] = 'field_seat_floor_value_i18n';
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
  /* Szűrési feltétel: Tartalom: Side (field_seat_side) (translated) */
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['id'] = 'field_seat_side_value_i18n';
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['table'] = 'field_data_field_seat_side';
  $handler->display->display_options['filters']['field_seat_side_value_i18n']['field'] = 'field_seat_side_value_i18n';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'seats';
  $export['seats'] = $view;

  return $export;
}
