<?php
/**
 * @file
 * base_teamplate_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function base_teamplate_feature_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: Редактор.
  $roles['Редактор'] = array(
    'name' => 'Редактор',
    'weight' => 3,
  );

  return $roles;
}
