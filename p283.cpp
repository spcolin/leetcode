//
// Created by 刘春圃 on 2020/2/18.
//

#include "p283.h"



//void Solution_p283::moveZeroes(vector<int> &nums) {
//
//    if((nums.size()!=0)&&(nums.size()!=1))
//    {
//        int len_of_nums=nums.size();
//        int i=0,j=len_of_nums-1;
//        while(i<j)
//        {
//            if(nums[j]==0)
//            {
//                --j;
//            }
//            else
//            {
//                if(nums[i]==0)
//                {
//                    swap(nums[i],nums[j]);
//                    ++i;
//                    --j;
//                }
//                else
//                {
//                    ++i;
//                }
//            }
//        }
//    }
//
//
//}



void Solution_p283::moveZeroes(vector<int> &nums) {

    int num_of_zero=0;
    for(int i=0;i<nums.size();++i)
    {
        if(nums[i]==0)
        {
            ++num_of_zero;
        }
        else
        {
            nums[i-num_of_zero]=nums[i];

        }
    }

    for(int i=nums.size()-num_of_zero;i<nums.size();++i)
    {
        nums[i]=0;
    }




}