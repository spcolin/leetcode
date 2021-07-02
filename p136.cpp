//
// Created by Administrator on 2021/5/17.
//

#include "p136.h"


int Solution_p136::singleNumber(vector<int> &nums) {


    int rst=0;
    map<int,int> count_map;
    for(int i=-30000;i<=30000;++i)
    {
        count_map[i]=0;
    }

    for(auto i:nums)
    {
        ++count_map[i];
    }

    for(int i=-30000;i<=30000;++i)
    {
        if(count_map[i]==1)
        {
            rst=i;
            break;
        }
    }

    return rst;
}