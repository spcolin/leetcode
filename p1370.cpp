//
// Created by 刘春圃 on 2020/4/29.
//

#include "p1370.h"


string Solution_p1370::sortString(string s) {

    if(s.size()==1)
    {
        return s;
    }
    else
    {
        sort(s.begin(),s.end());
        int empty_s=0;
        string rst="";
        while(empty_s==0)
        {
            char current_char='*';
            for(auto i=s.begin();i!=s.end();++i)
            {
                if(((*i)!=current_char)&&((*i)!='*'))
                {
                    rst.push_back(*i);
                    current_char=*i;
                    *i='*';
                    empty_s=1;
                }

            }
            current_char='*';
            for(auto j=s.rbegin();j!=s.rend();++j)
            {
                if(((*j)!=current_char)&&((*j)!='*'))
                {
                    rst.push_back(*j);
                    current_char=*j;
                    *j='*';
                }
            }

            empty_s=1;
            for(auto k=s.begin();k!=s.end();++k)
            {
                if((*k)!='*')
                {
                    empty_s=0;
                    break;
                }
            }

        }


        return rst;

    }
}


