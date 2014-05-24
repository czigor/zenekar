<?php
/**
 * @file table.tpl.php
 *
 * Template file of the custom table style plugin.
 *
 * Variables available:
 * - $panes: available panes inside this region.
 */
?>
<div class="panes-wrapper style-table <?php print $classes; ?>">
  <?php foreach ($panes as $pane_row): ?>
    <div class="<?php print $pane_row['classes']; ?>">
      <?php foreach ($pane_row['content'] as $pane): ?>
        <div class="<?php print $pane['classes']; ?> ">
          <?php print $pane['content']; ?>
        </div>
      <?php endforeach; ?>
    </div>
  <?php endforeach; ?>
</div>