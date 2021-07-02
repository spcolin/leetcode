//
// Created by 刘春圃 on 2020/2/27.
//

#include "p125.h"

bool Solution_p125::isPalindrome(string s) {

    if((s.size()==0)||(s.size()==1))
    {
        return true;

    }

    else
    {
        string an_s="";
        for(int i=0;i<s.size();++i)
        {
            if(isdigit(s[i])== true)
            {
                an_s.push_back(s[i]);
            }
            else if(isalpha(s[i])==true)
            {
                an_s.push_back(tolower(s[i]));
            }

        }

        int len=an_s.size()-1;

        for(int i=0;i<an_s.size()/2;++i)
        {
            if(an_s[i]!=an_s[len-i])
            {
                return false;
            }

        }


        return true;

    }



}