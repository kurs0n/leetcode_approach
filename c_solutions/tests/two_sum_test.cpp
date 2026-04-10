#include <gtest/gtest.h>

extern "C" { 
    #include "two_sum.h"
}

TEST (TwoSumSuite, twoSumFirst){
    int pointer[] = {1,2};
    int data[] ={0,1,4,10}; 
    int returnSize = 2;

    int* result = twoSum(data,4,5,&returnSize);
    
    EXPECT_EQ(result[0], pointer[0]);
    EXPECT_EQ(result[1], pointer[1]);
} 

TEST(TwoSumSuite, twoSumSecond){
    int pointer[] = {0, 1};
    int data[] = {2, 7,11,15};
    int returnSize = 2; 

    int* result = twoSum(data,4,9,&returnSize);

    EXPECT_EQ(result[0], pointer[0]);
    EXPECT_EQ(result[1], pointer[1]);
}

TEST(TwoSumSuite, twoSumThird ){
    int pointer[] = {1, 2};
    int data[] = {3,2,4};
    int returnSize = 2; 

    int* result = twoSum(data,3,6,&returnSize);

    EXPECT_EQ(result[0], pointer[0]);
    EXPECT_EQ(result[1], pointer[1]);
}
