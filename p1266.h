//
// Created by colin on 1/7/20.
//

#ifndef LEETCODE_P1266_H
#define LEETCODE_P1266_H

#include <vector>
using namespace std;
class Solution_p1266
{
public:
    int minTimeToVisitAllPoints(vector<vector<int >>& points);
    vector<int > move_direction(const vector<int>& current_point,const vector<int>& target_point);
    int betterSolution(vector<vector<int>>& points);
};
#endif //LEETCODE_P1266_H
