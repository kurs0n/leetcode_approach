#include "reverse-linked-list.hpp"
#include <gtest/gtest.h>

namespace
{
    TEST(ReverseLinkedList, firstTestSuite)
    {
        ListNode *data = new ListNode(0,new ListNode(1,new ListNode(2,new ListNode(3, nullptr))));
        Solution s;
        
        ListNode *test = s.reverseList(data);
        ASSERT_EQ(test->val, 3);
        test = test->next;
        ASSERT_EQ(test->val, 2);
        test = test->next;
        ASSERT_EQ(test->val, 1);
        test = test->next;
        ASSERT_EQ(test->val, 0);
        test = test->next;
        ASSERT_EQ(test, nullptr);
    }
    TEST(ReverseLinkedList, secondTestSuite)
    {

        ListNode *data = new ListNode(1,new ListNode(2,nullptr));
        Solution s;
        
        ListNode *test = s.reverseList(data);
        ASSERT_EQ(test->val, 2);
        test = test->next;
        ASSERT_EQ(test->val, 1);
        test = test->next;
        ASSERT_EQ(test,nullptr);
    }   
    TEST(ReverseLinkedList, thirdTestSuite)
    {

        ListNode *data = new ListNode();
        Solution s;
        ListNode *test = s.reverseList(data);

        ASSERT_EQ(test->next, nullptr);
    } 
}