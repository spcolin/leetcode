//
// Created by 刘春圃 on 2020/1/28.
//

#include "p876.h"
#include <iostream>


ListNode* Solution_p876::middleNode(ListNode *head) {

    int node_count=0,node_num=0;
    ListNode* p=head;
    while(p)
    {
        ++node_count;
        p=p->next;
    }
    node_num=node_count/2+1;

    int node_idx=1;
    while(head)
    {
        if(node_idx==node_num)
        {
            return head;
        }
        else
        {
            head=head->next;
            ++node_idx;
        }
    }

    return head;




}