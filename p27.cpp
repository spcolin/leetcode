//
// Created by 刘春圃 on 2020/2/21.
//

#include "p27.h"

//int Solution_p27::removeElement(vector<int> &nums, int val) {
//
//    int count=0;
//    for(auto i=nums.begin();i!=nums.end();++i)
//    {
//        if((*i)==val)
//        {
//            ++count;
//        }
//    }
//
//    return nums.size()-count;
//
//}


int Solution_p27::removeElement(vector<int> &nums, int val) {

    int num_of_val=0;
    for(int i=0;i<nums.size();++i)
    {
        if(nums[i]==val)
        {
            ++num_of_val;
        }
        else
        {
            nums[i-num_of_val]=nums[i];

        }
    }

    nums.erase(nums.end()-num_of_val,nums.end());

    return nums.size();

}

