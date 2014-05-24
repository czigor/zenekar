<?php

/**
 * @file
 * Plugin to display the kanban board.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Kanban board'),
  'description' => t('The name of the user who last updated the referenced node.'),
  'content_types' => 'iq_plugins_content_type_kanban_board',
  'render callback' => 'iq_plugins_content_type_kanban_board_render',
  'edit form' => 'iq_plugins_content_type_kanban_board_edit_form',
  'admin title' => 'Kanban board',
  'required context' => new ctools_context_optional(t('Node'), 'node'),
  'category' => array(t('IssueQ'), -10),
);


/**
 * Render the Kanban board: read-only without context, r/w with project context.
 *
 * @param $subtype
 * @param $conf
 *   Pane settings.
 * @param $args
 * @param $context
 *   Context object if available.
 *
 * @return stdClass
 *   The block object which will be rendered in the content region of the pane.
 */
function iq_plugins_content_type_kanban_board_render($subtype, $conf, $args, $context) {
  $block = new stdClass;

  $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Kanban board');

  $project_nid = NULL;
  $user_is_customer = FALSE;
  // Check if context exists and is a project node.
  if (!empty($context->data) && $context->keyword == 'node' && $context->data->type == 'project') {
    $project_nid = $context->data->nid;
    $og_roles = array_flip(og_get_user_roles('node', $project_nid));
    if (isset($og_roles['customer'])) {
      $user_is_customer = TRUE;
    }
  }

  $tree = taxonomy_get_tree(taxonomy_vocabulary_machine_name_load('issue_status')->vid, 0, 2, TRUE);
  $kanban_board = array();
  // Prepare the kanban board structure.
  // First upper level kanban terms.
  foreach ($tree as $term) {
    $kanban_term = field_get_items('taxonomy_term', $term, 'field_issue_status_kanban');
    if (empty($kanban_term[0]['value'])) {
      continue;
    }
    // Display terms' translation instead of the terms themselves.
    $term->name = i18n_string('taxonomy:term:' . $term->tid . ':name', $term->name);
    if ($term->depth === 0) {
      $limitation = field_get_items('taxonomy_term', $term, 'field_issue_status_limit');
      if (!$limitation) {
        $limitation = -1;
      }
      else {
        $limitation = $limitation[0]['value'];
      }
      $kanban_board[$term->tid] = array(
        '#weight' => $term->weight,
        '#limit' => $limitation,
        '#name' => $term->name,
        '#tid' => $term->tid,
      );
    }
  }
  // Then child terms.
  $two_rows_header = FALSE;
  foreach ($tree as $term) {
    if ($term->depth != 1) {
      continue;
    }
    $kanban_term = field_get_items('taxonomy_term', $term, 'field_issue_status_kanban');
    if (empty($kanban_term[0]['value'])) {
      continue;
    }
    $two_rows_header = TRUE;
    $limitation = field_get_items('taxonomy_term', $term, 'field_issue_status_limit');
    if (!$limitation) {
      $limitation = -1;
    }
    $kanban_board[$term->parents[0]]['children'][$term->tid] = array(
      '#weight' => $term->weight,
      '#name' => $term->name,
      '#tid' => $term->tid,
      '#parent' => $term->parents[0],
    );
    // For a child term a -1 limitation means unlimited only if the parent term
    // is also unlimited. Otherwise the parent limitation applies to the total
    // of the child terms. In this case the '#limit' of the child will not be
    // set. If the child limitation is a finite number then it overrides the
    // parent limitation in every case.
    if ($kanban_board[$term->parents[0]]['#limit'] == -1) {
      $kanban_board[$term->parents[0]]['children'][$term->tid]['#limit'] = $limitation;
    }
  }

  $rows = array();

  // Header.
  $row = array();
  foreach ($kanban_board as $tid => $term) {
    $data = $term['#name'];
    if (isset($term['#limit']) && $term['#limit'] != -1) {
      $data .= ' (' . t('Limit: @limit', array('@limit' => $term['#limit'])) . ')';
    }
    $column = array(
      'data' => $data,
      'class' => array('header', 'kanban-board-' . $tid),
    );
    if (isset($term['children']) && count($term['children']) > 1) {
      $column['colspan'] = count($term['children']);
    }
    else {
      if ($two_rows_header) {
        $column['rowspan'] = 2;
      }
    }
    $row[] = $column;
  }
  $rows[] = $row;

  // Header second row.
  if ($two_rows_header) {
    $row = array();
    foreach ($kanban_board as $term) {
      if (isset($term['children'])) {
        foreach ($term['children'] as $child_tid => $child_term) {
          $data = $child_term['#name'];
          if (isset($child_term['#limit']) && $child_term['#limit'] == -1) {
            $data .= ' (' . t('Limit: None') . ')';
          }
          elseif (isset($child_term['#limit'])) {
            $data .= ' (' . t('Limit: @limit', array('@limit' => $child_term['#limit'])) . ')';
          }
          $column = array(
            'data' => $data,
            'class' => array('header', 'kanban-board-' . $child_tid),
          );
          $row[] = $column;
        }
      }
    }
    $rows[] = $row;
  }

  // The issues themselves.
  $first_term = TRUE;
  $row = array();
  foreach ($kanban_board as $tid => $term) {
    $droppable = !empty($project_nid);
    if ($user_is_customer && !$first_term) {
      $droppable = FALSE;
    }
    if (isset($term['children'])) {
      foreach ($term['children'] as $child_tid => $child_term) {
        $row[] = array(
          'data' => _iq_kanban_board_column_issues($child_tid, $project_nid),
          'class' => 'kanban-column' . ($droppable ? ' kanban-droppable' : ''),
          'data-limit' => array(isset($term['#limit']) && $term['#limit'] != -1 ? $term['#limit'] : 'none'),
          'data-tid' => $child_term['#tid'],
          'parent' => $child_term['#parent'],
        );
      }
    }
    else {
      $row[] = array(
        'data' => _iq_kanban_board_column_issues($tid, $project_nid),
        'class' => 'kanban-column' . ($droppable ? ' kanban-droppable' : ''),
        'data-limit' => array(isset($term['#limit']) && $term['#limit'] != -1 ? $term['#limit'] : 'none'),
        'data-tid' => $term['#tid'],
      );
    }
    $first_term = FALSE;
  }
  $rows[] = $row;

  $block->content = array(
    '#theme' => 'table',
    '#header' => array(),
    '#rows' => $rows,
    '#attributes' => array(
      'id' => 'kanban-board',
    ),
    '#attached' => array(
      'js' => array(

      ),
      'css' => array(
        drupal_get_path('module', 'iq_kanban_board') . '/plugins/content_types/kanban_board/kanban_board.css',
      ),
    ),
  );
  if ($project_nid) {
    $block->content['#attached']['library'] = array(
      array('system', 'ui.draggable'),
      array('system', 'ui.droppable'),
      array('system', 'ui.sortable'),
    );
    $block->content['#attached']['js'] = array(
      drupal_get_path('module', 'iq_kanban_board') . '/plugins/content_types/kanban_board/kanban_board.js',
    );
  }
  return $block;
}

