<?php
/**
 * @file iq-project-page.tpl.php.
 *
 * Template for iq_project_page custom layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top_1st_col']: Content in first column of the top row,
 *   - $content['top_2nd_col']: Content in second column of the top row,
 *   - $content['top_3rd_col']: Content in third column of the top row,
 *   - $content['middle_top']: Content in top section of the middle row
 *   - $content['middle_bottom_1st_col']: Content in first column of the bottom section of the middle row
 *   - $content['middle_bottom_2nd_col']: Content in second column of the bottom section of the middle row
 *   - $content['middle_bottom_3rd_col']: Content in third column of the bottom section of the middle row
 *   - $content['middle_bottom_4th_col']: Content in fourth column of the bottom section of the middle row
 *   - $content['bottom_1st_col']: Content in first column of the bottom row
 *   - $content['bottom_2nd_col']: Content in second column of the bottom row
 *   - $content['bottom_3rd_col']: Content in third column of the bottom row
 */
?>
<div class="panel-display panel-iq-project-page clearfix"<?php if (!empty($css_id)): ?> id="<?php print $css_id; ?>"<?php endif; ?>>

  <div class="panel-top">
    <?php print $content['top']; ?>
  </div>

  <div class="panel-middle">
    <div class="col col-1 first">
      <div class="inside">
        <?php print $content['middle_1st_col']; ?>
      </div>
    </div>
    <div class="col col-2">
      <div class="inside">
        <?php print $content['middle_2nd_col']; ?>
      </div>
    </div>
    <div class="col col-3 last">
      <div class="inside">
        <?php print $content['middle_3rd_col']; ?>
      </div>
    </div>
    <div class="clearer"></div>
  </div>

  <div class="panel-bottom">
    <?php print $content['bottom']; ?>
  </div>

</div>
