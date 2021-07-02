//
// Created by Administrator on 2021/6/3.
//

#include "p932.h"


vector<int> Solution_p932::beautifulArray(int n) {

    vector<int> cur={1};

    while(cur.size()<n)
    {
        vector<int> tmp={};
        for(auto i:cur)
        {
            if(2*i-1<=n)
            {
                tmp.push_back(2*i-1);
            }

        }

        for(auto i:cur)
        {
            if(2*i<=n)
            {
                tmp.push_back(2*i);
            }
        }

        cur=tmp;

    }

    return cur;

}