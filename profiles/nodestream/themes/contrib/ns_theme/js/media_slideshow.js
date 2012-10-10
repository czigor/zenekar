
/**
 * JS file for media slideshow
 */

(function($) {
  Drupal.behaviors.slideshow = {
    attach : function(context, settings) {
      $(window).load(function() {
        attachSlideshow($('.pane-node-field-ns-blog-post-media, .pane-node-field-ns-article-media, .pane-node-field-ns-calendar-media', context));
        function attachSlideshow(field) {
          if ($('.media-wrapper > div', field).length > 1) {
            field.append('<div class="slideshow-controls-bottom"></div>');
            $('.slideshow-controls-bottom', field).append('<div class="slideshow-controls"></div>');
            $('.slideshow-controls-bottom .slideshow-controls', field).append('<a class="prev-slide">prev</a><a class="next-slide">next</a>');
            $('.slideshow-controls-bottom', field).append('<div class="slideshow-pager"></div>');
            $('.media-wrapper', field).cycle({
              fx: 'fade',
              pager: '.slideshow-pager',
              next: '.slideshow-controls a.next-slide',
              prev: '.slideshow-controls a.prev-slide',
              timeout: 0
            });
          }
        }
      });
    }
  }
})(jQuery);