//
// Created by colin on 2020/12/29.
//

#include "p53.h"


int Solution_p53::maxSubArray(vector<int> &nums) {

    int current_sum=0;
    int sum_max=nums[0];

    for(auto i:nums)
    {
        current_sum+=i;

        if(current_sum>sum_max)
        {
            sum_max=current_sum;
        }

        if(current_sum<0)
        {
            current_sum=0;
        }
    }

    return sum_max;


}