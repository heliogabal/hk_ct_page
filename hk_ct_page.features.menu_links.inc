<?php
/**
 * @file
 * hk_ct_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hk_ct_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_team:node/3259
  $menu_links['main-menu_team:node/3259'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3259',
    'router_path' => 'node/%',
    'link_title' => 'Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'main-menu_team:node/3259',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Team');


  return $menu_links;
}
