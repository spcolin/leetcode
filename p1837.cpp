//
// Created by Administrator on 2021/5/16.
//

#include "p1837.h"


int Solution_p1837::sumBase(int n, int k) {

    int rst=0;

    int rest=0;
    while(n!=0)
    {
       rest=n%k;
       rst+=rest;
       n/=k;

    }

    return rst;
}