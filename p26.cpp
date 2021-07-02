//
// Created by 刘春圃 on 2020/2/21.
//

#include "p26.h"


int Solution_p26::removeDuplicates(vector<int> &nums) {


    if(nums.size()==0)
    {
        return 0;
    }
    else if(nums.size()==1)
    {
        return 1;
    }
    else
    {
        int swap_pos=1,current_pos=0,current_val=nums[0];

        while (current_pos<nums.size())
        {
            if(nums[current_pos]==current_val)
            {
                ++current_pos;
            }
            else
            {
                nums[swap_pos]=nums[current_pos];
                ++swap_pos;
                current_val=nums[current_pos];
                ++current_pos;

            }

        }

        nums.erase(nums.begin()+swap_pos,nums.end());
        return nums.size();

    }



}