//
// Created by 刘春圃 on 2020/2/7.
//

#ifndef LEETCODE_P83_H
#define LEETCODE_P83_H
#include <iostream>

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
};

class Solution_p83
{
public:
    ListNode* deleteDuplicates(ListNode* head);
};

#endif //LEETCODE_P83_H
