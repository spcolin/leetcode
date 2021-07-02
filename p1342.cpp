//
// Created by Administrator on 2021/5/16.
//

#include "p1342.h"


int Solution_p1342::numberOfSteps(int num) {


    int step=0;
    while(num>0)
    {
        if(num%2==0)
        {
            num/=2;
        } else
        {
            num-=1;
        }
        ++step;
    }

    return step;
}