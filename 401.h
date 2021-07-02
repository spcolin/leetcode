//
// Created by colin on 2020/12/31.
//

#ifndef LEETCODE_401_H
#define LEETCODE_401_H
#include <string>
#include <vector>
#include <set>
#include <iostream>
using namespace std;


class Solution_p401
{
public:
    vector<string> readBinaryWatch(int num);
    set<int> add_all(int num);
    vector<string> trans(set<int> minutes_pool);

};
#endif //LEETCODE_401_H
