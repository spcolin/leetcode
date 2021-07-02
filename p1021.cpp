//
// Created by colin on 2021/1/1.
//

#include "p1021.h"


string Solution_p1021::removeOuterParentheses(string S) {

    int left_count=0,right_count=0;
    string rst="";
    string current="";
    for(auto i=S.begin();i!=S.end();++i)
    {
        current=current+*i;

        if(*i=='(')
        {
            ++left_count;
        }
        if(*i==')')
        {
            ++right_count;
        }

        if(left_count==right_count)
        {
            int len=current.size();
            if (len>2)
            {
                rst=rst+current.substr(1,len-2);
            }

            left_count=0;
            right_count=0;
            current="";

        }

    }

    return rst;


}