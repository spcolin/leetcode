//
// Created by Administrator on 2021/6/10.
//

#include "p1402.h"


int Solution_p1402::maxSatisfaction(vector<int> &satisfaction) {

    sort(satisfaction.begin(),satisfaction.end(),greater<int>());

    int sum=0,curr=0;

    for(auto i:satisfaction)
    {
        if(curr+i>0)
        {
            curr+=i;
            sum+=curr;
        }
        else
        {
            break;
        }

    }

    return sum;

}