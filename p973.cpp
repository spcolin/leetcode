//
// Created by Administrator on 2021/6/1.
//

#include "p973.h"


vector<vector<int>> Solution_p973::kClosest(vector<vector<int>> &points, int k) {

    priority_queue<pair<float,int>,vector<pair<float,int>>,cmp> q;
    vector<vector<int>> rst;

    for(int i=0;i<points.size();++i)
    {
        q.push({sqrt(points[i][0]*points[i][0]+points[i][1]*points[i][1]),i});
    }

    for(int i=0;i<k;++i)
    {
        rst.push_back(points[q.top().second]);
        q.pop();
    }

    return rst;

}