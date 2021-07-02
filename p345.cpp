//
// Created by 刘春圃 on 2020/2/21.
//

#include "p345.h"


string Solution_p345::reverseVowels(string s) {

    if((s.length()==0)||(s.length()==1))
    {
        return s;
    }
    else
    {
        int front_pt=0,back_pt=s.size()-1;
        while(front_pt<back_pt)
        {
            if((s[front_pt]=='a'||s[front_pt]=='e'||s[front_pt]=='i'||s[front_pt]=='o'||s[front_pt]=='u'||
                    s[front_pt]=='A'||s[front_pt]=='E'||s[front_pt]=='I'||s[front_pt]=='O'||s[front_pt]=='U')&&
                    (s[back_pt]=='a'||s[back_pt]=='e'||s[back_pt]=='i'||s[back_pt]=='o'||s[back_pt]=='u'||
                            s[back_pt]=='A'||s[back_pt]=='E'||s[back_pt]=='I'||s[back_pt]=='O'||s[back_pt]=='U'))
            {
                swap(s[front_pt],s[back_pt]);
                ++front_pt;
                --back_pt;
            }
            else if((s[front_pt]=='a'||s[front_pt]=='e'||s[front_pt]=='i'||s[front_pt]=='o'||s[front_pt]=='u'||
                     s[front_pt]=='A'||s[front_pt]=='E'||s[front_pt]=='I'||s[front_pt]=='O'||s[front_pt]=='U')&&
                    !(s[back_pt]=='a'||s[back_pt]=='e'||s[back_pt]=='i'||s[back_pt]=='o'||s[back_pt]=='u'||
                      s[back_pt]=='A'||s[back_pt]=='E'||s[back_pt]=='I'||s[back_pt]=='O'||s[back_pt]=='U'))
            {
                --back_pt;
            }
            else if(!(s[front_pt]=='a'||s[front_pt]=='e'||s[front_pt]=='i'||s[front_pt]=='o'||s[front_pt]=='u'||
                      s[front_pt]=='A'||s[front_pt]=='E'||s[front_pt]=='I'||s[front_pt]=='O'||s[front_pt]=='U')&&
                    (s[back_pt]=='a'||s[back_pt]=='e'||s[back_pt]=='i'||s[back_pt]=='o'||s[back_pt]=='u'||
                     s[back_pt]=='A'||s[back_pt]=='E'||s[back_pt]=='I'||s[back_pt]=='O'||s[back_pt]=='U'))
            {
                ++front_pt;
            }
            else
            {
                ++front_pt;
                --back_pt;
            }
        }


        return  s;
    }

}