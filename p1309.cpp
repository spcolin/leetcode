//
// Created by 刘春圃 on 2020/3/4.
//

#include "p1309.h"

string Solution_p1309::freqAlphabets(string s) {

    int start_pos=96;
    int i=0;
    string rst="";
    while(i<s.size())
    {
        if(s[i+2]=='#')
        {
            string tmp="";
            tmp=tmp+s[i]+s[i+1];
            rst=rst+static_cast<char>(start_pos+stoi(tmp));
            i=i+3;
        }
        else
        {

            rst=rst+ static_cast<char>(static_cast<int>(s[i])+start_pos-48);
            ++i;
        }

    }

    return rst;



}