<?php
/**
 * @file Template file for displaying the concert hall ticket map.
 *
 */
?>
<?php if (!empty($concert_hall_details) && !empty($seats)) : ?>
  <div class="mez-concert-hall-field"><?php print t('Ticket selling');?></div>
  <div class="mez-concert-hall" style="position: relative; width:<?php print $concert_hall_details['xsize'];?>px; height:<?php print $concert_hall_details['ysize'];?>px;">
    <?php print $concert_hall_details['markup']; ?>
    <?php if (!empty($seats)) : ?>
      <?php foreach($seats as $pid => $seat): ?>
        <?php print $seat; ?>
      <?php endforeach; ?>
    <?php endif;?>
  </div> <!-- .mez-concert-hall -->
<?php endif; ?>
