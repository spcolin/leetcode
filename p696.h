//
// Created by 刘春圃 on 2020/3/30.
//

#ifndef LEETCODE_P696_H
#define LEETCODE_P696_H
#include <string>
using namespace std;

class  Solution_p696
{
public:
    int countBinarySubstrings(string s);

private:
    int substr_count(int &start_point,string &s);
};
#endif //LEETCODE_P696_H
