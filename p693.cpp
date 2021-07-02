//
// Created by Administrator on 2021/5/19.
//

#include "p693.h"


bool Solution_p693::hasAlternatingBits(int n) {

    bool mark= true;
    int current_num=1-(n%2);
    while(n!=0)
    {
        if(current_num==(n%2))
        {
            mark= false;
            break;
        }
        else
        {
            current_num=n%2;
        }
        n/=2;
    }

    return mark;
}