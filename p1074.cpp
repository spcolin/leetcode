//
// Created by Administrator on 2021/6/14.
//

#include "p1074.h"


int Solution_p1074::numSubmatrixSumTarget(vector<vector<int>> &matrix, int target) {

    vector<vector<int>> sum_mat(matrix.size(),vector<int>(matrix[0].size(),0));

    for(int row=0;row<matrix.size();++row)
    {
        for(int col=0;col<matrix[0].size();++col)
        {
            if(row==0&col==0)
            {
                sum_mat[row][col]=matrix[row][col];
            }
            else if(row==0)
            {
                sum_mat[row][col]=sum_mat[row][col-1]+matrix[row][col];
            }
            else if(col==0)
            {
                sum_mat[row][col]=sum_mat[row-1][col]+matrix[row][col];
            }
            else
            {
                sum_mat[row][col]=sum_mat[row-1][col]+sum_mat[row][col-1]-sum_mat[row-1][col-1]+matrix[row][col];
            }
        }
    }

//    for(auto i:sum_mat)
//    {
//        for(auto j:i)
//        {
//            cout<<j<<" ";
//        }
//        cout<<endl;
//    }

    int count=0;

    for(int row_l=0;row_l<matrix.size();++row_l)
    {
        for(int col_l=0;col_l<matrix[0].size();++col_l)
        {
            for(int row=0;row+row_l<matrix.size();++row)
            {
                for(int col=0;col+col_l<matrix[0].size();++col)
                {
                    if(row==0&&col==0)
                    {
                        if(sum_mat[row+row_l][col+col_l]==target)
                        {
                            ++count;
                        }
                    }
                    else if(row==0)
                    {
                        if(sum_mat[row+row_l][col+col_l]-sum_mat[row+row_l][col-1]==target)
                        {
                            ++count;
                        }
                    }
                    else if(col==0)
                    {
                        if(sum_mat[row+row_l][col+col_l]-sum_mat[row-1][col+col_l]==target)
                        {
                            ++count;
                        }
                    }
                    else
                    {
                        if(sum_mat[row+row_l][col+col_l]-sum_mat[row-1][col+col_l]-sum_mat[row+row_l][col-1]+sum_mat[row-1][col-1]==target)
                        {
                            ++count;
                        }
                    }


                }

            }
        }
    }



    return count;


}