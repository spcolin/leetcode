//
// Created by 刘春圃 on 2020/1/24.
//

#include "p1299.h"
#include <vector>
#include <iostream>
using namespace std;

vector<int> Solution_p1299::replaceElements(vector<int> &arr) {

    int max_num=arr.back();
    for(auto i=arr.rbegin();i!=arr.rend();++i)
    {
        int tmp=*i;
        *i=max_num;
        if(tmp>max_num)
        {
            max_num=tmp;
        }

    }

    *(arr.rbegin())=-1;

    return arr;

}