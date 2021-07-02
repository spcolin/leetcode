//
// Created by Administrator on 2021/6/15.
//

#include "p1140.h"


int Solution_p1140::stoneGameII(vector<int> &piles) {

    int n=piles.size();

    vector<vector<int>> dp(n,vector<int>(n+1,0));

    int sum=0;
    for(int i=n-1;i>=0;--i)
    {
        sum+=piles[i];
        for(int j=1;j<=n;++j)
        {
            for(int k=1;k<=2*j;++k)
            {
                if(i+k>=n)
                {
                    dp[i][j]=sum;
                }
                else
                {
                    dp[i][j]= max(dp[i][j],sum-dp[i+k][max(j,k)]);

                }
            }
        }
    }

    return dp[0][1];

}