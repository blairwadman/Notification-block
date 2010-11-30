<?php

/**
 * Implementation of hook_flag_default_flags().
 */
function notification_block_flag_default_flags() {
$flags = array();
// Exported flag: "Notification Block".
$flags[] = array (
  'content_type' => 'node',
  'name' => 'notification_block',
  'title' => 'Notification Block',
  'global' => '0',
  'types' => 
  array (
    0 => 'notification_block',
  ),
  'flag_short' => 'Do not show again',
  'flag_long' => 'Do not show this notification again',
  'flag_message' => 'This message will not appear again',
  'unflag_short' => 'Show again',
  'unflag_long' => '',
  'unflag_message' => '',
  'unflag_denied_text' => '',
  'link_type' => 'toggle',
  'roles' => 
  array (
    'flag' => 
    array (
      0 => 2,
    ),
    'unflag' => 
    array (
      0 => 2,
    ),
  ),
  'show_on_page' => 1,
  'show_on_teaser' => 0,
  'show_on_form' => 0,
  'access_author' => '',
  'i18n' => 0,
  'module' => 'notification_block',
  'locked' => 
  array (
    0 => 'name',
  ),
  'api_version' => 2,
);
return $flags;
}

/**
 * Implementation of hook_node_info().
 */
function notification_block_node_info() {
  $items = array(
    'notification_block' => array(
      'name' => t('Notification Block'),
      'module' => 'features',
      'description' => t('Block for welcome, introduction and news notifications'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Notification'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function notification_block_views_api() {
  return array(
    'api' => '2',
  );
}
