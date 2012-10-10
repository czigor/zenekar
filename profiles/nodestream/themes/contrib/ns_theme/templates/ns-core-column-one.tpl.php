<?php
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

<?php if (!empty($content['header_beta']) || !empty($content['main']) || !empty($content['footer_alpha'])): ?>
  <div class="page-main-wrapper grid-49 alpha omega">
<?php endif; ?>

  <?php if (!empty($content['header_beta'])): ?>
    <div class="page-header-beta grid-49 alpha omega">
      <div class="page-header-beta-inner">
        <?php print render($content['header_beta']); ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['main'])): ?>
    <div class="page-main grid-49 alpha omega">
      <div class="page-main-inner">
        <?php print render($content['main']); ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['footer_alpha'])): ?>
    <div class="page-footer-alpha grid-49 alpha omega">
      <div class="page-footer-alpha-inner">
        <?php print render($content['footer_alpha']); ?>
      </div>
    </div>
  <?php endif; ?>

<?php if (!empty($content['header_beta']) || !empty($content['main']) || !empty($content['footer_alpha'])): ?>
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
