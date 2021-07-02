//
// Created by Administrator on 2021/6/10.
//

#include "p1463.h"



int Solution_p1463::cherryPickup(vector<vector<int>> &grid) {

    int row_num=grid.size();
    int col_num=grid[0].size();

    vector<vector<vector<int>>> dp(row_num,vector<vector<int>>(col_num,vector<int>(col_num,INT_MIN)));

    dp[0][0][col_num-1]=grid[0][0]+grid[0][col_num-1];

    for(int i=1;i<row_num;++i)
    {

        for(int j=0;j<col_num;++j)
        {
            for(int dj=-1;dj<=1;++dj)
            {
                int x=j+dj;
                if(x<0||x>=col_num)
                {
                    continue;
                }
                else
                {
                    for(int k=0;k<col_num;++k)
                    {
                        for(int dk=-1;dk<=1;++dk)
                        {
                            int y=k+dk;
                            if(y<0||y>=col_num)
                            {
                                continue;

                            }
                            else
                            {

                                if(j==k)
                                {
                                    dp[i][j][k]= max(dp[i][j][k],dp[i-1][x][y]+grid[i][j]);
                                }
                                else
                                {
                                    dp[i][j][k]= max(dp[i][j][k],dp[i-1][x][y]+grid[i][j]+grid[i][k]);
                                }



                            }
                        }
                    }
                }
            }

        }
    }

    int max_num=0;
    for(int i=0;i<col_num;++i)
    {
        for(int j=0;j<col_num;++j)
        {
            if(dp[row_num-1][i][j]>max_num)
            {
                max_num=dp[row_num-1][i][j];
            }
        }
    }

    return max_num;


}