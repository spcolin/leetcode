//
// Created by 刘春圃 on 2020/1/24.
//

#ifndef LEETCODE_P905_H
#define LEETCODE_P905_H

#include <vector>
using namespace std;

class Solution_p905
{
public:
    vector<int> sortArrayByParity(vector<int>& A);

private:
    bool isEven(int &target);
};
#endif //LEETCODE_P905_H
