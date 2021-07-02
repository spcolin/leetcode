//
// Created by 刘春圃 on 2020/3/4.
//

#include "p1221.h"

int Solution_p1221::balancedStringSplit(string s) {

    int L_count=0,R_count=0,balanced_count=0;

    for(auto i:s)
    {
        if(i=='L')
        {
            ++L_count;
        }
        else
        {
            ++R_count;
        }

        if(L_count==R_count)
        {
            ++balanced_count;
        }
    }

    return balanced_count;


}