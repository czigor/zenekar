; API

api = 2

core = 7.x

; Stable modules

projects[variable][version] = 2.1
projects[variable][subdir] = contrib
projects[libraries][version] = 2.0
projects[libraries][subdir] = contrib
projects[link][version] = 1.0
projects[link][subdir] = contrib
projects[linkit][version] = 2.5
projects[linkit][subdir] = contrib
projects[rules][version] = 2.2
projects[rules][subdir] = contrib
projects[scheduler][version] = 1.0
projects[scheduler][subdir] = contrib
projects[webform][version] = 3.18
projects[webform][subdir] = contrib
projects[workbench][version] = 1.1
projects[workbench][subdir] = contrib
projects[workbench_access][version] = 1.0
projects[workbench_access][subdir] = contrib
projects[workbench_moderation][version] = 1.2
projects[workbench_moderation][subdir] = contrib
projects[workbench_media][version] = 1.1
projects[workbench_media][subdir] = contrib
projects[diff][version] = 2.0
projects[diff][subdir] = contrib
projects[dynamic_formatters][version] = 2.0-alpha3
projects[dynamic_formatters][subdir] = contrib
projects[strongarm][version] = 2.0
projects[strongarm][subdir] = contrib
projects[taxonomy_menu_form][version] = 1.1
projects[taxonomy_menu_form][subdir] = contrib
projects[devel][version] = 1.3
projects[devel][subdir] = contrib
projects[coder][version] = 1.1
projects[coder][subdir] = contrib
projects[token][version] = 1.4
projects[token][subdir] = contrib
projects[references][version] = 2.0
projects[references][subdir] = contrib
projects[references_dialog][version] = 1.0-alpha4
projects[references_dialog][subdir] = contrib
projects[selenium][version] = 2.0-beta2
projects[selenium][subdir] = contrib
projects[media_youtube][version] = 1.0-beta3
projects[media_youtube][subdir] = contrib
projects[views_rss][version] = 2.0-rc3
projects[views_rss][subdir] = contrib
projects[crossclone][version] = 1.0-alpha4
projects[crossclone][subdir] = contrib
projects[panels_ref_formatter][version] = 1.0-alpha5
projects[panels_ref_formatter][subdir] = contrib
projects[i18n][version] = 1.7
projects[i18n][subdir] = contrib
projects[markdown][version] = 1.0
projects[markdown][subdir] = contrib
projects[codefilter][version] = 1.0
projects[codefilter][subdir] = contrib
projects[pathologic][version] = 2.3
projects[pathologic][subdir] = contrib
projects[admin_menu][version] = 3.0-rc3
projects[admin_menu][subdir] = contrib
projects[defaultconfig][version] = 1.0-alpha8
projects[defaultconfig][subdir] = contrib
projects[media][version] = 2.0-unstable6
projects[media][subdir] = contrib
projects[simpletest_clone][version] = 1.0-beta3
projects[simpletest_clone][subdir] = contrib
projects[cache_actions][version] = 2.0-alpha5
projects[cache_actions][subdir] = contrib
projects[speedy][version] = 1.1
projects[speedy][subdir] = contrib
projects[flag][version] = 2.0
projects[flag][subdir] = contrib
projects[panels_everywhere][version] = 1.0-rc1
projects[panels_everywhere][subdir] = contrib
projects[panelizer][version] = 3.0-rc1
projects[panelizer][subdir] = contrib
projects[features][version] = 1.0
projects[features][subdir] = contrib
projects[title][version] = 1.0-alpha4
projects[title][subdir] = contrib
projects[views][version] = 3.5
projects[views][subdir] = contrib
projects[panels][version] = 3.3
projects[panels][subdir] = contrib
projects[entityreference][version] = 1.0-rc5
projects[entityreference][subdir] = contrib

; Fetch ctools from git to avoid issues with patching.
projects[ctools][type] = module
projects[ctools][version] = 1.2
projects[ctools][download][type] = git
projects[ctools][download][tag] = 7.x-1.2
projects[ctools][subdir] = contrib

; Fetch email from git to avoid issues with patching.
projects[email][type] = module
projects[email][version] = 1.2
projects[email][download][type] = git
projects[email][download][revision] = b71dec9
projects[email][subdir] = contrib

