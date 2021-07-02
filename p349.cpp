//
// Created by 刘春圃 on 2020/2/18.
//

#include "p349.h"


vector<int> Solution_p349::intersection(vector<int> &nums1, vector<int> &nums2) {

    vector<int> intersec={};
    if(nums1.size()==0||nums2.size()==0)
    {
        return intersec;
    }
    else
    {
        sort(nums1.begin(),nums1.end(),less<int>());
        sort(nums2.begin(),nums2.end(),less<int>());
        if((nums1.back()<nums2.front())||(nums2.back()<nums1.front()))
        {
            return intersec;
        }
        else
        {
            int i=0,j=0;
            while((i<nums1.size())&&(j<nums2.size()))
            {
                if(nums1[i]==nums2[j])
                {
                    intersec.push_back(nums1[i]);
                    ++i;
                    ++j;
                }
                else if(nums1[i]<nums2[j])
                {
                    ++i;
                }
                else{
                    ++j;
                }
            }
            intersec.erase(unique(intersec.begin(),intersec.end()),intersec.end());
            return intersec;


        }



    }





}