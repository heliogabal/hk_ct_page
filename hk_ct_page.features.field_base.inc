<?php
/**
 * @file
 * hk_ct_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hk_ct_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_bild'
  $field_bases['field_bild'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bild',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'description_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'list_default' => 1,
      'list_field' => 0,
      'semantic_cck_field_settings' => array(
        'enabled' => 0,
        'field_class' => 'right',
        'field_element' => 'div',
        'field_prefix' => '',
        'field_suffix' => '',
        'first_class' => 'first',
        'label_class_above' => '',
        'label_class_inline' => '',
        'label_element_above' => 'h3',
        'label_element_inline' => 'span',
        'label_suffix_above' => '',
        'label_suffix_inline' => ':',
        'last_class' => 'last',
        'last_every_nth' => 0,
        'multiple_item_class' => '',
        'multiple_item_element' => 'div',
        'multiple_item_separator' => '',
        'multiple_items_class' => '',
        'multiple_items_element' => 'div',
        'single_item_class' => '',
        'single_item_element' => 'div',
        'striping_classes' => 'odd even',
        'use_singlevalue_settings' => 0,
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'image',
    'type_name' => 'page',
  );

  return $field_bases;
}
