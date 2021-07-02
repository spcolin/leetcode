//
// Created by 刘春圃 on 2020/1/30.
//

#include "p206.h"


//ListNode* Solution_p206::reverseList(ListNode *head) {
//
//    if(head==NULL)
//    {
//        return head;
//    }
//    else if(head->next==NULL)
//    {
//        return head;
//    }
//    else
//    {
//        ListNode* p=NULL;
//        ListNode* q=head;
//        ListNode* k=head->next;
//        while(k!=NULL)
//        {
//            q->next=p;
//            p=q;
//            q=k;
//            k=k->next;
//        }
//        q->next=p;
//
//        return q;
//    }
//
//}


ListNode* Solution_p206::reverseList(ListNode *head) {

    if((head==NULL)||(head->next==NULL))
    {
        return head;
    }
    else
    {

        ListNode* vhead=new ListNode(-1);
        ListNode* p=head;
        ListNode* q=head->next;
        while(q!=NULL)
        {
            p->next=vhead->next;
            vhead->next=p;
            p=q;
            q=q->next;
        }

        p->next=vhead->next;
        vhead->next=p;
        return p;
    }


}