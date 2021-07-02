//
// Created by 刘春圃 on 2020/5/20.
//

#include "p392.h"

bool Solution_p392::isSubsequence(string s, string t) {

    bool judge=true;
    int start_pos=0;
    string substr="";
    for(int i=0;i<s.size();++i)
    {
        substr=t.substr(start_pos);
        if(substr.find(s[i])==string::npos)
        {
            judge=false;
            return judge;
        }
        else
        {
            start_pos+=substr.find(s[i])+1;
        }

    }
    return judge;
}