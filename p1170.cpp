//
// Created by 刘春圃 on 2020/3/27.
//

#include "p1170.h"
#include <iostream>

int Solution_p1170::f(string s)
{
    char smallest_char=s[0];
    int freq=0;

    for(auto i:s)
    {
        if((i-'a')<(smallest_char-'a'))
        {
            smallest_char=i;
            freq=1;
        }
        else
        {
            if(i==smallest_char)
            {
                ++freq;
            }

        }
    }

    return freq;
}
vector<int> Solution_p1170::numSmallerByFrequency(vector<string> &queries, vector<string> &words) {

    vector<int> rst;
    int result_i=0;
    vector<int> f_words={};

    for(auto j:words)
    {
        f_words.push_back(f(j));
    }


    for(auto i:queries)
    {
        result_i=0;
        int f_num=f(i);
        for(auto j:f_words)
        {

            if(f_num<j)
            {
                ++result_i;
            }
        }
        rst.push_back(result_i);
    }

    return rst;



}