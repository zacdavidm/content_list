<?php
/**
 * @file
 * content_list.features.inc
 */

/**
 * Implements hook_views_api().
 */
function content_list_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function content_list_node_info() {
  $items = array(
    'content_list' => array(
      'name' => t('Content List'),
      'base' => 'node_content',
      'description' => t('Reference and arrange content in a list, allowing for groupings'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
