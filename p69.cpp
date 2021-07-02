//
// Created by 刘春圃 on 2020/6/11.
//

#include "p69.h"


int Solution_p69::mySqrt(int x) {

    if(x==0)
    {
        return 0;
    }
    if(x==1)
    {
        return 1;
    }


    long long int  head=1,tail=x;
    int sqrt=0;
    while(head<tail)
    {
        long long  mid=(head+tail)/2;
        if(mid*mid>x)
        {
            if((mid-1)*(mid-1)<x)
            {
                sqrt=mid-1;
                break;
            }
            else
            {
                tail=mid-1;
            }
        }
        else if(mid*mid<x)
        {
            if((mid+1)*(mid+1)>x)
            {
                sqrt=mid;
                break;
            }
            else
            {
                head=mid+1;
            }
        }
        else
        {
            sqrt=mid;
            break;
        }


    }


    if(head>=tail)
    {
        return head;
    }
    else
    {
        return sqrt;
    }


}