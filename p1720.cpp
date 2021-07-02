//
// Created by Administrator on 2021/5/16.
//

#include "p1720.h"


vector<int> Solution_p1720::decode(vector<int> &encoded, int first) {

    vector<int> rst;
    rst.push_back(first);
    int original_integer=first;
    for(int i=0;i<encoded.size();++i)
    {
        original_integer=encoded[i]^original_integer;
        rst.push_back(original_integer);

    }

    return rst;

}