#include "has-cycle.hpp"

bool Solution::hasCycle(ListNode* head){ 
    ListNode* oneStep = head; 
    ListNode* twoStep = nullptr;
    if(head != nullptr && head->next != nullptr){
        twoStep = head->next;
    }
    while(oneStep != nullptr && twoStep != nullptr){
        if(oneStep == twoStep){ 
            return true;
        }
        oneStep = oneStep->next;
        twoStep = twoStep->next;

        if(twoStep != nullptr){
            twoStep = twoStep->next;
        }
    }

    return false;
} 