(function ($) {
  Drupal.behaviors.crossCloneAjax = {
    attach: function (context, settings) {
      $.each(Drupal.settings.views.ajaxViews, function(i, settings) {
        if (settings.view_dom_id) {
          var view = '.view-dom-id-' + settings.view_dom_id;
          if (!$(view).size()) {
            // Backward compatibility: if 'views-view.tpl.php' is old and doesn't
            // contain the 'view-dom-id-#' class, we fall back to the old way of
            // locating the view:
            view = '.view-id-' + settings.view_name + '.view-display-id-' + settings.view_display_id;
          }
        }
        $(view + ' a.crossclone-clone-js').click(function() {
          var href = $(this).attr('href');
          // This is the base.
          var ajax_path = Drupal.settings.views.ajax_path;
          var viewData = {'js': 1};
          // Construct an object using the settings defaults and then overriding
          // with data specific to the link.
          $.extend(
            viewData,
            Drupal.Views.parseQueryString($(this).attr('href')),
            // Extract argument data from the URL.
            Drupal.Views.parseViewArgs($(this).attr('href'), settings.view_base_path),
            // Settings must be used last to avoid sending url aliases to the server.
            settings
          );
          $.extend(viewData, Drupal.Views.parseViewArgs($(this).attr('href'), settings.view_base_path));
          $(this).addClass('views-throbbing');
          $.get(href, function(data) {
            $.ajax({
              url: ajax_path,
              type: 'GET',
              data: viewData,
              dataType: 'json',
              success: function(response) {
                Drupal.Views.Ajax.ajaxViewResponse(view, response);
              }});
          });
          return false;
        });
      });
    }
  }
})(jQuery);