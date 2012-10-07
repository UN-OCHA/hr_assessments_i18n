<?php
/**
 * @file
 * hr_assessments_i18n.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function hr_assessments_i18n_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.field_collection_item-field_asst_data-field_data_accessibility.field_instance|display|default|module"] = 'i18n_field';
  $overrides["field.field_collection_item-field_asst_data-field_data_accessibility.field_instance|display|default|type"] = 'i18n_list_default';
  $overrides["field.field_collection_item-field_asst_questionnaire-field_ques_accessibility.field_instance|display|default|module"] = 'i18n_field';
  $overrides["field.field_collection_item-field_asst_questionnaire-field_ques_accessibility.field_instance|display|default|type"] = 'i18n_list_default';
  $overrides["field.field_collection_item-field_asst_report-field_report_accessibility.field_instance|display|default|module"] = 'i18n_field';
  $overrides["field.field_collection_item-field_asst_report-field_report_accessibility.field_instance|display|default|type"] = 'i18n_list_default';
  $overrides["field.node-assessment-field_asst_status.field_instance|display|default|module"] = 'i18n_field';
  $overrides["field.node-assessment-field_asst_status.field_instance|display|default|type"] = 'i18n_list_default';
  $overrides["field.node-assessment-field_asst_unit.field_instance|display|default|module"] = 'i18n_field';
  $overrides["field.node-assessment-field_asst_unit.field_instance|display|default|type"] = 'i18n_list_default';

  // Exported overrides for: views_view
  $overrides["views_view.assessment_registry.display|default|display_options|fields|field_asst_status|type"] = 'i18n_list_default';

 return $overrides;
}
