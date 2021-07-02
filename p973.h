//
// Created by Administrator on 2021/6/1.
//

#ifndef LEETCODE_P973_H
#define LEETCODE_P973_H

#endif //LEETCODE_P973_H

#include <vector>
#include <functional>
#include <algorithm>
#include <math.h>
#include <queue>
#include <iostream>

using namespace std;


struct cmp
{
    bool operator()(pair<float,int> a,pair<float,int> b)
    {
        return a.first>b.first;
    }
};



class Solution_p973
{

public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k);

};

//bool operator<(pair<float,int> a,pair<float,int> b)
//{
//    return a.first<b.first;
//};