//
// Created by Administrator on 2021/6/14.
//

#include "p1025.h"



bool Solution_p1025::divisorGame(int n) {

    vector<int> dp(n+1,0);

    for(int i=2;i<=n;++i)
    {
        for(int x=1;x<i;++x)
        {
            if(i%x==0)
            {
                if(dp[i-x]==0)
                {
                    dp[i]=1;
                    break;
                }
            }

        }
    }

    return dp[n]==1;



}