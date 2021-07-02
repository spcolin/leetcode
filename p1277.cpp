//
// Created by Administrator on 2021/6/9.
//

#include "p1277.h"


int Solution_p1277::countSquares(vector<vector<int>> &matrix) {

    int count=0;

    for(int row=0;row<matrix.size();++row)
    {
        count+=matrix[row][0];
    }
    for(int col=1;col<matrix[0].size();++col)
    {
        count+=matrix[0][col];
    }

    for(int row=1;row<matrix.size();++row)
    {
        for(int col=1;col<matrix[0].size();++col)
        {
            if(matrix[row][col]==1)
            {
                matrix[row][col]=1+ min(min(matrix[row-1][col-1],matrix[row-1][col]),matrix[row][col-1]);
                count+=matrix[row][col];
            }
        }
    }


    return count;

}