###################################################################################
##                                            __ _      _     _                  ##
##                                           / _(_)    | |   | |                 ##
##                __ _ _   _  ___  ___ _ __ | |_ _  ___| | __| |                 ##
##               / _` | | | |/ _ \/ _ \ '_ \|  _| |/ _ \ |/ _` |                 ##
##              | (_| | |_| |  __/  __/ | | | | | |  __/ | (_| |                 ##
##               \__, |\__,_|\___|\___|_| |_|_| |_|\___|_|\__,_|                 ##
##                  | |                                                          ##
##                  |_|                                                          ##
##                                                                               ##
##                                                                               ##
##              QueenField                                                       ##
##              Multi-Processor System on Chip                                   ##
##                                                                               ##
###################################################################################

###################################################################################
##                                                                               ##
## Copyright (c) 2022-2025 by the author(s)                                      ##
##                                                                               ##
## Permission is hereby granted, free of charge, to any person obtaining a copy  ##
## of this software and associated documentation files (the "Software"), to deal ##
## in the Software without restriction, including without limitation the rights  ##
## to use, copy, modify, merge, publish, distribute, sublicense, and/or sell     ##
## copies of the Software, and to permit persons to whom the Software is         ##
## furnished to do so, subject to the following conditions:                      ##
##                                                                               ##
## The above copyright notice and this permission notice shall be included in    ##
## all copies or substantial portions of the Software.                           ##
##                                                                               ##
## THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR    ##
## IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,      ##
## FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE   ##
## AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER        ##
## LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, ##
## OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN     ##
## THE SOFTWARE.                                                                 ##
##                                                                               ##
## ============================================================================= ##
## Author(s):                                                                    ##
##   Paco Reina Campo <pacoreinacampo@queenfield.tech>                           ##
##                                                                               ##
###################################################################################

rm -rf object review

