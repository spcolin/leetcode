//
// Created by 刘春圃 on 2020/5/17.
//

#include "p1337.h"

bool Solution_p1337::vector_cmp(vector<int> &a, vector<int> &b) {
    if(a[0]!=b[0])
    {
        return a[0]<b[0];
    }
    else
    {
        return a[1]<b[1];
    }
}
vector<int> Solution_p1337::kWeakestRows(vector<vector<int>> &mat, int k) {

    vector<vector<int>> soldier_vector;
    vector<int> rst;
    for(int i=0;i<mat.size();++i)
    {
        int soldier_count=0;
        for(int j=0;j<mat[i].size();++j)
        {
            if(mat[i][j]==1)
            {
                ++soldier_count;
                if(j==mat[i].size()-1)
                {
                    soldier_vector.push_back(vector<int>{soldier_count,i});
                }

            }
            else
            {
                soldier_vector.push_back(vector<int>{soldier_count,i});
                break;
            }
        }


    }

    sort(soldier_vector.begin(),soldier_vector.end(),Solution_p1337::vector_cmp);

    for(int i=0;i<k;++i)
    {
        rst.push_back(soldier_vector[i][1]);
    }

    return rst;

}