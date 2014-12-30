/**
 * @file
 * Set a randomly chosen background image.
 */

(function($) {
  Drupal.behaviors.mezBackground = {
    attach: function(context, settings) {
      $('body').css("background-image", "url(" + Drupal.settings.mezBg + ")");
    }
  };
})(jQuery);
