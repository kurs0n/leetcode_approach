#include "reverse-linked-list.hpp"
#include <gtest/gtest.h>

namespace
{
    TEST(ReverseLinkedList, firstTestSuite)
    {
        Solution s;
        ASSERT_EQ(s.twoSum(v,9), std::vector<int>({1,2}));
    }
    TEST(ReverseLinkedList, secondTestSuite)
    {
        Solution s;
        ASSERT_EQ(s.twoSum(v,6), std::vector<int>({1,3}));
    }
    TEST(ReverseLinkedList, thirdTestSuite)
    {
        Solution s;
        ASSERT_EQ(s.twoSum(v,-1), std::vector<int>({1,2}));
    }
}