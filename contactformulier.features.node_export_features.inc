<?php
/**
 * @file
 * contactformulier.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function contactformulier_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Contact\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6dccd89a-d1a0-5c14-c504-78761da9a76d\',
      \'nid\' => \'2\',
      \'type\' => \'webform\',
      \'language\' => \'nl\',
      \'created\' => \'1351952357\',
      \'changed\' => \'1351952467\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'65ffb404-8356-a364-713b-271dc25bacde\',
      \'revision_timestamp\' => \'1351952467\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'U kunt ons bellen of een bericht sturen\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>U kunt ons bellen of een bericht sturen</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'webform\' => array(
        \'nid\' => \'2\',
        \'confirmation\' => \'\',
        \'confirmation_format\' => \'filtered_html\',
        \'redirect_url\' => \'<confirmation>\',
        \'status\' => \'1\',
        \'block\' => \'1\',
        \'teaser\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'0\',
        \'submit_text\' => \'Verstuur\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
        ),
        \'emails\' => array(),
        \'components\' => array(
          1 => array(
            \'nid\' => 2,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'naam\',
            \'name\' => \'Naam\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'disabled\' => 0,
              \'unique\' => 0,
              \'conditional_operator\' => \'=\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'0\',
            \'weight\' => \'0\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 2,
            \'cid\' => \'2\',
            \'pid\' => \'0\',
            \'form_key\' => \'e_mailadres\',
            \'name\' => \'E-mailadres\',
            \'type\' => \'email\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'disabled\' => 0,
              \'unique\' => 0,
              \'conditional_operator\' => \'=\',
              \'width\' => \'\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'0\',
            \'weight\' => \'1\',
            \'page_num\' => 1,
          ),
          3 => array(
            \'nid\' => 2,
            \'cid\' => \'3\',
            \'pid\' => \'0\',
            \'form_key\' => \'telefoon\',
            \'name\' => \'Telefoon\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'disabled\' => 0,
              \'unique\' => 0,
              \'conditional_operator\' => \'=\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'0\',
            \'weight\' => \'2\',
            \'page_num\' => 1,
          ),
          4 => array(
            \'nid\' => 2,
            \'cid\' => \'4\',
            \'pid\' => \'0\',
            \'form_key\' => \'bericht\',
            \'name\' => \'Bericht\',
            \'type\' => \'textarea\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => 0,
              \'private\' => 0,
              \'resizable\' => 0,
              \'disabled\' => 0,
              \'conditional_operator\' => \'=\',
              \'cols\' => \'\',
              \'rows\' => \'\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'conditional_component\' => \'\',
              \'conditional_values\' => \'\',
            ),
            \'mandatory\' => \'0\',
            \'weight\' => \'3\',
            \'page_num\' => 1,
          ),
        ),
      ),
      \'name\' => \'gerard\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:0;}\',
      \'path\' => array(
        \'pid\' => \'3\',
        \'source\' => \'node/2\',
        \'alias\' => \'content/contact\',
        \'language\' => \'nl\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Contact\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
