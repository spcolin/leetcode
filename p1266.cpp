//
// Created by colin on 1/7/20.
//

#include "p1266.h"
#include <vector>
#include <math.h>

using namespace std;

int Solution_p1266::betterSolution(vector<vector<int>> &points)
{
    int move_time=0;
    for(int i=0;i<points.size()-1;++i)
    {
        move_time+=max(abs(points[i][0]-points[i+1][0]),abs(points[i][1]-points[i+1][1]));
    }
    return move_time;
}
int Solution_p1266::minTimeToVisitAllPoints(vector<vector<int >> &points) {
//    vector<int> current_point=points[0];
//    int move_time=0;
//    for(auto i=points.begin()+1;i!=points.end();++i)
//    {
//        while(current_point!=(*i))
//        {
//            vector<int> pos_move=move_direction(current_point,(*i));
//            current_point[0]+=pos_move[0];
//            current_point[1]+=pos_move[1];
//            ++move_time;
//        }
//    }

    return betterSolution(points);
}

vector<int> Solution_p1266::move_direction(const vector<int> &current_point, const vector<int> &target_point)
{
    if(target_point[0]>current_point[0])
    {
        if(target_point[1]>current_point[1])
        {
            return vector<int>{1,1};
        }
        else if(target_point[1]<current_point[1])
        {
            return vector<int>{1,-1};
        }
        else
        {
            return vector<int>{1,0};
        }
    }
    else if(target_point[0]<current_point[0])
    {
        if(target_point[1]>current_point[1])
        {
            return vector<int>{-1,1};
        }
        else if(target_point[1]<current_point[1])
        {
            return vector<int>{-1,-1};
        }
        else
        {
            return vector<int>{-1,0};
        }
    }
    else
    {
        if(target_point[1]>current_point[1])
        {
            return vector<int>{0,1};
        }
        else if(target_point[1]<current_point[1])
        {
            return vector<int>{0,-1};
        }
        else
        {
            return vector<int>{0,0};
        }
    }
}
