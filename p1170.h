//
// Created by 刘春圃 on 2020/3/27.
//

#ifndef LEETCODE_P1170_H
#define LEETCODE_P1170_H

#include <vector>
#include <string>

using namespace std;

class Solution_p1170
{
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words);
private:
    int f(string s);
};
#endif //LEETCODE_P1170_H
