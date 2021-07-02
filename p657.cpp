//
// Created by 刘春圃 on 2020/3/4.
//

#include "p657.h"


bool Solution_p657::judgeCircle(string moves) {

    int x=0,y=0;
    for(int i=0;i<moves.size();++i)
    {
        switch(moves[i])
        {
            case 'U':
                ++y;
                break;
            case 'D':
                --y;
                break;
            case 'L':
                --x;
                break;
            case 'R':
                ++x;
                break;
        }
    }
    if((x==0)&&(y==0))
    {
        return true;
    }
    else
    {
        return false;
    }

}