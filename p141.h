//
// Created by 刘春圃 on 2020/2/7.
//

#ifndef LEETCODE_P141_H
#define LEETCODE_P141_H

#include <iostream>
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
};

class Solution_p141
{
public:
    bool hasCycle(ListNode *head);
};
#endif //LEETCODE_P141_H
