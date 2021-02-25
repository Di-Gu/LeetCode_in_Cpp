/**********************************************************************************************************************
    > File Name: main.cpp
    > Author: isgud 
    > Date: 2/25/2021
**********************************************************************************************************************/

#include <cstdio>
#include "data_struct.h"
#include "LinkListSolutionClass.h"

int main() {
    printf("This is mian");

    auto *LinkedList = new ListNode(0);
    LinkedList->next = new ListNode(1);
    LinkedList->next->next = new ListNode(2);
    LinkedList->next->next->next = new ListNode(3);
    LinkedList->next->next->next->next = new ListNode(4);
    LinkedList->next->next->next->next->next = new ListNode(5);

    auto res = LC0019::removeNthFromEnd(LinkedList, 3);

    return 0;
}
