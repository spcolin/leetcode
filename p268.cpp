//
// Created by Administrator on 2021/5/19.
//

#include "p268.h"


int Solution_p268::missingNumber(vector<int> &nums) {

    int sum=(0+nums.size())*(nums.size()+1)/2;

    for(int i=0;i<nums.size();++i)
    {
        sum-=nums[i];
    }

    return sum;

}