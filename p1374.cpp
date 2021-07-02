//
// Created by 刘春圃 on 2020/4/29.
//

#include "p1374.h"


string Solution_p1374::generateTheString(int n) {

    if(n%2==0)
    {
        string s(n-1,'a');
        s.push_back('b');
        return s;
    }
    else
    {
        string s(n,'a');
        return s;
    }


}