cmake_minimum_required (VERSION 3.10)




include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)



enable_testing()

add_executable(
  test
  main_test.cpp
)
target_link_libraries (test B_Lib)
target_link_libraries(
  test
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(test)


target_include_directories (test PUBLIC "${PROJECT_SOURCE_DIR}")



set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
