<?php
/**
 * Template file for the frontpage.
 *
 * Available variables:
 * $content
 */
?>
<!-- first section - Home -->
<div id="home" class="home" style="background: url(<?php print $content[0]['bg']; ?>) no-repeat center center fixed; ">
  <div class="text-vcenter">
    <?php print render($content[0]['node']); ?>
    <a href="#about" class="btn btn-default btn-lg">Continue</a>
  </div>
</div>
<!-- /first section -->


