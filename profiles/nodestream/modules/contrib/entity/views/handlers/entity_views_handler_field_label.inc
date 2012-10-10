<?php

/**
 * @file
 * Contains the entity_views_handler_field_label class.
 */

/**
 * Field handler to present the label of the entity.
 *
 * @ingroup views_field_handlers
 */
class entity_views_handler_field_label extends views_handler_field_entity {

  /**
   * Add a link to entity option.
   *
   * @see views_handler_field::option_definition()
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['link_to_entity'] = array('default' => $this->definition['has uri']);
    return $options;
  }

  /**
   * Add link to entity option to the options form.
   *
   * @see views_handler_field::options_form()
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    if ($this->definition['has uri']) {
      $form['link_to_entity'] = array(
        '#title' => t("Link this field to it's entity"),
        '#description' => t("Enable to override this field's links."),
        '#type' => 'checkbox',
        '#default_value' => !empty($this->options['link_to_entity']),
      );
    }
  }

  /**
   * Render the label using the entity_label() function.
   *
   * @see views_handler_field::render()
   */
  function render($values) {
    if (($entity = $this->get_value($values)) && entity_access('view', $this->entity_type, $entity)) {
      if ($this->definition['has uri'] && $this->options['link_to_entity'] &&  $uri = entity_uri($this->entity_type, $entity)) {
        $this->options['alter']['path'] = $uri['path'];
        $this->options['alter']['make_link'] = TRUE;
      }
      return entity_label($this->entity_type, $entity);
    }
  }
}
