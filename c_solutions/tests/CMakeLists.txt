add_executable(hello_test hello_test.cpp)
add_executable(two_sum_test two_sum_test.cpp)

target_link_libraries(hello_test
    PRIVATE
    hello
    GTest::gtest
    GTest::gtest_main
)

target_link_libraries(two_sum_test
    PRIVATE
    two_sum
    GTest::gtest
    GTest::gtest_main
)