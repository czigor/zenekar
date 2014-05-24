<?php

// If this template is being picked up by views to list comments, we can/need to
// use this data to manage indenting of reply-comments.
$depth_class = !empty($comment->depth) ? ' comment-depth-' . $comment->depth . ' ' : ' comment-depth-undef ';

?>
<div class="<?php print $classes . $depth_class . $zebra; ?>"<?php print $attributes; ?>>

  <div class="clearfix">

    <span class="submitted"><?php print $submitted ?></span>

    <?php if ($new): ?>
      <span class="new"><?php print drupal_ucfirst($new) ?></span>
    <?php endif; ?>

    <?php print $picture ?>

    <?php print render($title_prefix); ?>
    <h3<?php print $title_attributes; ?>><?php print $title ?></h3>
    <?php print render($title_suffix); ?>

    <div class="content"<?php print $content_attributes; ?>>

      <?php
        hide($content['links']);
        print render($content);
      ?>
      <?php if ($signature): ?>
      <div class="clearfix">
        <div>—</div>
        <?php print $signature ?>
      </div>
      <?php endif; ?>
    </div>

    <div class="comment-meta clearfix">
      <?php print render($content['links']) ?>
    </div>

  </div>

</div>
