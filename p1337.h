//
// Created by 刘春圃 on 2020/5/17.
//

#ifndef LEETCODE_P1337_H
#define LEETCODE_P1337_H

#include <vector>
#include <algorithm>
using namespace std;

class Solution_p1337
{
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k);
    static bool vector_cmp(vector<int> &a,vector<int> &b);
};
#endif //LEETCODE_P1337_H
