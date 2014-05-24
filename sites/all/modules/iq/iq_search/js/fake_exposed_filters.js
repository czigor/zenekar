/**
 * @file
 * Pass data from fake exposed form to the real one.
 */

(function ($) {
    Drupal.behaviors.fakeExposedFilters = {
        attach: function (context, settings) {
            $(document).ready(function () {
                // Set some important variable.
                var fake_form_id = 'form#fake-views-exposed-search-multi-form ';
                var real_form_id = 'form#views-exposed-form-search-multi-page ';

                // Author field.
                var fake_author_field = fake_form_id + 'select[name="search_api_multi_author"]';
                var real_author_field = real_form_id + 'input[name="search_api_multi_author"]';
                if ($(real_author_field).length) {
                    $(real_author_field).val($(fake_author_field).val());
                    $(fake_author_field).change(function () {
                        $(real_author_field).val($(this).val());
                        $(real_form_id).submit();
                    });
                }
                // Project field.
                var fake_project_field = fake_form_id + 'select[name="search_api_multi_project"]';
                var real_project_field = real_form_id + 'input[name="search_api_multi_project"]';
                if ($(real_project_field).length) {
                    $(real_project_field).val($(fake_project_field).val());
                    $(fake_project_field).change(function () {
                        $(real_project_field).val($(this).val());
                        $(real_form_id).submit();
                    });
                }
                // Node type field.
                var fake_node_type_field = fake_form_id + 'select[name="search_api_multi_node_type"]';
                var real_node_type_field = real_form_id + 'input[name="search_api_multi_node_type"]';
                if ($(real_node_type_field).length) {
                    $(real_node_type_field).val($(fake_node_type_field).val());
                    $(fake_node_type_field).change(function () {
                        $(real_node_type_field).val($(this).val());
                        $(real_form_id).submit();
                    });
                }
            });
        }
    }
})(jQuery);
