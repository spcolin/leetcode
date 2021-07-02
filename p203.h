//
// Created by 刘春圃 on 2020/2/7.
//

#ifndef LEETCODE_P203_H
#define LEETCODE_P203_H

#include <iostream>
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

class Solution_p203
{
public:
    ListNode* removeElements(ListNode* head, int val);
};


#endif //LEETCODE_P203_H
