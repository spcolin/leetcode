//
// Created by 刘春圃 on 2020/1/30.
//

#include "p21.h"


ListNode* Solution_p21::mergeTwoLists(ListNode *l1, ListNode *l2) {

    if(l1==NULL)
    {
        return l2;
    }
    if(l2==NULL)
    {
        return l1;
    }
    ListNode *head= nullptr;
    if((l1->val)<=(l2->val))
    {
        head=l1;
        l1=l1->next;
        head->next=NULL;
    }
    else
    {
        head=l2;
        l2=l2->next;
        head->next=NULL;
    }

    ListNode* tail= head;
    while((l1!=NULL)&&(l2!=NULL))
    {
        if((l1->val)<=(l2->val))
        {
            tail->next=l1;
            l1=l1->next;
            tail=tail->next;
            tail->next=NULL;
        }
        else
        {
            tail->next=l2;
            l2=l2->next;
            tail=tail->next;
            tail->next=NULL;
        }
    }

    if((l1==NULL)&&(l2!=NULL))
    {
        tail->next=l2;

    }
    if((l1!=NULL)&&(l2==NULL))
    {
        tail->next=l1;

    }

    return head;

}