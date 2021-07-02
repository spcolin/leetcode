//
// Created by Administrator on 2021/5/13.
//
#include "p976.h"

int Solution_p976::largestPerimeter(vector<int> &nums) {

    sort(nums.begin(),nums.end(),greater<int>());
    int p=0;

    for(int i=0;i<nums.size()-2;++i)
    {
        if(nums[i]>=(nums[i+1]+nums[i+2]))
        {
            continue;
        }
        else
        {
            p=nums[i]+nums[i+1]+nums[i+2];
            break;
        }
    }

    return p;


}