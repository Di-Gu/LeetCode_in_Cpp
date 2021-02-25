/**********************************************************************************************************************
    > File Name: LC0019_RemoveNthNodeFromEndOfList.cpp
    > Author: isgud
    > Date: 2/20/2021.
**********************************************************************************************************************/

#include "LinkListSolutionClass.h"

ListNode* LC0019::removeNthFromEnd(ListNode* head, int n) {
    if(!head) return nullptr;

    auto *dummy = new ListNode(0);
    dummy->next = head;

    ListNode *fast = dummy;
    ListNode *slow = dummy;

    while(fast && n >= 0) {
        fast = fast->next;
        n--;
    }

    while(fast) {
        fast = fast->next;
        slow = slow->next;
    }

    // nice trick !!
    /*for (;fast->next;fast = fast->next)
        slow = slow->next;*/

    slow->next = slow->next->next;

    return dummy->next;
};