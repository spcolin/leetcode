//
// Created by 刘春圃 on 2020/3/4.
//

#include "p1108.h"


string Solution_p1108::defangIPaddr(string address) {

    string defanged_ip="";
    for(auto i=address.begin();i!=address.end();++i)
    {
        if((*i)=='.')
        {
            defanged_ip.append("[.]");
        }
        else
        {
            defanged_ip=defanged_ip+(*i);
        }
    }
    return defanged_ip;
}