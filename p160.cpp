//
// Created by 刘春圃 on 2020/2/7.
//

#include "p160.h"


ListNode* Solution_p160::getIntersectionNode(ListNode *headA, ListNode *headB) {

    if((headA==NULL)||(headB==NULL))
    {
        return NULL;
    }
    else if((headA->next==headB)&&(headB->next==headA))
    {
        return headA;
    }
    else if(headA==headB)
    {
        return headA;
    }
    else
    {
        int A_length=0,B_length=0;
        ListNode* p=NULL;
        p=headA;
        while(p!=NULL)
        {
            ++A_length;
            p=p->next;
        }
        p=headB;
        while (p!=NULL)
        {
            ++B_length;
            p=p->next;
        }

        if(A_length>=B_length)
        {
            for(int i=0;i<(A_length-B_length);++i)
            {
                headA=headA->next;
            }
            if(headA==headB)
            {
                return headA;
            }
            while(headA!=NULL)
            {
                if(headA->next==headB->next)
                {
                    return headA->next;
                }
                headA=headA->next;
                headB=headB->next;

            }

            return NULL;

        }
        else
        {
            for(int i=0;i<(B_length-A_length);++i)
            {
                headB=headB->next;
            }
            if(headA==headB)
            {
                return headA;
            }
            while(headB!=NULL)
            {
                if(headA->next==headB->next)
                {
                    return headA->next;
                }
                headA=headA->next;
                headB=headB->next;
            }


            return NULL;
        }



    }



}