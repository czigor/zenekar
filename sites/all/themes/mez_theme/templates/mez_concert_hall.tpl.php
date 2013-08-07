<?php
/**
 * @file Template file for displaying the concert hall ticket map.
 *
 */
?>


<div class="mez-concert-hall" style="position: relative; width:<?php print $concert_hall_details['xsize'];?>px; height:<?php print $concert_hall_details['ysize'];?>px;">
<?php print $concert_hall_details['markup']; ?>

  <?php foreach($seats as $pid => $seat): ?>
    <div id="mez-ticket-<?php print $pid; ?>" class="mez-ticket <?php print $seat['status']; ?>" style="position:absolute; top: <?php print $seat['xcoord'];?>px; left: <?php print $seat['ycoord'];?>px;">
      <?php print $seat['link']; ?>
    </div>
  <?php endforeach; ?>

</div> <!-- .mez-concert-hall -->
