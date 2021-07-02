//
// Created by 刘春圃 on 2020/1/28.
//

#ifndef LEETCODE_P876_H
#define LEETCODE_P876_H
#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution_p876
{
public:
    ListNode* middleNode(ListNode* head);
};

#endif //LEETCODE_P876_H
