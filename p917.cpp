//
// Created by 刘春圃 on 2020/3/30.
//

#include "p917.h"




string Solution_p917::reverseOnlyLetters(string S) {

    int len_S=S.size();
    int i=0,j=len_S-1;
    while(i<j)
    {
        if(isalpha(S[i])&&isalpha(S[j]))
        {
            swap(S[i],S[j]);
            ++i;
            --j;
        }
        else
        {
            if(!isalpha(S[i])&&isalpha(S[j]))
            {
                ++i;
            }
            else if(!isalpha(S[j])&&isalpha(S[i]))
            {
                --j;
            }
            else
            {
                ++i;
                --j;
            }
        }
    }

    return S;
}