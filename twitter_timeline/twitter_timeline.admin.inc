<?php

/**
 * @file
 * Provide the admin related functions for the Twitter Timeline module
 */

 /**
 * Defines the Timeline admin settings form // doesn't actually do anything yet
 */
function twitter_timeline_admin_settings_form() {
  $form['twitter_account'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter Account Handle'),
    '#default_value' => variable_get('twitter_account', t('@GelmanLibrary')),
  );
  return system_settings_form($form);
}