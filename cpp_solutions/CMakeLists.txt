cmake_minimum_required(VERSION 4.1)

project (leetcode)

add_subdirectory(googletest)
include_directories(googletest/include)
include_directories(lib/palindrome)
include_directories(lib/two-sum2)
include_directories(lib/reverse-linked-list)
include_directories(lib/listnode)
include_directories(lib/merge-two-sorted-list)
include_directories(lib/has-cycle)
include_directories(lib/common)
include_directories(lib/reorder-list)
include_directories(lib/bubble-sort)
include_directories(lib/merge-two-sorted-arrays)
include_directories(lib/binary-search)

set (SOURCES 
    src/main.cpp
)

add_executable(main ${SOURCES})
add_compile_options(-g -O0)
add_compile_options(-gdwarf-4)

enable_testing()
add_executable(run_opt_tests
    lib/palindrome/palindrome.cpp tests/utest-palindrome.cpp
    lib/two-sum2/two-sum2.cpp tests/utest-two-sum2.cpp
    lib/reverse-linked-list/reverse-linked-list.cpp tests/utest-reverse-linked-list.cpp
    lib/merge-two-sorted-list/merge-two-sorted-list.cpp tests/utest-merge-two-sorted-list.cpp
    lib/has-cycle/has-cycle.cpp tests/utest-has-cycle.cpp
    lib/common/list_utils.cpp tests/utest-list_utils.cpp
    lib/reorder-list/reorder-list.cpp tests/utest-reorder-list.cpp 
    lib/bubble-sort/bubble-sort.cpp tests/utest-bubble-sort.cpp
    lib/merge-two-sorted-arrays/merge-two-sorted-arrays.cpp tests/utest-merge-two-sorted-arrays.cpp
    lib/binary-search/binary-search.cpp tests/utest-binary-search.cpp
)

target_link_libraries(run_opt_tests 
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(run_opt_tests)