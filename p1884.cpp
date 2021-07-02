//
// Created by Administrator on 2021/6/10.
//

#include "p1884.h"


int Solution_p1884::twoEggDrop(int n) {

    int min=n;
    int count1=0;
    int count2=0;
    int count=0;

    for(int i=1;i<n;++i)
    {
        count1=static_cast<int>(n/i)+n%i;
        count2=static_cast<int>(n/i)-1+i-1;
        count= max(count1,count2);

        if(count<min)
        {
            min=count;
        }

    }

    return min;


}