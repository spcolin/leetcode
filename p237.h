//
// Created by 刘春圃 on 2020/1/30.
//

#ifndef LEETCODE_P237_H
#define LEETCODE_P237_H

#include "iostream"
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };


class Solution_p237
{
    void deleteNode(ListNode* node);
};

#endif //LEETCODE_P237_H
