//
// Created by 刘春圃 on 2020/3/30.
//

#include "p521.h"


int Solution_p521::findLUSlength(string a, string b) {

    int len_a=a.size(),len_b=b.size();
    if(len_a==len_b)
    {
        if(a==b)
        {
            return -1;
        }
        else
        {
            return len_a;
        }
    }
    else
    {
        return max(len_a,len_b);
    }


}