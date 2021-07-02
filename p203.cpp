//
// Created by 刘春圃 on 2020/2/7.
//

#include "p203.h"


ListNode* Solution_p203::removeElements(ListNode *head, int val) {


    if(head==NULL)
    {
        return head;
    }
    else
    {
        ListNode* p=head;
        while((p!=NULL)&&(p->val==val))
        {
            ListNode* q=p->next;
            delete p;
            p=q;
        }
        if(p==NULL)
        {
            return p;
        }
        else
        {
            head=p;
            while(p->next!=NULL)
            {
                if(p->next->val==val)
                {
                   ListNode* q=p->next;
                   p->next=q->next;
                   delete q;
                }
                else
                {
                    p=p->next;
                }


            }

            return head;
        }
    }



}