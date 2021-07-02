//
// Created by Administrator on 2021/5/19.
//

#include "p191.h"

int Solution_p191::hammingWeight(uint32_t n) {

    cout<<n<<endl;
    string a= to_string(static_cast<int>(n));
    cout<<a<<endl;

    int count=0;
    for(auto i:a)
    {
        if (i=='1')
        {
            ++count;
        }
    }

    return count;
}