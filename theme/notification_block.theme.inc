<?php
/*
 * Add JS and CSS to the notification block view
 */

function notification_block_preprocess_views_view_unformatted__notification_block(&$vars) {
    drupal_add_js(drupal_get_path('module', 'notification_block').'/theme/notification_block.js');
    drupal_add_css(drupal_get_path('module', 'notification_block').'/theme/notification_block.css', 'module');
}