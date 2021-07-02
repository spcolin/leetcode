//
// Created by 刘春圃 on 2020/1/24.
//

#include "p1252.h"
#include <vector>
using namespace std;

int Solution_p1252::oddCells(int n, int m, vector<vector<int>> &indices) {

    vector<bool > row_status(n);
    vector<bool > col_status(m);
    for(auto i=indices.begin();i!=indices.end();++i)
    {
        row_status[(*i)[0]]=!row_status[(*i)[0]];
        col_status[(*i)[1]]=!col_status[(*i)[1]];

    }

    int col_odd_num=0;
    for (auto i=col_status.begin();i!=col_status.end();++i)
    {
        if(*i==true)
        {
            ++col_odd_num;
        }
    }

    int odd_num=0;

    for(auto i =row_status.begin();i!=row_status.end();++i)
    {
        if(*i== false)
        {
            odd_num+=col_odd_num;
        }
        else
        {
            odd_num+=m-col_odd_num;
        }

    }

    return odd_num;




}