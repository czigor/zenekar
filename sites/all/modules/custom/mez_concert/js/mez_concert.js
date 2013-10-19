/**
 * @file
 * Toggle performers visibility. 
 */

(function($) {
  Drupal.behaviors.mezConcertProgramme = {
    attach: function(context, settings) {
      $('.field-name-field-piece').mouseover(function() {
        $(this).next().find('.field-name-field-performers').show();
      });
      $('.field-name-field-piece').mouseout(function() {
        $(this).next().find('.field-name-field-performers').hide();
      });
    }
  }
})(jQuery);
