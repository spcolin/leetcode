//
// Created by 刘春圃 on 2020/5/30.
//

#include "p35.h"

int Solution_p35::searchInsert(vector<int> &nums, int target) {

    auto pos=lower_bound(nums.begin(),nums.end(),target);
    if(pos==nums.end())
    {
        return nums.size();
    }
    else
    {
        return distance(nums.begin(),pos);

    }


}