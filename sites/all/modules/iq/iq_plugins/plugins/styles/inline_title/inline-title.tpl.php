<?php
/**
 * @file inline-title.tpl.php
 *
 * This template is a modification of the original panels-pane.tpl.php.
 *
 * Variables available:
 * - $pane->type: the content type inside this pane
 * - $pane->subtype: The subtype, if applicable. If a view it will be the
 *   view name; if a node it will be the nid, etc.
 * - $title: The title of the content
 * - $content: The actual content
 * - $links: Any links associated with the content
 * - $more: An optional 'more' link (destination only)
 * - $admin_links: Administrative links associated with the content
 * - $feeds: Any feed icons or associated with the content
 * - $display: The complete panels display object containing all kinds of
 *   data including the contexts and all of the other panes being displayed.
 */
?>
<div class="<?php print $classes; ?> inline-title" <?php print $id; ?>>
  <?php if ($title): ?>
    <div<?php print $title_attributes; ?>><?php print $title; ?></div>
  <?php endif; ?>
  <div class="pane-content"><?php print $content; ?></div>
  <div class="clearer"></div>
</div>