//
// Created by colin on 2021/1/5.
//

#include "p682.h"


int Solution_p682::calPoints(vector<string> &ops) {

    int current_score=0;
    vector<int> score;
    for (auto i=ops.begin();i!=ops.end();++i)
    {
        if(*i=="+")
        {
            current_score=*(score.end()-1)+*(score.end()-2);
            score.push_back(current_score);
        }
        else if(*i=="D")
        {
            current_score=*(score.end()-1);
            score.push_back(current_score*2);
        }
        else if(*i=="C")
        {
            score.pop_back();
        }
        else
        {
            score.push_back(stoi(*i));
        }
    }

    int sum=accumulate(score.begin(),score.end(),0);

    return sum;



}