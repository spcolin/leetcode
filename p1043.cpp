//
// Created by Administrator on 2021/6/12.
//

#include "p1043.h"


int Solution_p1043::maxSumAfterPartitioning(vector<int> &arr, int k) {


    vector<int> dp(arr.size(),0);

    int max_num=-1;

    for(int i=0;i<k;++i)
    {
        max_num= max(max_num,arr[i]);
        dp[i]=max_num*(i+1);
    }


    for(int i=k;i<arr.size();++i)
    {
        max_num=-1;
        for(int j=1;j<= k;++j)
        {
            max_num= max(max_num,arr[i-j+1]);
            dp[i]= max(dp[i],dp[i-j]+j*max_num);
        }
    }

    return *(dp.end()-1);



}