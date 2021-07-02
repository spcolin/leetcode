//
// Created by 刘春圃 on 2020/5/17.
//

#ifndef LEETCODE_P1237_H
#define LEETCODE_P1237_H

#include <vector>
using namespace std;

class CustomFunction {
    public:
         // Returns f(x, y) for any given positive integers x and y.
         // Note that f(x, y) is increasing with respect to both x and y.
         // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
         int f(int x, int y);
};



class Solution_p1237
{
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z);
};
#endif //LEETCODE_P1237_H
