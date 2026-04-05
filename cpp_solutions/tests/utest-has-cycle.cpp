#include "has-cycle.hpp"
#include <gtest/gtest.h>

namespace
{
    TEST(hasCycleSuite, haveCycleSuite){
        Solution s;
        ListNode* list = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, nullptr))));
        ListNode* lastElement = list->next->next->next;       
        lastElement->next = list->next;
        bool hasCycle = s.hasCycle(list);
        EXPECT_EQ(hasCycle, true);
    }
    TEST(hasCycleSuite, dontHaveCycleSuite){
        Solution s;
        ListNode* list = new ListNode(1, new ListNode(2, nullptr));
        bool hasCycle = s.hasCycle(list);
        EXPECT_EQ(hasCycle, false);
    }
    TEST(hasCycleSuite, justOneListNode){
        Solution s;
        ListNode* list = new ListNode(1, nullptr);
        bool hasCycle = s.hasCycle(list);
        EXPECT_EQ(hasCycle, false);
    }
}