//
// Created by Administrator on 2021/6/9.
//

#include "p1314.h"


vector<vector<int>> Solution_p1314::matrixBlockSum(vector<vector<int>> &mat, int k) {

    vector<vector<int>> row_sum_mat;
    for(auto i:mat)
    {
        int sum=0;
        vector<int> row_sum;
        for(auto j:i)
        {
            sum+=j;
            row_sum.push_back(sum);
        }

        row_sum_mat.push_back(row_sum);
    }

    int h=mat.size();
    int w=mat[0].size();

    int left=0,right=0,top=0,bottom=0;

    int num=0;
    vector<vector<int>> rst;
    for(int i=0;i<h;++i)
    {
        vector<int> row_rst;

        if(i-k<0)
        {
            top=0;
        }
        else
        {
            top=i-k;
        }

        if(i+k>=h)
        {
            bottom=h-1;
        }
        else
        {
            bottom=i+k;
        }

        for(int j=0;j<w;++j)
        {
            num=0;
            if(j-k<0)
            {
                left=0;
            }
            else
            {
                left=j-k;
            }

            if(j+k>=w)
            {
                right=w-1;
            }
            else
            {
                right=j+k;
            }

            for(int row=top;row<=bottom;++row)
            {
                num+=row_sum_mat[row][right]-row_sum_mat[row][left]+mat[row][left];
            }

            row_rst.push_back(num);


        }

        rst.push_back(row_rst);
    }

    return rst;

}