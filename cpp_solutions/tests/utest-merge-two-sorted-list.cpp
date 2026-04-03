#include "merge-two-sorted-list.hpp"
#include <gtest/gtest.h>

namespace
{
    TEST(MergeTwoSortedListSuite, firstTestSuite){
        Solution s;
        ListNode* list1 = new ListNode(1,new ListNode(2, new ListNode(4, nullptr)));
        ListNode* list2 = new ListNode(1,new ListNode(3, new ListNode(5, nullptr)));
        ListNode* mergedList = s.mergeTwoLists(list1, list2);
        EXPECT_EQ(mergedList->val, 1);
        mergedList = mergedList->next;
        EXPECT_EQ(mergedList->val, 1); 
        mergedList = mergedList->next;
        EXPECT_EQ(mergedList->val, 2); 
        mergedList = mergedList->next; 
        EXPECT_EQ(mergedList->val, 3);
        mergedList = mergedList->next;
        EXPECT_EQ(mergedList->val, 4);
        mergedList = mergedList->next; 
        EXPECT_EQ(mergedList->val, 5); 
    }
    TEST(MergeTwoSortedListSuite, secondTestSuite){
        Solution s;
        ListNode* list1 = new ListNode();
        ListNode* list2 = new ListNode(0, nullptr);
        ListNode* mergedList = s.mergeTwoLists(list1, list2);
        EXPECT_EQ(mergedList->val, 0);
    }
}