//
// Created by 刘春圃 on 2020/1/28.
//

#ifndef LEETCODE_P1290_H
#define LEETCODE_P1290_H

#include <iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution_p1290
{
public:
    int getDecimalValue(ListNode* head);
};
#endif //LEETCODE_P1290_H
