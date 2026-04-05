#include "list_utils.hpp"

ListNode* findMidpoint(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    
    return slow;
}

ListNode* reverseList(ListNode* head){
    ListNode* prev = nullptr;
    ListNode* next = nullptr;
    ListNode* curr = head;
    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
