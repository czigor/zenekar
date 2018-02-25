(function ($) {
  'use strict';

  $(function () {
    $('#edit-eu-cookie-compliance-use-bare-css').click(euCookieComplianceAdminBareCss);
    euCookieComplianceAdminBareCss();
  });

  function euCookieComplianceAdminBareCss() {
    var $formSelectors = $('.form-item-eu-cookie-compliance-popup-text-hex, .form-item-eu-cookie-compliance-popup-bg-hex, .form-item-eu-cookie-compliance-popup-height, .form-item-eu-cookie-compliance-popup-width');
    if ($('#edit-eu-cookie-compliance-use-bare-css').is(':checked')) {
      $formSelectors.hide();
    } else {
      $formSelectors.show();
    }
  }

})(jQuery);
