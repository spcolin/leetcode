//
// Created by Administrator on 2021/5/13.
//

#include "p1640.h"


bool Solution_p1640::canFormArray(vector<int> &arr, vector<vector<int>> &pieces) {

    for (int i=0;i<pieces.size();++i)
    {
        auto sub_arr=pieces[i];

        auto start= find(arr.begin(),arr.end(),sub_arr[0]);

        if (start!=arr.end())
        {
            for(int j=0;j<sub_arr.size();++j)
            {
                if(sub_arr[j]!=*(start+j))
                {
                    return false;
                }
            }
        }
        else
        {
            return false;
        }
    }

    return true;
}