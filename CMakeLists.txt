cmake_minimum_required(VERSION 3.5)
project(dive_into_c LANGUAGES C)
# add_executable(dive_into_c main.c)

add_subdirectory("${PROJECT_SOURCE_DIR}/structs" "${PROJECT_SOURCE_DIR}/structs/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/assembly" "${PROJECT_SOURCE_DIR}/assembly/output")