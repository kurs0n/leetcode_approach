#include <gtest/gtest.h>
#include <vector>
#include "bubble-sort.hpp"

namespace
{
    TEST(BubbleSortTestSuite, firstTest){
        std::vector<int> test = {5,3,2,1,8,4,12};
        bubbleSort(&test);
        std::vector<int> sortedVector = {1,2,3,4,5,8,12};
        for(int i=0; i<sortedVector.size(); i++){
            EXPECT_EQ(test.at(i), sortedVector.at(i));
        }
    }
}