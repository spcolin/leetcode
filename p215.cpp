//
// Created by Administrator on 2021/6/3.
//

#include "p215.h"


int Solution_p215::findKthLargest(vector<int> &nums, int k) {


    sort(nums.begin(), nums.end());

    return nums[nums.size()-k];


}