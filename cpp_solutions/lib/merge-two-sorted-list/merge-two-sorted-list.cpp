#include "merge-two-sorted-list.hpp"

ListNode* Solution::mergeTwoLists(ListNode *list1, ListNode* list2){
    ListNode* temp = new ListNode();
    ListNode* begin = temp; 
    while(list1 != nullptr && list2 != nullptr){  
        if(list1->val > list2->val){
            begin->next = list2;
            list2 = list2->next; 
        } else {
            begin->next = list1;
            list1 = list1->next;
        } 
        
        begin = begin->next;
    }     
    
    if(list1 != nullptr){ 
        begin->next = list1;
    }
        
    if(list2 != nullptr) {
        begin->next = list2;
    }

    return temp->next;
};
