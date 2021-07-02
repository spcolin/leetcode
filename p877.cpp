//
// Created by Administrator on 2021/6/12.
//

#include "p877.h"


bool Solution_p877::stoneGame(vector<int> &piles) {

    int n=piles.size();
    vector<vector<int>> dp(n,vector<int>(n));

    for(int i=0;i<n;++i)
    {
        dp[i][i]=piles[i];
    }

    for(int dis=1;dis<n;++dis)
    {
        for(int i=0;i<n-dis;++i)
        {
            dp[i][i+dis]= max(piles[i]-dp[i+1][i+dis],piles[i+dis]-dp[i][i+dis-1]);
        }
    }

    return dp[0][n-1]>0;


}