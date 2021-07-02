//
// Created by Administrator on 2021/5/19.
//

#include "p389.h"


char Solution_p389::findTheDifference(string s, string t) {

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    char a=' ';
    bool found=false;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]!=t[i])
        {
            a=t[i];
            found= true;
            break;
        }
    }
    if(found== false)
    {
        a=*(t.end()-1);
    }

    return a;

}