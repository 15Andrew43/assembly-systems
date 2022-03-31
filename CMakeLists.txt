cmake_minimum_required (VERSION 3.10)

add_subdirectory (B ${PROJECT_SOURCE_DIR}/lib)

execute_process (COMMAND python3 preparing.py WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/A)

add_executable (C C/main.cpp)

target_link_libraries (C B_Lib)

add_subdirectory (C)

target_include_directories (C PUBLIC "${CMAKE_CURRENT_LIST_DIR}")

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

