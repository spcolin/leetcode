//
// Created by 刘春圃 on 2020/5/20.
//

#include "p704.h"

int Solution_p704::search(vector<int> &nums, int target) {

    if(target>nums[nums.size()-1])
    {
        return -1;
    }
    else
    {
        auto pos=lower_bound(nums.begin(),nums.end(),target);
        if((*pos)==target)
        {
            return distance(nums.begin(),pos);
        }
        else
            {
            return -1;
            }
    }


}