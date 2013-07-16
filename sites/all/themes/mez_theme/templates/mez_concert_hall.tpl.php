<?php
/**
 * @file Template file for displaying the concert hall ticket map.
 *
 */
?>


<div class="mez-concert-hall" style="position: relative; width:<?php print $concert_hall_details['xsize'];?>px; height:<?php print $concert_hall_details['ysize'];?>px;">
<?php print $concert_hall_details['markup']; ?>

  <?php foreach($seats as $pid=> $seat): ?>
    <div class="mez-ticket mez-ticket-<?php print $pid . ' ' . $seat['status'];?>" style="position:absolute; top: <?php print $seat['xcoord'];?>px; left: <?php print $seat['ycoord'];?>px;">
      <a href="mez-ticket-to-basket/<?php print $concert_nid; ?>/<?php print $pid;?>"></a>
    </div>
  <?php endforeach; ?>

</div> <!-- .mez-concert-hall -->
