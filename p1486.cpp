//
// Created by Administrator on 2021/5/16.
//

#include "p1486.h"


int Solution_p1486::xorOperation(int n, int start) {

    int rst=start;

    for(int i=1;i<n;++i)
    {
        rst=rst^(start+2*i);
    }

    return rst;
}