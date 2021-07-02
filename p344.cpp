//
// Created by 刘春圃 on 2020/2/18.
//

#include "p344.h"


void Solution_p344::reverseString(vector<char> &s) {

    int len_of_s=s.size();
    if((len_of_s!=0)&&(len_of_s!=1))
    {
        for(int i=0;i<len_of_s/2;++i)
        {
            swap(s[i],s[len_of_s-1-i]);
        }
    }

}