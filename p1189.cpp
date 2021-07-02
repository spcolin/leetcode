//
// Created by 刘春圃 on 2020/3/27.
//

#include "p1189.h"


int Solution_p1189::maxNumberOfBalloons(string text) {

    int amount_b=0,amount_a=0,amount_l=0,amount_o=0,amount_n=0;
    for(auto i=text.begin();i!=text.end();++i)
    {
        switch (*i)
        {
            case 'b':
                ++amount_b;
                break;
            case 'a':
                ++amount_a;
                break;
            case 'l':
                ++amount_l;
                break;
            case 'o':
                ++amount_o;
                break;
            case 'n':
                ++amount_n;
                break;

        }

    }

    int max_num=amount_b;
    if(amount_a<max_num)
        max_num=amount_a;
    if(amount_n<max_num)
        max_num=amount_n;
    if((amount_l/2)<max_num)
        max_num=amount_l/2;
    if((amount_o/2)<max_num)
        max_num=amount_o/2;

    return max_num;




}