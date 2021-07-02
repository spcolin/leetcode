//
// Created by Administrator on 2021/6/21.
//

#include "p1420.h"


int Solution_p1420::numOfArrays(int n, int m, int k) {

    long dp[n][m+1][k+1];
    long M=1e9+7;

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<=m;++j)
        {
            for(int p=0;p<=k;++p)
            {
                dp[i][j][p]=0;
            }
        }
    }

    for(int j=1;j<=m;++j)
    {
        dp[0][j][1]=1;
    }

    for(int i=1;i<n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            for(int p=1;p<=k;++p)
            {
                for(int q=1;q<=j-1;++q)
                {
                    dp[i][j][p]=(dp[i][j][p]+dp[i-1][q][p-1])%M;
                }

                dp[i][j][p]=(dp[i][j][p]+dp[i-1][j][p]*j )%M;
            }
        }
    }


    long rst=0;
    for(int i=1;i<=m;++i)
    {
        rst=(rst+dp[n-1][i][k])%M;
    }

    return rst;
}