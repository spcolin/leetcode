//
// Created by Administrator on 2021/5/17.
//

#include "p762.h"


bool Solution_p762::isPrime(int num) {
    bool mark=true;
    if(num==1)
    {
        mark= false;
    }
    else
    {
        for(int i=2;i<num;++i)
        {
            if (num%i==0)
            {
                mark= false;
            }
        }
    }

    return  mark;
}
int Solution_p762::countPrimeSetBits(int left, int right) {

    int rst=0;
    int count=0;
    int num=0;
    for(int i=left;i<=right;++i)
    {
        count=0;
        num=i;
        while(num!=0)
        {
            count+=num%2;
            num/=2;
        }

        rst+= isPrime(count);

    }


    return rst;


}