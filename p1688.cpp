//
// Created by colin on 2020/12/31.
//

#include "p1688.h"


int Solution_p1688::numberOfMatches(int n) {

    if(n==1)
    {
        return 0;
    }
    else
    {
        if (n%2==0)
        {
            return n/2+numberOfMatches(n/2);
        }
        else
        {
            return (n-1)/2+numberOfMatches((n-1)/2+1);
        }
    }
}