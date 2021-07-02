//
// Created by colin on 2021/1/1.
//

#include "p1047.h"


string Solution_p1047::removeDuplicates(string S) {

    stack<char> a;
    a.push(*S.begin());
    string rst="";
    for(auto i=S.begin()+1;i!=S.end();++i)
    {
        if (!a.empty()&&*i==a.top())
        {
            a.pop();
        }
        else
        {
            a.push(*i);
        }
    }

    while (!a.empty())
    {
        rst=a.top()+rst;
        a.pop();
    }

    return rst;

}