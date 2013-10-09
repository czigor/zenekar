/**
 * @file
 * Show and hide the ticket map. 
 */

(function($) {
  Drupal.behaviors.mezConcertHall = {
    attach: function(context, settings) {
      $('.mez-concert-hall-field').click(function() {
        $('.mez-concert-hall').toggle();
      });
    }
  }
})(jQuery);
