#include <gtest/gtest.h>
#include <vector>
#include "binary-search.hpp"
namespace
{
    TEST(BinarySearchTestSuite, firstTest){
        Solution s;
        std::vector<int> test = {-1, 0, 2, 4, 6, 8};
        int target = 4;
        int output = s.binarySearch(test,target);
        EXPECT_EQ(output, 3);
    }
    TEST(BinarySearchTestSuite, secondTest){
        Solution s;
        std::vector<int> test = {-1,0,3,5,9,1};
        int target = 2;
        int output = s.binarySearch(test,target);
        EXPECT_EQ(output, -1);
    }
    TEST(BinarySearchTestSuite, thirdTest){
        Solution s;
        std::vector<int> test = {2,5};
        int target = 5;
        int output = s.binarySearch(test,target);
        EXPECT_EQ(output, 1);
    }

}