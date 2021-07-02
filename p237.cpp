//
// Created by 刘春圃 on 2020/1/30.
//

#include "p237.h"


void Solution_p237::deleteNode(ListNode *node) {

    ListNode* pnext=node->next;
    node->val=pnext->val;
    node->next=pnext->next;
    delete pnext;
}