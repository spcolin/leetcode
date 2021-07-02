//
// Created by 刘春圃 on 2020/1/30.
//

#ifndef LEETCODE_P206_H
#define LEETCODE_P206_H
#include <iostream>
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

class Solution_p206
{
public:
    ListNode* reverseList(ListNode* head);
};
#endif //LEETCODE_P206_H
