<?php

declare(strict_types=1);

namespace Drupal\mez_content\Hook;

use Drupal\Core\Hook\Attribute\Hook;
use Drupal\node\NodeInterface;

class Entity {

  /**
   * Implements hook_ENTITY_TYPE_presave().
   */
  #[Hook('node_presave')]
  public function nodePresave(NodeInterface $node): void {
    if ($node->bundle() === 'composer') {
      $title = $node->get('field_family_name')->value;
      if ($node->get('field_comma_separator')->value) {
        $title .= ', ';
      }
      else {
        $title .= ' ';
      }
      foreach ($node->get('field_given_name') as $given_name) {
        $title .= $given_name->value . ' ';
      }
      if (trim($title) == '') {
        $title = 'NONAME';
      }
      $node->setTitle(trim($title));

      if ($node->label() == '') {
        $node->setTitle('NONAME');
      }
    }

    if ($node->bundle() === 'piece') {
      $node->setTitle($node->get('field_composer')->entity->getTitle() . ': ' . $node->get('field_piece_title')->value);
    }
  }

}