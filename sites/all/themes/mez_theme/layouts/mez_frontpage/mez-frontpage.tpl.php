<?php
/**
 * @file
 * Template for the wangaru page layout.
 *
 * This template provides a two column panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['header']: Content in the headerrow.
 *   - $content['menu']: Content in the menu row.
 *   - $content['news']: Content in the news row.
 *   - $content['main_1']: Content in the main_1 row.
 *   - $content['main_2']: Content in the main_2 row.
 *   - $content['footer']: Content in the footer row.
 */
?>
<?php // if (!empty($css_id)) { print "id=\"$css_id\""; } ?>
<div id="page" class="panel-2col-stacked-custom clearfix panel-display">

  <?php // TRADITIONAL HEADER (with logo, signup links, search, etc). ?>
  <header id="header" role="banner">
    <div class="toprow">
      <div class="inset clearfix">

        <?php // THIS IS THE PANELS HEADER CONTENT OUTPUT. // ?>
        <?php if ($content['header_content']): ?>
          <?php print $content['header_content']; ?>
        <?php endif; ?>

      </div><!-- /.inset -->
    </div><!-- /.toprow -->

    <div id="header-menu" class="clearfix">
      <div class="inset">
        <?php if ($content['menu']): ?>
          <?php print $content['menu']; ?>
        <?php endif; ?>
      </div><!-- /.inset -->
    </div><!-- /#header-menu -->

    <div class="decor"></div>
  </header>

  <div id="main">

    <?php if ($content['news']): ?>
      <div id="news" class="panel-panel">
        <?php print $content['news']; ?>
      </div>
    <?php endif; ?>

    <?php if ($content['main_1']): ?>
      <div id="main-1" class="panel-panel">
        <?php print $content['main_1']; ?>
      </div>
    <?php endif; ?>
    
    <?php if ($content['main_2']): ?>
      <div id="main-2" class="panel-panel">
        <?php print $content['main_2']; ?>
      </div>
    <?php endif; ?>

    <?php if ($content['footer']): ?>
      <div id="footer" class="panel-col-footer panel-panel">
        <?php print $content['footer']; ?>
      </div><!-- /#footer -->
    <?php endif; ?>

  </div><!-- /#main -->

</div><!-- /#page -->
