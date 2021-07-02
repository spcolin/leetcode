//
// Created by 刘春圃 on 2020/4/29.
//

#include "p1408.h"



vector<string> Solution_p1408::stringMatching(vector<string> &words) {

    sort(words.begin(),words.end(),[](auto &a, auto &b) {return a.size() < b.size();});
    vector<string> rst;
    for(int i=0;i<words.size();++i)
    {
        for(int j=i+1;j<words.size();++j)
        {
            if(words[j].find(words[i])!=string::npos)
            {
                rst.push_back(words[i]);
                break;
            }
        }
    }

    return rst;



}