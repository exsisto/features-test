<?php
/**
 * @file
 * base_teamplate_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_teamplate_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function base_teamplate_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function base_teamplate_feature_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Статьи'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'members' => array(
      'name' => t('Члены'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('ФИО'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('Новости'),
      'base' => 'node_content',
      'description' => t('News content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Простая страница'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Форма связи'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
