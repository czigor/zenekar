<?php
/**
 * @file
 * mez_users.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mez_users_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_edit_disabled';
  $strongarm->value = TRUE;
  $export['page_manager_user_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_view_disabled';
  $strongarm->value = TRUE;
  $export['page_manager_user_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_body';
  $strongarm->value = 'Kedves [user:name]!

A [site:name] adminisztrátorához olyan kérés érkezett, hogy a felhasználót törölje az oldalról.

A felhasználó [site:url-brief] törléséhez az alábbi hivatkozásra kell kattintani vagy be kell másolni a böngésző címsorába:

[user:cancel-url]

FIGYELEM: A felhasználó törlése később nem visszavonható.

A hivatkozás egy nap múlva lejár és semmi nem történik, ha nem kerül felhasználásra.

--  [site:name] csapata';
  $export['user_mail_cancel_confirm_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_subject';
  $strongarm->value = '[site:name] webhelyen [user:name] felhasználó törlési kérelme';
  $export['user_mail_cancel_confirm_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_body';
  $strongarm->value = 'Kedves [user:name]!

[site:name] webhelyen ennek a felhasználónak a nevében új jelszó iránti igény lett benyújtva.

[site:url-brief] webhelyre az alábbi linkre kattintva, vagy az böngészőcímsorába másolva lehet belépni:

[user:one-time-login-url]

Ez egy egyszer használható belépési mód. Egy nap után az érvényessége lejár, de semmilyen következménye nem lesz, ha nem használják fel.

A belépés a webhely [user:edit-url] oldalára visz, ahol a jelszót is meg lehet majd változtatni.

-- [site:name] csapata';
  $export['user_mail_password_reset_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_subject';
  $strongarm->value = 'Új bejelentkezési információk [user:name] részére [site:name] webhelyen';
  $export['user_mail_password_reset_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = 'Kedves [user:name]! 

[user:name] felhasználót létrehozta a webhely adminisztrátora. A belépéshez az alábbi hivatkozásra kell kattintani, vagy be kell másolni a böngésző címsorába: 

[user:one-time-login-url] 

Ez hivatkozás csak egyszer használható belépésre, a betöltött oldalon meg kell adni a jelszót. A későbbiekben a [site:login-url] címen történő bejelentkezéshez az ott megadott jelszót kell használni:

Felhasználónév: [user:name] 
Jelszó: a megadott jelszó

 -- [site:name] csapata';
  $export['user_mail_register_admin_created_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_subject';
  $strongarm->value = 'A [site:name] webhely adminisztrátora által létrehozott új felhasználói hozzáférés használatba vehető.';
  $export['user_mail_register_admin_created_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = 'Kedves [user:name]!

Köszönjük a csatlakozási szándékot [site:name] webhelyhez. Az alábbi hivatkozásra kattintva vagy a böngésző címsorába illesztve lehet belépni:

[user:one-time-login-url] 

A hivatkozás csak egyszer használható belépésre. Ezt követően a böngésző át lesz irányítva arra az oldalra, ahol többek közt a jelszó is megadható.

A [site:login-url] oldalon a bejelentkezéshez az ott megadott a jelszót kell használni.

felhasználó név: [user:name] 
jelszó: a megadott jelszó  

-- [site:name] csapata';
  $export['user_mail_register_no_approval_required_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_subject';
  $strongarm->value = '[site:name] webhelyen [user:name] felhasználó adatai';
  $export['user_mail_register_no_approval_required_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_body';
  $strongarm->value = 'Kedves [user:name]!

[site:name] webhelyen köszönjük az új felhasználó létrehozására irányuló kérelmet. A felhasználói hozzáférés az adminisztrátor jóváhagyására vár. A jóváhagyás beérkezése után a rendszer e-mailt küld, amely tartalmazza a bejelentkezési információkat, a jelszó beállításának módját, és a további tudnivalókat.


-- [site:name] csapat';
  $export['user_mail_register_pending_approval_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_subject';
  $strongarm->value = '[site:name] webhelyen [user:name] felhasználó adatai (jóváhagyásra várva)';
  $export['user_mail_register_pending_approval_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_body';
  $strongarm->value = 'Kedves [user:name]!

A felhasználó aktiválva lett az oldalon.
A belépéshez az alábbi hivatkozásra kell kattintani, vagy be kell másolni a böngésző címsorába:

[user:one-time-login-url]

A hivatkozás csak egyszer használható belépésre, az oldalon ami betöltődik meg kell adni a jelszót. Az oldalra történő bejelentkezéshez a későbbiekben ezt a jelszót kell használni.

felhasználó név: [user:name]
jelszó: a megadott jelszó

--  [site:name] csapata';
  $export['user_mail_status_activated_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_notify';
  $strongarm->value = 1;
  $export['user_mail_status_activated_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_subject';
  $strongarm->value = '[site:name] webhelyen [user:name] felhasználó adatai (elfogadott)';
  $export['user_mail_status_activated_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_body';
  $strongarm->value = 'Kedves [user:name]!

A felhasználó blokkolva lett az oldalon.

--  [site:name] csapata';
  $export['user_mail_status_blocked_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_notify';
  $strongarm->value = 0;
  $export['user_mail_status_blocked_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_subject';
  $strongarm->value = '[site:name] webhelyen [user:name] felhasználó adatai (zárolt)';
  $export['user_mail_status_blocked_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_body';
  $strongarm->value = 'Kedves [user:name]!

A felhasználó törölve lett az oldalról.

--  [site:name] csapata';
  $export['user_mail_status_canceled_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_notify';
  $strongarm->value = 0;
  $export['user_mail_status_canceled_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_subject';
  $strongarm->value = '[site:name] webhelyen [user:name] felhasználó adatai (törölt)';
  $export['user_mail_status_canceled_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 0;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = '';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '85x85';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '30';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';
  $export['user_picture_guidelines'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';
  $export['user_picture_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = '';
  $export['user_picture_style'] = $strongarm;

  return $export;
}
