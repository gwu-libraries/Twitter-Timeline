<?php

/**
 * @file
 * Provide the admin related functions for the Twitter Timeline module
 */

 /**
 * Defines the Timeline admin settings form 
 */
function twitter_timeline_admin_settings_form() {
  $form['twitter_account'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter Account Handle'),
    '#default_value' => variable_get('twitter_account', t('@GelmanLibrary')),
  );
  return system_settings_form($form);
}

/* more... */

function twitter_timeline_menu() {
  $items = array();

  $items['admin/config/content/twitter_timeline'] = array(
    'title' => 'Twitter Timeline Configuration',
    'description' => 'Configuration for Twitter Timeline module',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('twitter_timeline_form'),
    'access arguments' => array('access administration pages'),
    'type' => MENU_NORMAL_ITEM,
  );

  return $items;
}

function twitter_timeline_form($form, &$form_state) {
  $form['twitter_timeline_handles'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter handles'),
    '#default_value' => variable_get('twitter_timeline_handles', '@GelmanLibrary'),
    '#size' => 40,
    '#maxlength' => 80,
    '#description' => t('Twitter handles, please separate with a comma and space. Each handle will generate its own block in the blocks admin area.'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}