//
// Created by 刘春圃 on 2020/2/21.
//

#include "p925.h"


bool Solution_p925::isLongPressedName(string name, string typed) {

    int n=name.size();
    int m=typed.size();
    int i=0,j=0;
    int count_n=1,count_m=1;
    if(name[i]!=typed[j])
    {
        return false;
    }
    while((i<n)&&(j<m))
    {
        count_n=1;
        count_m=1;
        while(name[i]==name[i+1])
        {
            ++i;
            ++count_n;
        }
        ++i;
        while(typed[j]==typed[j+1])
        {
            ++j;
            ++count_m;
        }
        ++j;
        if(count_n>count_m)
        {
            return false;
        }
        if(name[i]!=typed[j])
        {
            return false;
        }


    }
    if((i==n)&&(j==m))
    {
        return true;
    }
    else
    {
        return false;
    }


}