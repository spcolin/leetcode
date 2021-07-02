//
// Created by 刘春圃 on 2020/5/17.
//

#include "p1351.h"
int Solution_p1351::countNegatives(vector<vector<int>> &grid) {

    int count=0;
    for(int i=0;i<grid.size();++i)
    {
        auto arr=grid[i];
        reverse(arr.begin(),arr.end());
        auto pos=lower_bound(arr.begin(),arr.end(),0);

        count+=distance(arr.begin(),pos);
    }

    return count;
}