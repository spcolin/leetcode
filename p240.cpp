//
// Created by Administrator on 2021/6/3.
//

#include "p240.h"


bool Solution_p240::searchMatrix(vector<vector<int>> &matrix, int target) {

    int row=0;
    int col=matrix[0].size()-1;

    bool mark=false;

    while(row<matrix.size()&&col>=0)
    {
        if(matrix[row][col]==target)
        {
            mark= true;
            break;
        }

        if(target<matrix[row][col])
        {
            --col;
        }
        else
        {
            ++row;
        }
    }


    return mark;
}