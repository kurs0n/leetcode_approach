cmake_minimum_required(VERSION 4.1)

project (leetcode)

add_subdirectory(googletest)
include_directories(googletest/include)
include_directories(lib/palindrome)
include_directories(lib/two-sum2)
include_directories(lib/reverse-linked-list)

set (SOURCES 
    src/main.cpp
)

add_executable(main ${SOURCES})

target_include_directories(main
    PRIVATE
    ${PROJECT_SOURCE_DIR}/lib/palindrome
    ${PROJECT_SOURCE_DIR}/lib/two-sum2
)

enable_testing()
add_executable(run_opt_tests
    lib/palindrome/palindrome.cpp tests/utest-palindrome.cpp
    lib/two-sum2/two-sum2.cpp tests/utest-two-sum2.cpp
    lib/reverse-linked-list/reverse-linked-list.cpp tests/utest-reverse-linked-list.cpp
)

target_link_libraries(run_opt_tests 
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(run_opt_tests)