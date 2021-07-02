//
// Created by 刘春圃 on 2020/5/17.
//

#include "p1237.h"

int CustomFunction::f(int x, int y) {
    return x+y;
}

vector<vector<int>> Solution_p1237::findSolution(CustomFunction &customfunction, int z) {

    int max_y=1000;
    vector<vector<int>> rst;
    for(int x=1;x<=1000;++x)
    {
        if(max_y==1)
        {
            break;
        }
        else
        {
            for(int y=1;y<=max_y;++y)
            {

                if(customfunction.f(x,y)==z)
                {

                    rst.push_back(vector<int>{x,y});
                }
                else if(customfunction.f(x,y)>z)
                {
                    max_y=y;
                    break;
                }
            }
        }
    }

    return rst;



}