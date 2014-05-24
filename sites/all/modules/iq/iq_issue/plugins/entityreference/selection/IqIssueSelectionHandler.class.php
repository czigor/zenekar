<?php

/**
 * IQ Issue Selection handler.
 */
class IqIssueSelectionHandler extends EntityReference_SelectionHandler_Generic {

  /**
   * Implements EntityReferenceHandler::getInstance().
   */
  public static function getInstance($field, $instance = NULL, $entity_type = NULL, $entity = NULL) {
    return new IqIssueSelectionHandler($field, $instance, $entity_type, $entity);
  }

  /**
   * Implements EntityReferenceHandler::validateReferencableEntities().
   *
   * Allows the existence of references to non-accessible issues.
   * This is useful when user A creates a reference to an issue user B
   * has no access to and user B wants to edit the referencing issue
   * (or just comment it).
   *
   * The bottomline is that the autocomplete won't offer non-accessible
   * nodes but will accept them.
   */
  public function validateReferencableEntities(array $ids) {
    if ($ids) {
      if ($this->field['settings']['target_type'] == 'node') {
      $bundles = $this->field['settings']['handler_settings']['target_bundles'];
      $referenceable = db_select('node', 'n')
        ->fields('n', array('nid'))
        ->condition('n.type', $bundles)
        ->execute()
        ->fetchAllKeyed(0, 0);
      }
      return $referenceable;
    }
    return array();
  }

}
