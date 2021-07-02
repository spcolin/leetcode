//
// Created by 刘春圃 on 2020/6/11.
//

#include "p278.h"


bool isBadVersion(int version)
{
    if(version>=1)
    {
        return true;
    }
    else
    {
        return false;
    }
}



int Solution_p278::firstBadVersion(int n) {

    long long int head=1,tail=n;
    long long int mid=0;
    while(head<tail)
    {
        mid=(head+tail)/2;
        if(isBadVersion(mid)== true)
        {
            if(isBadVersion(mid-1)== false)
            {
                break;
            }
            else
            {
                tail=mid-1;
            }
        }
        else
        {
            head=mid+1;
        }
    }

    if(head>=tail)
    {
        return head;
    }
    else
    {
        return mid;

    }



}