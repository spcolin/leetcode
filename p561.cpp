//
// Created by 刘春圃 on 2020/1/28.
//

#include "p561.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


int Solution_p561::arrayPairSum(vector<int> &nums) {

    sort(nums.begin(),nums.end(),less<int>());
    int sum=0;
    for(auto i=nums.begin();i!=nums.end();i=i+2)
    {
        sum+=(*i);
    }

    return sum;
}