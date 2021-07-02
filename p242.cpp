//
// Created by Administrator on 2021/5/13.
//

#include "p242.h"

bool Solution_p242::isAnagram(string s, string t) {

    if (s.size()!=t.size())
    {
        return false;
    }
    else
    {
        map<char,int> a,b;
        bool mark= true;

        for(int i=97;i<=122;++i)
        {
            a[static_cast<char>(i)]=0;
            b[static_cast<char>(i)]=0;
        }

        for(int i=0;i<s.size();++i) {
            a[s[i]] = a[s[i]] + 1;
            b[t[i]] = b[t[i]] + 1;
        }

        for(int i=97;i<=122;++i)
        {
            if(a[static_cast<char>(i)]!=b[static_cast<char>(i)])
            {
                mark= false;
                break;
            }
        }

        return mark;
    }


}