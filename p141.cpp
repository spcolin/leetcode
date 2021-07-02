//
// Created by 刘春圃 on 2020/2/7.
//

#include "p141.h"
#include <vector>

using namespace std;

bool Solution_p141::hasCycle(ListNode *head) {

    ListNode* p=new ListNode(-1);
    ListNode* q=head;
    if(head==NULL)
    {
        return false;
    }
    else if((head!=NULL)&&(head->next==head))
    {
        return true;
    }
    else
    {
        while(head!=NULL)
        {
            if(head->next==head)
            {
                return true;
            }
            else if((head->next!=NULL)&&(head->next->next==p))
            {
                return true;
            }
            else if (head->next==NULL)
            {
                return false;
            }
            else
            {
                q=head->next;
                head->next=p;
                head=q;

            }
        }

        return false;
    }



}