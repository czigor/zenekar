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
  <div class="page-header-alpha grid-48 alpha omega">
    <div class="sub-region page-header-alpha-inner clearfix">
      <?php print render($content['header_alpha']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($content['aside_alpha'])): ?>
  <div class="page-aside-left <?php print (!empty($aside_alpha_class)) ? $aside_alpha_class : ''; ?>">
    <div class="sub-region page-aside-left-inner clearfix">
      <?php print render($content['aside_alpha']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($content['main'])): ?>
  <div class="page-main <?php print (!empty($main_class)) ? $main_class : ''; ?>">
    <div class="sub-region page-main-inner clearfix">
      <?php print render($content['main']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($content['aside_beta'])): ?>
  <div class="page-aside-right <?php print (!empty($aside_beta_class)) ? $aside_beta_class : ''; ?>">
    <div class="sub-region page-aside-right-inner clearfix">
      <?php print render($content['aside_beta']); ?>
    </div>
  </div>
<?php endif; ?>
    
<?php if (!empty($content['footer_main'])): ?>
  <div class="page-footer-main grid-48 alpha omega">
    <div class="sub-region page-footer-main-inner clearfix">
      <?php print render($content['footer_main']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($content['footer_alpha'])): ?>
  <div class="page-footer-alpha grid-48 alpha omega">
    <div class="sub-region page-footer-alpha-inner clearfix">
      <?php print render($content['footer_alpha']); ?>
    </div>
  </div>
<?php endif; ?>
    
<?php if (!empty($content['footer_beta'])): ?>
  <div class="page-footer-beta grid-48 alpha omega">
    <div class="sub-region page-footer-beta-inner clearfix">
      <?php print render($content['footer_beta']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($css_id)): ?>
  </div>
<?php endif; ?>
