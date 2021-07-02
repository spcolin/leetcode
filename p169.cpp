//
// Created by colin on 2020/12/29.
//

#include "p169.h"


int Solution_p167::majorityElement(vector<int> &nums) {

    map<int,int> m;

    int thres=nums.size()/2;

    int major_ele=nums[0];


    for(auto i:nums)
    {
        m[i]++;
        if(m[i]>thres)
        {
            major_ele=i;
            break;
        }
    }


    return major_ele;

}