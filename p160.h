//
// Created by 刘春圃 on 2020/2/7.
//

#ifndef LEETCODE_P160_H
#define LEETCODE_P160_H

#include <iostream>
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
};

class Solution_p160
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);


};


#endif //LEETCODE_P160_H
