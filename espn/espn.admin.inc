<?php

/**
 * @file
 * Administrative forms for the ESPN module.
 */

/**
 * ESPN admin settings form.
 */
function espn_admin_form() {
  drupal_add_css(drupal_get_path('module', 'espn') . '/espn.css');

  $form['espn_apikey'] = array(
    '#title' => t('ESPN API key'),
    '#type' => 'textfield',
    '#required' => TRUE,
    '#description' => t('To request an API key, visit ESPN\'s <a href="@espn_url">developer site</a>.', array('@espn_url' => 'http://developer.espn.com/member/register')),
    '#default_value' => variable_get('espn_apikey', ''),
  );


  return system_settings_form($form);
}
