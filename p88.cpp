//
// Created by 刘春圃 on 2020/2/27.
//

#include "p88.h"



void Solution_p88::merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {

    if((m==0)&&(n!=0))
    {
        int pos=0;
        while(pos<n)
        {
            nums1[pos]=nums2[pos];
            ++pos;
        }
    }
    else if((m!=0)&&(n!=0))
    {


        int current_pos=m+n-1;
        int pos1=m-1;
        int pos2=n-1;
        while(current_pos>=0)
        {
            if((pos1>=0)&&(pos2>=0))
            {
                if(nums1[pos1]>nums2[pos2])
                {
                    nums1[current_pos]=nums1[pos1];
                    --pos1;
                }
                else
                {
                    nums1[current_pos]=nums2[pos2];
                    --pos2;
                }

                --current_pos;
            }
            else
            {
                break;
            }

        }

        if((pos1<0)&&(pos2>=0))
        {
            while(pos2>=0)
            {
                nums1[current_pos]=nums2[pos2];
                --pos2;
                --current_pos;
            }
        }
        else
        {

        }



    }
    else
    {

    }


}