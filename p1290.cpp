//
// Created by 刘春圃 on 2020/1/28.
//

#include "p1290.h"
#include <math.h>

int Solution_p1290::getDecimalValue(ListNode *head) {

    int num = 0;
    while(head){
        num = num*2 + head->val;
        head=head->next;
    }
    return num;



}