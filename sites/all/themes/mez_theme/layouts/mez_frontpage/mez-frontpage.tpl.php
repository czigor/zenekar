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
<div id="page" class="panel-mez-frontpage clearfix panel-display">

<header id="header">
  <div class="toprow">
    <div class="inset clearfix">
      <div class="top">
        <?php if ($content['top']): ?>
          <?php print $content['top']; ?>
        <?php endif; ?>
      </div>
      <div class="top-right">
        <?php if ($content['top_right']): ?>
          <?php print $content['top_right']; ?>
        <?php endif; ?>
      </div>
    </div><!-- /.inset -->
  </div><!-- /.toprow -->

  <div id="menu" class="clearfix">
    <div class="inset">
      <?php if ($content['mymenu']): ?>
        <?php print $content['mymenu']; ?>
      <?php endif; ?>
    </div><!-- /.inset -->
  </div><!-- /#menu -->

    <div class="decor"></div>
  </header>

  <div id="main">

    <?php if ($content['news']): ?>
      <div id="news" class="panel-panel">
        <?php print $content['news']; ?>
      </div>
    <?php endif; ?>

    <?php if ($content['top_main']): ?>
      <div id="main-1" class="panel-panel">
        <?php print $content['top_main']; ?>
      </div>
    <?php endif; ?>

    <?php if ($content['top_main']): ?>
      <div id="main-2" class="panel-panel">
        <?php print $content['top_main']; ?>
      </div>
    <?php endif; ?>

  </div><!-- /#main -->

  <?php if ($content['bottom']): ?>
    <div id="footer" class="panel-col-footer panel-panel">
      <?php print $content['bottom']; ?>
    </div><!-- /#footer -->
  <?php endif; ?>

</div><!-- /#page -->
