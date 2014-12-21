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
    <span><?php print $site_slogan; ?><span>
  </div>
  <div class="jumbotron jumbotron-inner">
    <?php print render($opening['node']); ?>
  </div>
</div>
<!-- /Opening section -->


<!-- News section -->
<div id="news" class="front-section">
  <div class="jumbotron jumbotron-outer"> <?php print render($news['node']);?></div>
</div>
<!-- /News section -->


<!-- About section  -->
<div id="about" class="front-section" style="background: url(<?php print $about['bg'] ?>) no-repeat center center fixed; background-size: cover;">
  <div class="jumbotron jumbotron-inner">
    <?php print render($about['node']); ?>
  </div>
</div>
<!-- /About section -->

<!-- News section -->
<div id="news2">
  <div class="jumbotron jumbotron-outer"> <?php print render($news['node']);?></div>
</div>
<!-- /News section -->

<!-- Archive section  -->
<div id="archive" class="front-section" style="background: url(<?php print $archive['bg'] ?>) no-repeat center center fixed; background-size: cover;">
  <div class="jumbotron jumbotron-inner">
  </div>
</div>
<!-- /Archive section -->