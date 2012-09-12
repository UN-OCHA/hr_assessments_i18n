<?php
/**
 * @file
 * hr_assessments_i18n.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function hr_assessments_i18n_field_default_fields_alter(&$data) {
  if (isset($data['field_collection_item-field_asst_data-field_data_accessibility'])) {
    $data['field_collection_item-field_asst_data-field_data_accessibility']['field_instance']['display']['default']['module'] = 'i18n_field'; /* WAS: 'list' */
    $data['field_collection_item-field_asst_data-field_data_accessibility']['field_instance']['display']['default']['type'] = 'i18n_list_default'; /* WAS: 'list_default' */
  }
  if (isset($data['field_collection_item-field_asst_questionnaire-field_ques_accessibility'])) {
    $data['field_collection_item-field_asst_questionnaire-field_ques_accessibility']['field_instance']['display']['default']['module'] = 'i18n_field'; /* WAS: 'list' */
    $data['field_collection_item-field_asst_questionnaire-field_ques_accessibility']['field_instance']['display']['default']['type'] = 'i18n_list_default'; /* WAS: 'list_default' */
  }
  if (isset($data['field_collection_item-field_asst_report-field_report_accessibility'])) {
    $data['field_collection_item-field_asst_report-field_report_accessibility']['field_instance']['display']['default']['module'] = 'i18n_field'; /* WAS: 'list' */
    $data['field_collection_item-field_asst_report-field_report_accessibility']['field_instance']['display']['default']['type'] = 'i18n_list_default'; /* WAS: 'list_default' */
  }
  if (isset($data['node-assessment-field_asst_status'])) {
    $data['node-assessment-field_asst_status']['field_instance']['display']['default']['module'] = 'i18n_field'; /* WAS: 'list' */
    $data['node-assessment-field_asst_status']['field_instance']['display']['default']['type'] = 'i18n_list_default'; /* WAS: 'list_default' */
  }
  if (isset($data['node-assessment-field_asst_unit'])) {
    $data['node-assessment-field_asst_unit']['field_instance']['display']['default']['module'] = 'i18n_field'; /* WAS: 'list' */
    $data['node-assessment-field_asst_unit']['field_instance']['display']['default']['type'] = 'i18n_list_default'; /* WAS: 'list_default' */
  }
}
