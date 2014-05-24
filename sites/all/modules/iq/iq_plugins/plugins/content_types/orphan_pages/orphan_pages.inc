<?php

/**
 * @file
 * Plugin to display the orphan documentation pages of a project.
 *
 * You may ask why is it needed at all: this could be done with Views, too.
 * Well, this CANNOT be done with Views - at least not in a satisfactory way.
 *
 * To display orphan book pages with Views, one has to add a relationship to the
 * book table, then check if the book page DOES NOT have any book ID for it.
 * This yields something like this in SQL parlance:
 *
 * {@code}
 * SELECT nid, title, created
 * FROM node
 * LEFT JOIN book ON node.nid = book.nid
 * LEFT JOIN node_book ON book.bid = node_book.nid
 * LEFT JOIN og_membership ON node.nid = og_membership.etid AND og_membership.entity_type = 'node'
 * @endcode
 *
 * ...then comes the node access part. And this node access part is the root of
 * all the mess. It is put on the WHERE clause something like this:
 *
 * @code
 * AND EXISTS (SELECT na.nid
 *   FROM node_access na
 *   WHERE (na.gid = 0 AND na.realm = 'all') OR
 *     (na.gid = $project_nid AND na.realm = 'og_access:node' AND na.grant_view >= 1 AND node.nid = na.nid))
 * AND EXISTS (SELECT na.nid
 *   FROM node_access na
 *   WHERE (na.gid = 0 AND na.realm = 'all') OR
 *     (na.gid = $project_nid AND na.realm = 'og_access:node' AND na.grant_view >= 1 AND node_book.nid = na.nid))
 * @endcode
 *
 * This means node access check is not only done on the to-be-displayed (or not)
 * documentation page itself, but on the book it belongs to as well. But wait,
 * we wanted to display those pages that do not belong to any book; this means
 * node_book.nid will be NULL, this means node access check on it will
 * definitely fail, so in the end we will not get what we wanted. Simply, ha? :)
 *
 * The other solution would be turning off node access checks on the affected
 * view, and let Panels (or the sitebuilder) decide if this view is accessible
 * or not. Anyway, this node access flag is buried deep in the Views UI and may
 * cause a real PITA if not taken into account, so we just decided to create a
 * CTools content type plugin instead. Since our SELECT does not have a second
 * JOIN on the node table (because its eventually unneeded), node access check
 * will not jump in for the book nodes, but will kick in for the orphan book
 * page nodes - which is definitely needed.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Orphan pages'),
  'description' => t('List of orphan documentation pages of a project.'),
  'content_types' => 'iq_plugins_content_type_orphan_pages',
  'render callback' => 'iq_plugins_content_type_orphan_pages_render',
  'edit form' => 'iq_plugins_content_type_orphan_pages_edit_form',
  'admin title' => 'Orphan pages',
  'icon' => drupal_get_path('module', 'ctools') . '/plugins/content_types/node_context/icon_node.png',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => array(t('Node'), -9),
);


/**
 * Run-time rendering of the body of the block.
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
function iq_plugins_content_type_orphan_pages_render($subtype, $conf, $args, $context) {
  $block = new stdClass;
  $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Orphan pages');
  if (empty($context->data) || $context->keyword != 'node') {
    $block->content = 'No data.';
    return $block;
  }

  $query = db_select('node', 'n')
    ->fields('n', array('nid', 'title'))
    ->condition('status', 1)
    ->condition('n.type', 'documentation');
  $og = $query->innerJoin('og_membership', 'ogm', '%alias.etid = n.nid AND %alias.entity_type = :node', array(':node' => 'node'));
  $query->condition($og . '.gid', $context->data->nid);
  $query->condition($og . '.group_type', 'node');

  $book = $query->leftJoin('book', 'b', '%alias.nid = n.nid');
  $query->isNull($book . '.bid')
    ->orderBy('n.created', 'DESC');
  $result = $query->execute();

  $items = array();
  foreach ($result as $node) {
    $items[] = l(check_plain($node->title), 'node/' . $node->nid);
  }

  if (empty($items)) {
    $block->content = t('There are no orphan documentation pages.');
  }
  else {
    $block->content = array(
      '#theme' => 'item_list',
      '#type' => 'ul',
      '#items' => $items,
    );
  }
  return $block;
}

/**
 * Edit form callback.
 */
function iq_plugins_content_type_orphan_pages_edit_form($form, &$form_state) {
  // Empty function body, the form already contains the context setting widget.
  return $form;
}
