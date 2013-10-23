<?php
/**
 * @file
 * off_idea_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function off_idea_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create idea content.
  $permissions['create idea content'] = array(
    'name' => 'create idea content',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any idea content.
  $permissions['delete any idea content'] = array(
    'name' => 'delete any idea content',
    'roles' => array(
      'Admin' => 'Admin',
      'Content Manager' => 'Content Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own idea content.
  $permissions['delete own idea content'] = array(
    'name' => 'delete own idea content',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any idea content.
  $permissions['edit any idea content'] = array(
    'name' => 'edit any idea content',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own idea content.
  $permissions['edit own idea content'] = array(
    'name' => 'edit own idea content',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}