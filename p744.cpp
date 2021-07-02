//
// Created by 刘春圃 on 2020/5/20.
//

#include "p744.h"
char Solution_p744::nextGreatestLetter(vector<char> &letters, char target) {

    auto rst=upper_bound(letters.begin(),letters.end(),target);
    if(rst==letters.end())
    {
        return letters[0];
    }
    else
    {

        return *rst;

    }

}