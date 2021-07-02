//
// Created by 刘春圃 on 2020/2/7.
//

#include "p83.h"


ListNode* Solution_p83::deleteDuplicates(ListNode *head) {
    if(head==NULL)
    {
        return head;
    }
    else
    {
        ListNode* p=head;
        ListNode* q=p->next;
        while(q!=NULL)
        {
            if(q->val==p->val)
            {
                p->next=q->next;
                delete q;
                q=p->next;
            }
            else
            {
                p=p->next;
                q=p->next;
            }
        }

        return head;
    }



}