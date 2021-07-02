//
// Created by 刘春圃 on 2020/3/30.
//

#include "p788.h"

int Solution_p788::number_type(int num) {

    int flag_1=0,flag_2=0,flag_3=0;
    string str_num=to_string(num);
    for(auto i:str_num)
    {
        if((i=='0')||(i=='1')||(i=='8'))
        {
            flag_1=1;
        }
        else if((i=='6')||(i=='9')||(i=='2')||(i=='5'))
        {
            flag_2=1;
        }
        else
        {
            flag_3=1;
        }
    }

    if(flag_3==1)
    {
        return 0;
    }
    else
    {
        if(flag_2==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }



}

int Solution_p788::rotatedDigits(int N) {

    int count=0;
    for(int i=0;i<=N;++i)
    {
       auto num_type=number_type(i);
       if(num_type==1)
       {
           ++count;
       }

    }

    return count;


}