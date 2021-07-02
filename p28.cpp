//
// Created by 刘春圃 on 2020/2/27.
//

#include "p28.h"


int Solution_P28::strStr(string haystack, string needle) {

    if(needle.size()==0)
    {
        return 0;
    }
    else if(haystack.size()==0)
    {
        if(needle.size()==0)
        {
            return 0;
        }
        else
        {
            return -1;
        }

    }
    else
    {
        string a="123";
        auto noneMark=a.find('c');

        auto pos=haystack.find(needle);
        if(pos==noneMark)
        {
            return -1;
        }
        else
        {
            return pos;
        }

    }


}