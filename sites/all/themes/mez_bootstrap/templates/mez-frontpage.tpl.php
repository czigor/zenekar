<?php
/**
 * Template file for the frontpage.
 *
 * Available variables:
 * $content
 */
?>
<!-- Main section -->
<div id="main" class="front-section" style="background: url(<?php print $opening['bg']; ?>) no-repeat center center fixed; background-size: cover;">
	<div class="title">
		<h1><?php print $site_name; ?></h1>
		<span><?php print $site_slogan; ?></span>
	</div>
	<div id ="opening" class="jumbotron col-md-10 col-md-offset-1">
		<?php print render($opening['node']); ?>
	</div>
	<div id="concert" class="jumbotron col-md-8 col-md-offset-3">
		<?php print render($concert['node']);?>
	</div>
	<div id="news" class="jumbotron col-md-8 col-md-offset-1">
		<?php print render($news['node']);?>
	</div>
	<div id="support" class="jumbotron col-md-8 col-md-offset-3">
		<?php print render($support['node']); ?>
	</div>
	<div id="archive" class="jumbotron col-md-8 col-md-offset-1">
		<?php print render($archive['node']); ?>
	</div>
</div>
<!-- /Main section -->
