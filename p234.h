//
// Created by 刘春圃 on 2020/2/7.
//

#ifndef LEETCODE_P234_H
#define LEETCODE_P234_H

#include <iostream>
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };


class Solution_p234
{
public:
    bool isPalindrome(ListNode* head);
};
#endif //LEETCODE_P234_H
