<?php
?>
<div class="<?php print $classes; ?> clearfix">
  <?php if ($view_mode == 'search_result'): ?>
    <div class="node-type"><?php print node_type_get_name($node); ?></div>
  <?php endif; ?>

  <?php if (!$page && !empty($title)): ?>
    <h2 class="node-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>

  <?php print render($content); ?>

  <?php if (!empty($links)): ?>
    <div class="node-links">
      <?php print render($links); ?>
    </div>
  <?php endif; ?>
</div>
