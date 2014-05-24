(function ($) {

/**
 * Update the edit-elapsed textfield with the current elapsed time.
 */
function comment_timer_display() {
  ds = Drupal.settings.comment_timer.seconds % 60;
  dm = Math.floor(Drupal.settings.comment_timer.seconds / 60);
  dh = 0;
  if (dm >= 60) {
    dh = Math.floor(dm / 60);
    dm = dm % 60;
  }
  if (dh < 10) {
    dt = '0';
  }
  else {
    dt = '';
  }
  dt += dh;
  if (dm < 10) {
    dt += ':0' + dm;
  }
  else {
    dt += ':' + dm;
  }
  if (ds < 10) {
    dt += ':0' + ds;
  }
  else {
    dt += ':' + ds;
  }
  $("#edit-comment-timer-counter").val(dt);
}

function _comment_timer_retrieve_seconds() {
  patt = /^([0-9]{2}):([0-5][0-9]):([0-5][0-9])$/;
  result = patt.exec($("#edit-comment-timer-counter").val());
  if (result != null) {
    Drupal.settings.comment_timer.seconds = Math.round(result[1]) * 3600 + Math.round(result[2]) * 60 + Math.round(result[3]);
  }
  else {
    Drupal.settings.comment_timer.seconds = 0;
  }
}

/**
 * Count seconds.
 */
function comment_timer_timer() {
  if (!$('body').hasClass('comment-timer-running')) {
    return false;
  }
  _comment_timer_retrieve_seconds();
  Drupal.settings.comment_timer.seconds += 1;
  comment_timer_display();
  window.setTimeout(function() {
    comment_timer_timer();
  }, 1000);
}

/**
 * Start the timer when the page is fully loaded.
 */
Drupal.behaviors.comment_timer = {
  attach: function (context) {
    if ($('body').hasClass('comment-timer-processed')) {
      return;
    }
    $('body').addClass('comment-timer-processed');
    Drupal.settings.comment_timer = {};
    if (!$('body').hasClass('comment-timer-running')) {
      _comment_timer_retrieve_seconds();
      $('body').addClass('comment-timer-running');
      Drupal.settings.comment_timer.semaphore = 0;
      comment_timer_timer();
    }
    $("#edit-comment-timer-pause", context).bind('click', function() {
      if ($('body').hasClass('comment-timer-running')) {
        $('body').removeClass('comment-timer-running');
        window.setTimeout(function() {
          // Prevent multiple timers from starting at once.
          Drupal.settings.comment_timer.semaphore++;
        }, 1000);
        $(this).val(Drupal.t('Run'));
      }
      else {
        if (Drupal.settings.comment_timer.semaphore) {
          $('body').addClass('comment-timer-running');
          Drupal.settings.comment_timer.semaphore = 0;
          comment_timer_timer();
        }
        $(this).val(Drupal.t('Pause'));
      }
      return false;
    });
    $("#edit-comment-timer-reset", context).bind('click', function() {
      Drupal.settings.comment_timer.seconds = 0;
      comment_timer_display();
      return false;
    });
  }
}

})(jQuery);
