enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests test_cases.cpp)
target_link_libraries(
    runTests
    GTest::gtest_main
    pthread
)

add_test(NAME AllTests COMMAND runTests)
