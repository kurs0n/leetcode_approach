#include "list_utils.hpp"
#include <gtest/gtest.h>

namespace
{
    TEST(listNodeSuite, findMidpointForEven){
        ListNode* list1 = new ListNode(1,new ListNode(2, new ListNode(3, new ListNode(4, nullptr))));
        ListNode* midpoint = findMidpoint(list1);
        
        EXPECT_EQ(midpoint->val, 3);
    }
    TEST(listNodeSuite, findMidpointForNotEven){
        ListNode* list1 = new ListNode(1,new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5, nullptr)))));
        ListNode* midpoint = findMidpoint(list1);
        
        EXPECT_EQ(midpoint->val, 3);
    }
    TEST(listNodeSuite, findMidpointOneArray){ 
        ListNode* list1 = new ListNode(1, nullptr);
        ListNode* midpoint = findMidpoint(list1);

        EXPECT_EQ(midpoint->val, 1);
    }
    TEST(listNodeSuite, findMidpointArray12){
        ListNode* list1 = new ListNode(1, new ListNode(2, nullptr));
        ListNode* midpoint = findMidpoint(list1);

        EXPECT_EQ(midpoint->val, 2);
    }
    TEST(listNodeSuite, findMidpointArray123){
        ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(3, nullptr)));
        ListNode* midpoint = findMidpoint(list1);
        
        EXPECT_EQ(midpoint->val, 2);
    }
    TEST(listNodeSuite, findMidpointLongerList){
        ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(6, new ListNode(7, new ListNode(8, new ListNode(9, nullptr)))))))));
        ListNode* midpoint = findMidpoint(list1);
        
        EXPECT_EQ(midpoint->val, 5);
    }
    TEST(listNodeSuite, reverseList){
        ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(6, new ListNode(7, new ListNode(8, new ListNode(9, nullptr)))))))));
        ListNode* begin= reverseList(list1);
        
        EXPECT_EQ(begin->val, 9);
    }
}