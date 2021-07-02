//
// Created by Administrator on 2021/6/10.
//

#include "p338.h"


vector<int> Solution_p338::countBits(int n) {

    vector<int> one_count;

    one_count.push_back(0);
    for(int i=1;i<=n;++i)
    {
        one_count.push_back(i%2+one_count[static_cast<int>(i/2)]);

    }

    return one_count;


}