; Fetch draggableviews from git to add hierarchy support.
projects[draggableviews][type] = module
projects[draggableviews][version] = 2.0
projects[draggableviews][download][type] = git
projects[draggableviews][download][revision] = 1d6a342
projects[draggableviews][subdir] = contrib

; Fetch entity from git to avoid issues with patching.
projects[entity][type] = module
projects[entity][version] = 1.0-rc3
projects[entity][download][type] = git
projects[entity][download][tag] = 7.x-1.0-rc3
projects[entity][subdir] = contrib

; Fetch file_entity from git to avoid issues with patching.
projects[file_entity][type] = module
projects[file_entity][version] = 2.0-unstable6
projects[file_entity][download][type] = git
projects[file_entity][download][tag] = 7.x-2.0-unstable6
projects[file_entity][subdir] = contrib

; Fetch entitycache from git to avoid issues with patching.
projects[entitycache][type] = module
projects[entitycache][version] = 1.1
projects[entitycache][download][type] = git
projects[entitycache][download][revision] = 7e390b5
projects[entitycache][subdir] = contrib

; Fetch menu_block from git to avoid issues with patching.
projects[menu_block][type] = module
projects[menu_block][version] = 2.3
projects[menu_block][download][type] = git
projects[menu_block][download][tag] = 7.x-2.3
projects[menu_block][subdir] = contrib

; UUID
projects[uuid][type] = module
projects[uuid][version] = 1.x-dev
projects[uuid][download][type] = git
projects[uuid][download][revision] = 68f7c09
projects[uuid][subdir] = contrib

; We run with the dev version to get exportability.
projects[wysiwyg][type] = module
projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = 60ea63c0b609f89878dfdf87616f3a88268b5217
projects[wysiwyg][subdir] = contrib

; We need to patch field_group to avoid exportability issues.
projects[field_group][type] = module
projects[field_group][version] = 1.x-dev
projects[field_group][download][type] = git
projects[field_group][download][revision] = 4aae97e
projects[field_group][subdir] = contrib

; We need the dev version to fix integrity constraint sql issues.
projects[l10n_update][type] = module
projects[l10n_update][version] = 1.x-dev
projects[l10n_update][download][type] = git
projects[l10n_update][download][revision] = 9fb0c2c
projects[l10n_update][subdir] = contrib

; Latest dev contains views integration.
projects[entity_translation][type] = module
projects[entity_translation][version] = 1.x-dev
projects[entity_translation][download][type] = git
projects[entity_translation][download][tag] = 7.x-1.0-alpha2
projects[entity_translation][subdir] = contrib

; Libraries
; once they're back in business.
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.4/ckeditor_3.6.4.tar.gz
libraries[ckeditor][destination] = libraries

; Patches

; http://drupal.org/node/624018#comment-4519502
projects[wysiwyg][patch][] = http://drupal.org/files/issues/wysiwyg-entity-exportables-624018-176_1.patch

; http://drupal.org/node/1314876
projects[file_entity][patch][] = http://drupal.org/files/file-entity-ctools-content-types.patch

; http://drupal.org/node/1553094
projects[file_entity][patch][] = http://drupal.org/files/file_entity-image_file_alt_and_title-1553094-20.patch

; Change term context to the new entity:taxonomy_term in site_template. - http://drupal.org/node/1550294#comment-5935960
projects[panels_everywhere][patch][] = http://drupal.org/files/use-entity-context-1550294-4.patch

; http://drupal.org/node/1050766
projects[menu_block][patch][] = http://drupal.org/files/issues/1050766.fixed-parent-item.patch

; Patch for entity label in entity api.
projects[entity][patch][] = http://drupal.org/files/entity-field-label-handler-1435418-5.patch

; CTools support for entity translation.
projects[entity_translation][patch][] = http://drupal.org/files/translation-access-plugin-1516202-2.patch

; Fix translation form for translators who don't have access to edit it.
projects[entity_translation][patch][] = http://drupal.org/files/dont-prevent-translations-on-update.patch

; http://drupal.org/node/1264210
projects[email][patch][] = http://drupal.org/files/email-contact_form_formater-1264210-21.patch

; http://drupal.org/node/1252398
projects[ctools][patch][] = http://drupal.org/files/1252398-ctools-blocks-without-block-module-6.patch
