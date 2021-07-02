//
// Created by Administrator on 2021/5/17.
//

#include "p476.h"


int Solution_p476::findComplement(int num) {
    vector<int> a;
    int rst=0;
    while(num!=0)
    {
        a.push_back(num%2);
        num/=2;
    }

    int count=0;


    for(auto i=a.begin();i!= a.end();++i)
    {
        if(*i==0)
        {
            rst+=pow(2,count);
        }

        ++count;
    }

    return rst;

}