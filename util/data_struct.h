//
// Created by isgud on 2/20/2021.
//

#ifndef LEETCODE_DATA_STRUCT_H
#define LEETCODE_DATA_STRUCT_H

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif //LEETCODE_DATA_STRUCT_H
