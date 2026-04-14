#include "merge-two-sorted-arrays.hpp"
#include <gtest/gtest.h>

namespace
{
    TEST(mergeTwoSortedArraysSuite, firstTest){
        Solution s;
        std::vector<int> firstSorted1 = {1,2,3};
        std::vector<int> secondSorted2 = {2,5,6};
        std::vector<int> outputArray = {1,2,2,3,5,6};
         
        std::vector<int> *returnArray = s.mergeTwoArrays(&firstSorted1, &secondSorted2);
        
        for(int i=0; i<outputArray.size(); i++){
            EXPECT_EQ(outputArray.at(i), returnArray->at(i));        
        }
    }
    TEST(mergeTwoSortedArraysSuite, secondTest){
        Solution s;
        std::vector<int> firstSorted1 = {1};
        std::vector<int> secondSorted2 = {};
        std::vector<int> outputArray = {1};
         
        std::vector<int> *returnArray = s.mergeTwoArrays(&firstSorted1, &secondSorted2);
        
        for(int i=0; i<outputArray.size(); i++){
            EXPECT_EQ(outputArray.at(i), returnArray->at(i));        
        }
    }
    TEST(mergeTwoSortedArraysSuite, thirdTest){
        Solution s;
        std::vector<int> firstSorted1 = {0};
        std::vector<int> secondSorted2 = {1};
        std::vector<int> outputArray = {0,1};
         
        std::vector<int> *returnArray = s.mergeTwoArrays(&firstSorted1, &secondSorted2);
        
        for(int i=0; i<outputArray.size(); i++){
            EXPECT_EQ(outputArray.at(i), returnArray->at(i));        
        }
    }
}