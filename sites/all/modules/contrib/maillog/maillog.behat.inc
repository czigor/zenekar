<?php

/**
 * @file
 * Behat subcontext for testing whether specific emails have been sent.
 *
 * When using the DrupalExtension with Behat, this file will be autoloaded, and
 * the included step definitions will be available automatically.
 *
 * @see http://behat.org
 * @see http://drupal.org/project/drupalextension
 */

use Behat\Gherkin\Node\TableNode;
use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Drupal\DrupalDriverManager;

/**
 * Behat subcontext for testing whether specific emails have been sent.
 */
class Maillog implements DrupalSubContextInterface {

  /**
   * The Drupal instance being tested.
   *
   * @var object
   */
  private $drupal;

  /**
   * The last message ID.
   *
   * @var int
   */
  protected $lastId;

  /**
   * {@inheritdoc}
   */
  public function __construct(DrupalDriverManager $drupal) {
    $this->drupal = $drupal;
  }

  /**
   * {@inheritdoc}
   */
  public static function getAlias() {
    return 'maillog';
  }

  /**
   * @BeforeScenario
   */
  public function setLastId() {
    if (module_exists('maillog')) {
      $this->lastId = (int) db_query('SELECT MAX(id) FROM {maillog}')->fetchField();
    }
  }

  /**
   * @Then /^(\d+) emails? should be sent:$/i.
   */
  public function emailsWereSent($num, TableNode $table) {
    $expected_emails = $table->getHash();

    $actual_emails = db_select('maillog', 'm')
      ->fields('m')
      ->condition('id', $this->lastId, '>')
      ->orderBy('id', 'DESC')
      ->execute()
      ->fetchAllAssoc('id', PDO::FETCH_ASSOC);

    if (count($actual_emails) < $num) {
      throw new Exception('Only ' . count($actual_emails) . ' were sent.');
    }

    $missing_emails = array();
    foreach ($expected_emails as $expected_email) {
      foreach ($actual_emails as $actual_email) {
        if ($this->emailsMatch($actual_email, $expected_email)) {
          continue 2;
        }
      }
      // No matches for the expected email.
      $missing_emails[] = $expected_email;
    }

    if (count($missing_emails) > 0) {
      $message = "Missing Emails:\n" . implode("\n", array_map('drupal_json_encode', $missing_emails));
      throw new Exception($message);
    }
  }

  /**
   * Determine if the actual email matches the expected email.
   *
   * @param array $actual
   *   An associative array of all the columns in the actual maillog database
   *   table row.
   * @param array $expected
   *   The expected email values. Allowed, case insensitive keys are:
   *   - Subject:   strcasecmp comparison
   *   - To:        strcasecmp comparison
   *   - From:      strcasecmp comparison
   *   - Reply to:  strcasecmp comparison
   *   - Body:      stristr comparison.
   *
   * @return bool
   *   Whether the expected message matches the actual message.
   */
  protected function emailsMatch(array $actual, array $expected) {
    foreach ($expected as $part => $passed_value) {
      $expected_value = trim($passed_value);
      $part = strtolower($part);
      if ('subject' == $part) {
        $actual_value = trim($actual['subject']);
      }
      elseif ('to' == $part) {
        $actual_value = trim($actual['header_to']);
      }
      elseif ('from' == $part) {
        $actual_value = trim($actual['header_from']);
      }
      elseif ('reply to' == $part) {
        $actual_value = trim($actual['header_reply_to']);
      }
      elseif ('body' == $part) {
        // Since the body will be long it is more useful to check whether it
        // contains the expected value.
        if (!stristr(trim($actual['body']), $expected_value)) {
          return FALSE;
        }
        continue;
      }
      else {
        throw new Exception("Unknown part in expected email '$part'");
      }

      if (strcasecmp($actual_value, $expected_value) != 0) {
        return FALSE;
      }
    }

    return TRUE;
  }

}
