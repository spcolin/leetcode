//
// Created by 1 on 2021/7/13.
//

#ifndef LEETCODE_P1387_H
#define LEETCODE_P1387_H

#endif //LEETCODE_P1387_H

#include <algorithm>
#include <functional>
#include <map>
#include <vector>
#include <iostream>


using namespace std;


class Solution_p1387
{
public:
    int getKth(int lo, int hi, int k);
    int transToOne(int num,map<int,int>& ref);
    static bool cmp(vector<int> a,vector<int> b);
};