<?php

/**
 * @file
 * This layout is intended to be used for a view with content that uses two
 * columns, e.g a blog post preview where the image is floated to the left
 * and the rest of the content is on the right.
 */
?>
<?php if (!empty($css_id)): ?>
  <div id="<?php print $css_id; ?>" class="clearfix">
<?php endif; ?>

<?php if (!empty($content['left'])): ?>
  <div class="content-column-two-w-wrappers-left alpha">
    <div class="content-column-two-w-wrappers-left-inner clearfix">
      <?php print render($content['left']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($content['right'])): ?>
  <div class="content-column-two-w-wrappers-right omega">
    <div class="content-column-two-w-wrappers-right-inner clearfix">
      <?php print render($content['right']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($css_id)): ?>
  </div>
<?php endif; ?>
