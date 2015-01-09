<?php
/**
 * Template file for the frontpage.
 *
 * Available variables:
 * $content
 */
?>
<!-- Opening section -->
<div id="opening" class="front-section" style="background: url(<?php print $opening['bg']; ?>) no-repeat center center fixed; background-size: cover;">
  <div class="title">
    <h1><?php print $site_name; ?></h1>
    <span><?php print $site_slogan; ?></span>
  </div>
  <div class="jumbotron jumbotron-inner">
    <?php print render($opening['node']); ?>
  </div>
</div>
<!-- /Opening section -->


<!-- News section -->
<div id="news">
  <div class="jumbotron jumbotron-outer"> <?php print render($news['node']);?></div>
</div>
<!-- /News section -->


<!-- Support section  -->
<div id="about" class="front-section" style="background: url(<?php print $support['bg'] ?>) no-repeat center center fixed; background-size: cover;">
  <div class="jumbotron jumbotron-inner">
    <?php print render($support['node']); ?>
  </div>
</div>
<!-- /Support section -->

<!-- Concert section -->
<div id="concert">
  <div class="jumbotron jumbotron-outer"> <?php print render($concert['node']);?></div>
</div>
<!-- /Concert section -->

<!-- Archive section  -->
<div id="archive" class="front-section" style="background: url(<?php print $archive['bg'] ?>) no-repeat center center fixed; background-size: cover;">
  <div class="jumbotron jumbotron-inner">
    <?php print render($archive['node']); ?>
  </div>
</div>
<!-- /Archive section -->
