//
// Created by colin on 1/7/20.
//

#include "p1304.h"
#include <vector>

using namespace std;

vector<int> Solution_p1304::sumZero(int n)
{
    vector<int> sum_arr;
    if (n%2==0)
    {
        for(int i=1;i<=n/2;++i)
        {
            sum_arr.push_back(i);
            sum_arr.push_back(-i);
        }
    }
    else
    {
        sum_arr.push_back(0);
        for(int i=1;i<=(n-1)/2;++i)
        {
            sum_arr.push_back(i);
            sum_arr.push_back(-i);
        }
    }

    return sum_arr;

}