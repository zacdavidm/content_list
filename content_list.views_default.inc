<?php
/**
 * @file
 * content_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_list_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_grouping_header',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_content_reference_node']['id'] = 'reverse_field_content_reference_node';
  $handler->display->display_options['relationships']['reverse_field_content_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_content_reference_node']['field'] = 'reverse_field_content_reference_node';
  $handler->display->display_options['relationships']['reverse_field_content_reference_node']['label'] = 'Referencing';
  $handler->display->display_options['relationships']['reverse_field_content_reference_node']['required'] = TRUE;
  /* Field: Content: Grouping Header */
  $handler->display->display_options['fields']['field_grouping_header']['id'] = 'field_grouping_header';
  $handler->display->display_options['fields']['field_grouping_header']['table'] = 'field_data_field_grouping_header';
  $handler->display->display_options['fields']['field_grouping_header']['field'] = 'field_grouping_header';
  $handler->display->display_options['fields']['field_grouping_header']['label'] = '';
  $handler->display->display_options['fields']['field_grouping_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_grouping_header']['type'] = 'taxonomy_term_reference_plain';
  /* Field: blank text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'blank text';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_content_reference_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['content_list'] = $view;

  return $export;
}
