//
// Created by 刘春圃 on 2020/2/7.
//

#include "p234.h"
#include <vector>

using namespace std;

//bool Solution_p234::isPalindrome(ListNode *head) {
//
//    vector<int> linklist_data;
//    ListNode* p=head;
//    while(p!=NULL)
//    {
//        linklist_data.push_back(p->val);
//    }
//    int data_size=linklist_data.size();
//    for(int i=0;i<data_size/2;++i)
//    {
//        if(linklist_data[i]!=linklist_data[data_size-1-i])
//        {
//            return false;
//        }
//    }
//    return true;
//
//
//}

bool Solution_p234::isPalindrome(ListNode *head)
{
    if(head==NULL)
    {
        return true;
    }
    else if((head!=NULL)&&(head->next==NULL))
    {
        return true;
    }
    else if((head!=NULL)&&(head->next!=NULL)&&(head->next->next==NULL))
    {
        if(head->val==head->next->val)
            return true;
        else
            return false;

    }
    else
    {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* newhead=NULL;
        ListNode* p=NULL;
        while((fast->next!=NULL)&&(fast->next->next!=NULL))
        {
            fast=fast->next->next;

            // reverse the first half of the linklist
            p=slow->next;
            slow->next=newhead;
            newhead=slow;
            slow=p;
        }

        // newhead is the head of the reversed list of the first half linklist,slow is the head of the linklist of the second half
        if(fast->next==NULL)
        {

            slow=slow->next;

        }
        else
        {
            p=slow->next;
            slow->next=newhead;
            newhead=slow;
            slow=p;
        }

        while(slow!=NULL)
        {
            if(slow->val!=newhead->val)
            {
                return false;
            }
            else
            {
                slow=slow->next;
                newhead=newhead->next;
            }
        }

        return true;
    }



}