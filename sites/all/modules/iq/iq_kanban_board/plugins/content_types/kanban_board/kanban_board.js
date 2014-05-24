(function ($) {
  Drupal.behaviors.kanbanBoard = {
    attach: function(context, settings) {
      // FIXME: This method is deprecated.
      $('#kanban-board td.kanban-droppable').disableSelection();

      var originalParent = null;
      var tid = null;
      var limit = null;
      var num = null;

      // Drag and drop issues with sortable functionality.
      $('#kanban-board td.kanban-droppable').sortable({
        connectWith: '#kanban-board td.kanban-droppable',
        placeholder: 'ui-placeholder',
        revert: true,
        start: function(event, ui){
          originalParent = ui.helper.parent();
        },
        receive: function(event, ui) {
          // Get the target column's tid.
          tid = $(this).attr('data-tid');
          limit = $(this).attr('data-limit');
          num = 0;
          if ($(this).attr('parent') != undefined) {
            $.each($('#kanban-board .kanban-droppable[parent="' + $(this).attr('parent') + '"]'), function(index, data) {
              num += $(data)[0].childNodes.length;
            });
          }
          else {
            num = $(this).children().length;
          }
        },
        stop: function(event, ui) {
          var item = ui.item;

          // Only happens if the sorting happens in the same column.
          if (tid === null) {
            tid = $(this).attr('data-tid');
          }

          // Check if the target column has a limit.
          // Restore item to its original place if the limit exceeded.
          if (limit !== 'none' && limit < num) {
            item.animate({
              'top': 0,
              'left': 0
            });
            // TODO: Display an alert in this case?
            return false;
          }

          $('#page-title').after('<div class="kanban-saving-throbber">' + Drupal.t('Saving...') + '</div>');

          var order = new Array();

          $.each($('#kanban-board .kanban-droppable[data-tid="' + tid + '"] .kanban-draggable:not(.ui-sortable-placeholder)'), function(index, data) {
            order.push($(data).attr('data-nid'));
          });

          // Update the dropped node.
          $.ajax({
            url: Drupal.settings.basePath + 'issueq/kanban-board/update',
            type: 'POST',
            dataType: 'JSON',
            data: {
              'nid': item.attr('data-nid'),
              'tid': tid,
              'order': order
            },
            success: function(data) {
              $('.kanban-saving-throbber').remove();

              if (data !== '') {
                data = JSON.parse(data);
              }
              else {
                console.log('error');
                data.status = false;
              }

              if (data.status == false) {
                // If the limit exceeded or something else disallowed happened,
                // restore the item to its original position.
                if (originalParent !== null) {
                  // FIXME: Does this really restore the item to the original
                  // position, or to the bottom of that status column?
                  originalParent.append(item);
                }
              }
            }
          });
        }
      });
    }
  };
})(jQuery);