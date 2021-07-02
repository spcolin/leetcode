//
// Created by 刘春圃 on 2020/2/18.
//

#include "p844.h"

string Solution_p844::str_recover(string& S)
{
    string str="";
    for(int i=0;i<S.size();++i)
    {
        if(S[i]!='#')
        {
            str.push_back(S[i]);
        }
        else
        {
            if(str.length()>0)
            {
                str.erase(str.length()-1,1);
            }

        }
    }
    return str;

}

bool Solution_p844::backspaceCompare(string S, string T) {

    string recovered_S=str_recover(S);
    string recovered_T=str_recover(T);
    return recovered_S==recovered_T;


}