//
// Created by Administrator on 2021/5/16.
//

#include "p461.h"


int Solution_p461::hammingDistance(int x, int y) {

    int a= x^y;

    int count=0;
    while(a!=0)
    {
        if (a%2!=0)
        {
            ++count;
        }
        a/=2;
    }

    return count;
}