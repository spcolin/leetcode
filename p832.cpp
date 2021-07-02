//
// Created by 刘春圃 on 2020/1/24.
//

#include "p832.h"


vector<vector<int>> Solution_p832::flipAndInvertImage(vector<vector<int>> &A) {


    for(int i=0;i<A.size();++i)
    {

        for(int k=0,j=A[i].size()-1;k<=j;++k,--j)
        {
            int tmp=A[i][k];
            A[i][k]=(A[i][j]==1?0:1);
            A[i][j]=(tmp==1?0:1);
        }


    }

    return A;


}