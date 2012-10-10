<?php
/**
 * @file
 * ns_text.features.inc
 */

/**
 * Implements hook_default_wysiwyg_profile().
 */
function ns_text_default_wysiwyg_profile() {
  $items = array();
  $items['html_editor'] = entity_import('wysiwyg_profile', '{
    "format" : "html_editor",
    "editor" : "ckeditor",
    "settings" : {
      "default" : 1,
      "user_choose" : 0,
      "show_toggle" : 1,
      "theme" : "advanced",
      "language" : "en",
      "buttons" : {
        "default" : {
          "Bold" : 1,
          "Italic" : 1,
          "JustifyRight" : 1,
          "BulletedList" : 1,
          "NumberedList" : 1,
          "Undo" : 1,
          "Redo" : 1,
          "Link" : 1,
          "Superscript" : 1,
          "Subscript" : 1,
          "Blockquote" : 1,
          "Cut" : 1,
          "Copy" : 1,
          "Paste" : 1,
          "PasteText" : 1,
          "PasteFromWord" : 1,
          "ShowBlocks" : 1,
          "RemoveFormat" : 1,
          "SpecialChar" : 1,
          "Format" : 1,
          "Find" : 1,
          "Replace" : 1,
          "Maximize" : 1,
          "SpellChecker" : 1
        },
        "drupal" : { "media" : 1 }
      },
      "toolbar_loc" : "top",
      "toolbar_align" : "left",
      "path_loc" : "bottom",
      "resizing" : 1,
      "verify_html" : 1,
      "preformatted" : 0,
      "convert_fonts_to_spans" : 1,
      "remove_linebreaks" : 1,
      "apply_source_formatting" : 0,
      "paste_auto_cleanup_on_paste" : 0,
      "block_formats" : "p,h2,h3,h4,h5,h6",
      "css_setting" : "none",
      "css_path" : "",
      "css_classes" : ""
    }
  }');
  return $items;
}