mkdir object
mkdir object/data_required_for_the_final_certification_software
mkdir object/data_required_for_the_final_certification_software/software_accomplishment_summary
mkdir object/data_required_for_the_final_certification_software/software_configuration_index
mkdir object/data_required_for_the_final_certification_software/software_configuration_management_records
mkdir object/data_required_for_the_final_certification_software/software_life_cycle_environment_configuration_index
mkdir object/data_required_for_the_final_certification_software/software_process_assurance_records
mkdir object/data_required_for_the_final_certification_software/software_verification_results
mkdir object/data_required_for_the_final_certification_software/problem_reports
mkdir object/data_required_for_the_software_development
mkdir object/data_required_for_the_software_development/software_configuration_management_records
mkdir object/data_required_for_the_software_development/software_design_data
mkdir object/data_required_for_the_software_development/software_life_cycle_environment_configuration_index
mkdir object/data_required_for_the_software_development/software_review_and_analysis_procedures
mkdir object/data_required_for_the_software_development/software_review_and_analysis_results
mkdir object/data_required_for_the_software_development/software_process_assurance_records
mkdir object/data_required_for_the_software_development/software_requirements
mkdir object/data_required_for_the_software_development/software_requirements_design_and_source_code_standards
mkdir object/data_required_for_the_software_development/software_tool_qualification_data
mkdir object/data_required_for_the_software_development/software_traceability_data
mkdir object/data_required_for_the_software_development/programming_language
mkdir object/data_required_for_the_software_development/problem_reports
mkdir object/data_required_for_the_software_planning_review
mkdir object/data_required_for_the_software_planning_review/software_configuration_management_plan
mkdir object/data_required_for_the_software_planning_review/software_design_plan
mkdir object/data_required_for_the_software_planning_review/software_process_assurance_plan
mkdir object/data_required_for_the_software_planning_review/software_process_assurance_records
mkdir object/data_required_for_the_software_planning_review/software_requirements_design_source_code_validation_and_verification_and_archive_standards
mkdir object/data_required_for_the_software_planning_review/software_validation_plan
mkdir object/data_required_for_the_software_planning_review/software_verification_plan
mkdir object/data_required_for_the_software_planning_review/plan_for_software_aspects_of_certification
mkdir object/data_required_for_the_software_planning_review/supplier_management_plan
mkdir object/data_required_for_the_software_planning_review/tool_qualification_plans
mkdir object/data_required_for_the_software_verification
mkdir object/data_required_for_the_software_verification/software_configuration_management_records
mkdir object/data_required_for_the_software_verification/software_design_representation_data
mkdir object/data_required_for_the_software_verification/software_life_cycle_environment_configuration_index
mkdir object/data_required_for_the_software_verification/software_process_assurance_records
mkdir object/data_required_for_the_software_verification/software_requirements_data
mkdir object/data_required_for_the_software_verification/software_tool_qualification_data
mkdir object/data_required_for_the_software_verification/software_verification_procedures
mkdir object/data_required_for_the_software_verification/software_verification_results
mkdir object/data_required_for_the_software_verification/programming_language
mkdir object/data_required_for_the_software_verification/problem_reports
mkdir review
mkdir review/data_required_for_the_final_certification_software
mkdir review/data_required_for_the_final_certification_software/software_accomplishment_summary
mkdir review/data_required_for_the_final_certification_software/software_configuration_index
mkdir review/data_required_for_the_final_certification_software/software_configuration_management_records
mkdir review/data_required_for_the_final_certification_software/software_life_cycle_environment_configuration_index
mkdir review/data_required_for_the_final_certification_software/software_process_assurance_records
mkdir review/data_required_for_the_final_certification_software/software_verification_results
mkdir review/data_required_for_the_final_certification_software/problem_reports
mkdir review/data_required_for_the_software_development
mkdir review/data_required_for_the_software_development/software_configuration_management_records
mkdir review/data_required_for_the_software_development/software_design_data
mkdir review/data_required_for_the_software_development/software_life_cycle_environment_configuration_index
mkdir review/data_required_for_the_software_development/software_review_and_analysis_procedures
mkdir review/data_required_for_the_software_development/software_review_and_analysis_results
mkdir review/data_required_for_the_software_development/software_process_assurance_records
mkdir review/data_required_for_the_software_development/software_requirements
mkdir review/data_required_for_the_software_development/software_requirements_design_and_source_code_standards
mkdir review/data_required_for_the_software_development/software_tool_qualification_data
mkdir review/data_required_for_the_software_development/software_traceability_data
mkdir review/data_required_for_the_software_development/programming_language
mkdir review/data_required_for_the_software_development/problem_reports
mkdir review/data_required_for_the_software_planning_review
mkdir review/data_required_for_the_software_planning_review/software_configuration_management_plan
mkdir review/data_required_for_the_software_planning_review/software_design_plan
mkdir review/data_required_for_the_software_planning_review/software_process_assurance_plan
mkdir review/data_required_for_the_software_planning_review/software_process_assurance_records
mkdir review/data_required_for_the_software_planning_review/software_requirements_design_source_code_validation_and_verification_and_archive_standards
mkdir review/data_required_for_the_software_planning_review/software_validation_plan
mkdir review/data_required_for_the_software_planning_review/software_verification_plan
mkdir review/data_required_for_the_software_planning_review/plan_for_software_aspects_of_certification
mkdir review/data_required_for_the_software_planning_review/supplier_management_plan
mkdir review/data_required_for_the_software_planning_review/tool_qualification_plans
mkdir review/data_required_for_the_software_verification
mkdir review/data_required_for_the_software_verification/software_configuration_management_records
mkdir review/data_required_for_the_software_verification/software_design_representation_data
mkdir review/data_required_for_the_software_verification/software_life_cycle_environment_configuration_index
mkdir review/data_required_for_the_software_verification/software_process_assurance_records
mkdir review/data_required_for_the_software_verification/software_requirements_data
mkdir review/data_required_for_the_software_verification/software_tool_qualification_data
mkdir review/data_required_for_the_software_verification/software_verification_procedures
mkdir review/data_required_for_the_software_verification/software_verification_results
mkdir review/data_required_for_the_software_verification/programming_language
mkdir review/data_required_for_the_software_verification/problem_reports
