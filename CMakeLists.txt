cmake_minimum_required(VERSION 3.13.4)
project(DemoProject LANGUAGES CXX)
include(GoogleTest)
add_executable(FooUnitTest test/FooUnitTest.cpp)
find_library(GTEST_LIBRARIES
  NAMES gtest
)
find_library(GTEST_MAIN_LIBRARIES
  NAMES gtest_main
)
find_library(GMOCK_LIBRARIES
  NAMES gmock
)
find_library(GMOCK_MAIN_LIBRARIES
  NAMES gmock_main
)
target_link_libraries(FooUnitTest
  ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES}
  ${GMOCK_LIBRARIES} ${GMOCK_MAIN_LIBRARIES} pthread
)
# target_include_directories(FooUnitTest PRIVATE ${GTEST_INCLUDE_DIRS} ${GMOCK_INCLUDE_DIRS})
gtest_discover_tests(FooUnitTest)
enable_testing()
