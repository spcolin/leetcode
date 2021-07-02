//
// Created by colin on 2020/12/31.
//

#include "401.h"


set<int> Solution_p401::add_all(int num) {
    vector<int> possible_min={1,2,4,8,16,32,60,120,240,480};
    set<int> rst;
    for(auto i=possible_min.begin();i!=possible_min.end();++i)
    {
        rst.insert(*i+num);
    }
    return rst;

}

vector<string> Solution_p401::trans(set<int> minutes_pool) {
    vector<string> rst;
    for(auto i=minutes_pool.begin();i!=minutes_pool.end();++i)
    {
        if(*i>=60)
        {
            int minu=*i%60;
            int hour=(*i-minu)/60;
            if (hour>11)
            {
                hour=hour%11;
            }

            if (minu>=10)
            {
                rst.push_back(to_string(hour)+":"+to_string(minu));
            }
            else
            {
                rst.push_back(to_string(hour)+":0"+to_string(minu));
            }

        }
        else
        {
            if (*i>=10)
            {
                rst.push_back("0:"+to_string(*i));
            }
            else
            {
                rst.push_back("0:0"+to_string(*i));
            }
        }
    }

    return rst;
}

vector<string> Solution_p401::readBinaryWatch(int num) {

    if(num==0)
    {
        return vector<string>{"0:00"};
    }
    else
    {

        set<int> minutes_pool={0};
        for (int i=1;i<=num;++i)
        {
            set<int> current_pool;
            for(auto j:minutes_pool)
            {
                auto rst=add_all(j);
                current_pool.insert(rst.begin(),rst.end());

            }

            minutes_pool.clear();

            minutes_pool.insert(current_pool.begin(),current_pool.end());



        }

        auto rst=trans(minutes_pool);

        return rst;

    }
}