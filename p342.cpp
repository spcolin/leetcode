//
// Created by Administrator on 2021/5/22.
//

#include "p342.h"


bool Solution_p342::isPowerOfFour(int n) {

    if (n==0)
    {
        return false;
    }
    else if(n==1)
    {
        return true;
    }
    else
    {
        double m= log2(n);
        m/=2;
        if(ceil(m)== floor(m))
        {
            return true;
        }
        else
        {
            return false;
        }
    }


}