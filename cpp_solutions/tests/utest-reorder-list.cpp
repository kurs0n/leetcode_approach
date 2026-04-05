#include "reorder-list.hpp"
#include <gtest/gtest.h>

namespace
{
    TEST(ReorderListSuite, firstTestSuite){
        Solution s;
        ListNode* list = new ListNode(1,new ListNode(2, new ListNode(3, new ListNode(4, nullptr))));
        s.reorderList(list);
        EXPECT_EQ(list->val, 1);
        list = list->next;
        EXPECT_EQ(list->val, 4);
        list = list->next;
        EXPECT_EQ(list->val, 2);
        list = list->next;
        EXPECT_EQ(list->val, 3);
        list = list->next;
        EXPECT_EQ(list, nullptr);
    }
    TEST(ReorderListSuite, secondTestSuite){
        Solution s;
        ListNode* list = new ListNode(1,new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5, nullptr)))));
        s.reorderList(list);
        EXPECT_EQ(list->val, 1);
        list = list->next;
        EXPECT_EQ(list->val, 5);
        list = list->next;
        EXPECT_EQ(list->val, 2);
        list = list->next;
        EXPECT_EQ(list->val, 4);
        list = list->next;
        EXPECT_EQ(list->val, 3);
        list = list->next;
        EXPECT_EQ(list, nullptr);
    }
    TEST(ReorderListSuite, thirdTestSuite){
        Solution s;
        ListNode* list = new ListNode(1, nullptr);
        s.reorderList(list);
        EXPECT_EQ(list->val, 1);
    }
}