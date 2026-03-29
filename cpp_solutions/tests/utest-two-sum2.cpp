#include "two-sum2.hpp"
#include <gtest/gtest.h>

namespace
{
    TEST(TwoSum2, firstTestSuite)
    {
        Solution s;
        std::vector<int> v{2,7,11,15};
        ASSERT_EQ(s.twoSum(v,9), std::vector<int>({1,2}));
    }
    TEST(TwoSum2, secondTestSuite)
    {
        Solution s;
        std::vector<int> v{2,3,4};
        ASSERT_EQ(s.twoSum(v,6), std::vector<int>({1,3}));
    }
    TEST(TwoSum2, thirdTestSuite)
    {
        Solution s;
        std::vector<int> v{-1, 0};
        ASSERT_EQ(s.twoSum(v,-1), std::vector<int>({1,2}));
    }
}