<?php

/**
 * @file
 * This layout is intended to be used inside the page content pane. Thats why
 * there is not wrapper div by default.
 */
?>
<?php if (!empty($css_id)): ?>
  <div id="<?php print $css_id; ?>" class="clearfix">
<?php endif; ?>

<?php if (!empty($content['header_alpha'])): ?>
  <div class="page-header-alpha grid-49 alpha omega">
    <div class="page-header-alpha-inner">
      <?php print render($content['header_alpha']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($content['header_beta']) || !empty($content['main']) || !empty($content['aside_alpha']) || !empty($content['footer_alpha'])): ?>
  <div class="page-main-wrapper grid-35 alpha">
<?php endif; ?>

  <div class="page-main-content-wrapper clearfix">

    <?php if (!empty($content['header_beta'])): ?>
      <div class="page-header-beta grid-35 alpha">
        <div class="page-header-beta-inner">
          <?php print render($content['header_beta']); ?>
        </div>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['main'])): ?>
      <div class="page-main grid-23 alpha">
        <div class="page-main-inner">
          <?php print render($content['main']); ?>
        </div>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['aside_alpha'])): ?>
      <div class="page-aside-alpha grid-12 omega">
        <div class="page-aside-alpha-inner">
          <?php print render($content['aside_alpha']); ?>
        </div>
      </div>
    <?php endif; ?>

  </div>

  <?php if (!empty($content['footer_alpha'])): ?>
    <div class="page-footer-alpha grid-35 alpha omega">
      <div class="page-footer-alpha-inner">
        <?php print render($content['footer_alpha']); ?>
      </div>
    </div>
  <?php endif; ?>

<?php if (!empty($content['header_beta']) || !empty($content['main']) || !empty($content['aside_alpha']) || !empty($content['footer_alpha'])): ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['aside_beta'])): ?>
  <div class="page-aside-beta grid-14 omega">
    <div class="page-aside-beta-inner">
      <?php print render($content['aside_beta']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($content['footer_beta'])): ?>
  <div class="page-footer-beta grid-49 alpha omega">
    <div class="page-footer-beta-inner">
      <?php print render($content['footer_beta']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($css_id)): ?>
  </div>
<?php endif; ?>
