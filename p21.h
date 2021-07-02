//
// Created by 刘春圃 on 2020/1/30.
//

#ifndef LEETCODE_P21_H
#define LEETCODE_P21_H

#include <iostream>
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

class Solution_p21
{
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};
#endif //LEETCODE_P21_H
