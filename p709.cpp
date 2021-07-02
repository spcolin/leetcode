//
// Created by 刘春圃 on 2020/3/4.
//

#include "p709.h"


string Solution_p709::toLowerCase(string str) {

    string lower_str="";
    for(auto i:str)
    {
        lower_str=lower_str+ static_cast<char>(tolower(i));
    }

    return lower_str;
}