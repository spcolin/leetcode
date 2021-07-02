//
// Created by Administrator on 2021/6/21.
//

#include "p931.h"


int Solution_p931::minFallingPathSum(vector<vector<int>> &matrix) {

    vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),0));

    int row=matrix.size();
    int col=matrix[0].size();


    for(int i=0;i<col;++i)
    {
        dp[0][i]=matrix[0][i];
    }


    for(int i=1;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            int minn=INT_MAX;
            if(j-1>=0)
            {
                minn= min(minn,matrix[i][j]+dp[i-1][j-1]);
            }
            minn= min(minn,matrix[i][j]+dp[i-1][j]);
            if(j+1<matrix[0].size())
            {
                minn=min(minn,matrix[i][j]+dp[i-1][j+1]);
            }

            dp[i][j]=minn;
        }
    }


    return *min_element(dp[row-1].begin(),dp[row-1].end());


}