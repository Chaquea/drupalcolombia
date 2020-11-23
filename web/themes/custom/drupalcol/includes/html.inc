<?php

/**
* Implements template_preprocess_html().
*/
function drupalcol_preprocess_html(&$variables) {
  if (isset($variables['node_type'])) {
  $node = \Drupal::routeMatch()->getParameter('node');
  // Add node-TYPE class to the element.
  $variables['attributes']['class'][] = 'page-node-' . $node->getType();
  $variables['attributes']['class'][] = 'page-node-' . $node->id();
  }
}
