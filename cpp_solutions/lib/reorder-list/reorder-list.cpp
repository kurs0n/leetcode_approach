#include "reorder-list.hpp"

void Solution::reorderList(ListNode* head){
    if (!head || !head->next) return;

    ListNode* firstHalf = head;
    ListNode* pointerFirstHalf = firstHalf;
    ListNode* midpoint = findMidpoint(head); 

    if(pointerFirstHalf->next){
        while(pointerFirstHalf->next != midpoint){
            pointerFirstHalf = pointerFirstHalf->next;
        }
    
        pointerFirstHalf->next = nullptr;
    }
    // reverse half of the linked list 
    ListNode* reversedSecondHalf = nullptr;  
    ListNode* temp = midpoint;
    ListNode* curr = midpoint;    
    while(curr != nullptr){
        curr = curr->next;
        temp->next = reversedSecondHalf;
        reversedSecondHalf = temp;
        temp = curr;
    }
    // ****************
    while(firstHalf != nullptr && reversedSecondHalf != nullptr){
        ListNode* nextFirstHalf = firstHalf->next;
        ListNode* nextSecondHalf = reversedSecondHalf->next;

        firstHalf->next = reversedSecondHalf;
        
        if(nextFirstHalf){
            reversedSecondHalf->next = nextFirstHalf;
        } else {
            reversedSecondHalf->next = reversedSecondHalf->next;
        }
        
        firstHalf = nextFirstHalf;
        reversedSecondHalf = nextSecondHalf;
    }
}