/**
 * Edit form callback. Needed to be able to select the (optional) context.
 */
function iq_plugins_content_type_kanban_board_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Render array for a given issue status column on the kanban board.
 *
 * @param integer $tid
 *   The taxonomy term id of the issue status.
 * @param integer $project_id
 *   The {node}.nid of the project.
 */
function _iq_kanban_board_column_issues($tid, $project_id = NULL) {
  $term = taxonomy_term_load($tid);
  $range = field_get_items('taxonomy_term', $term, 'field_issue_status_limit');
  // Display only the first 10 issues only for statuses without limits.
  if (!$range) {
    $range = 50;
  }
  else {
    $range = $range[0]['value'];
  }
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'issue')
    ->propertyCondition('status', 1);
  // The project filter should be the very first one, as the base table of EFQ's
  // SELECT is the first fieldCondition()'s table. If project filtering is
  // needed (eg. a specific project's kanban board is to be displayed), and this
  // filter is anywhere below (ie. not the first one), then stale issues may
  // creep in (ie. unrelated issues from other projects may appear on the given
  // project's kanban board).
  if ($project_id) {
    $query->fieldCondition('og_group_ref', 'target_id', $project_id);
  }
  $result = $query->fieldCondition('field_issue_kanban', 'value', 1)
    ->fieldCondition('field_issue_status_term', 'tid', $tid)
    ->fieldOrderBy('field_issue_business_value', 'value', 'DESC')
    ->range(0, $range)
    // This plugin is considered to be used in two environments:
    // - Without a project ID all issues should be displayed in the column,
    //   regardless the $user has access to them or not. The node_access('view')
    //   call later on checks if the $user has access, and if she doesn't, the
    //   issue data is not displayed at all.
    // - With a project ID, in which case Page manager is considered to limit
    //   access to the pane to users in that project.
    // In either case, EFQ should not be limited only to issues that the $user
    // can see.
    ->addTag('DANGEROUS_ACCESS_CHECK_OPT_OUT')
    ->execute();

  if (!isset($result['node'])) {
    return array();
  }
  else {
    $nids = array_keys($result['node']);
  }
  $issues = node_load_multiple($nids);
  $output = array();
  foreach ($issues as $node) {
    $item = array('#theme' => 'iq_kanban_board_item');
    $item_class = 'kanban-item';
    $data_nid = '';
    if (node_access('view', $node)) {
      $project = node_load($node->og_group_ref[LANGUAGE_NONE][0]['target_id']);
      $assigned_to = field_get_items('node', $node, 'field_issue_assigned_to');
      if ($assigned_to) {
        $account = user_load($assigned_to[0]['target_id']);
        $assigned_to = l($account->name, 'user/' . $account->uid);
      }
      $estimate = field_get_items('node', $node, 'field_issue_estimate');
      // Hey Houston, we got a problem here. Looks like
      // $GLOBALS['language_content'] is not properly set right here (should be
      // Hungarian when viewing the kanban board of a Hungarian project, but it
      // is English), so title.module cannot and does not properly load the node
      // title: it loads the English version, which is coming out of nowhere
      // anyway. So the workaround is loading the node title from the
      // title_field using the project's language, instead of the default.
      $issue_title = field_get_items('node', $node, 'title_field', $project->language);
      $item['#title'] = l($issue_title[0]['value'], 'node/' . $node->nid);
      $item['#project'] = l($project->title, 'node/' . $project->nid);
      $item['#assigned_to'] = empty($assigned_to) ? NULL : $assigned_to;
      $item['#estimate'] = empty($estimate) ? NULL : $estimate[0]['value'];
      // Kanban board without project id should have no drag-and-drop
      // functionality.
      if ($project_id) {
        $item_class .= ' kanban-draggable';
      }
      $data_nid = ' data-nid="' . $node->nid . '"';
    }
    else {
      $item['#title'] = t('N/A');
      $item['#project'] = t('N/A');
    }
    $output[] = array(
      'issue' => $item,
      '#prefix' => '<div class="' . $item_class . '"' . $data_nid . '>',
      '#suffix' => '</div>',
    );
  }
  return $output;
}
