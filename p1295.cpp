//
// Created by colin on 1/6/20.
//

#include "p1295.h"
#include <vector>
#include <iostream>

using namespace std;

int Solution_p1295::findNumbers(vector<int> &nums) {
    int count=0;
    for(auto i=nums.begin();i!=nums.end();++i)
    {
        if((*i)>=10&&(*i)<100)
        {
            ++count;
        }
        else if((*i)>=1000&&(*i)<10000)
        {
            ++count;
        }
        else
        {}

    }

    return count;

}

void p1295()
{
    vector<int> num={555,901,482,1771};
    Solution_p1295 s;
    int count=s.findNumbers(num);
    cout<<count<<endl;
}