//
// Created by 1 on 2021/7/2.
//

#include "p1395.h"


int Solution_p1395::numTeams(vector<int> &rating) {

    int n=rating.size();
    vector<int> increase_large_list(n,0);
    vector<int> increase_less_list(n,0);

    vector<int> decrease_large_list(n,0);
    vector<int> decrease_less_list(n,0);

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<i;++j)
        {
            if(rating[j]<rating[i])
            {
                increase_less_list[i]++;

            }
            else if(rating[j]>rating[i])
            {
                decrease_large_list[i]++;
            }
        }

        for(int j=i+1;j<n;++j)
        {
            if(rating[j]<rating[i])
            {
                decrease_less_list[i]++;

            }
            else if(rating[j]>rating[i])
            {
                increase_large_list[i]++;
            }
        }
    }

    int total=0;
    for(int i=0;i<n;++i)
    {
        total+=decrease_less_list[i]*decrease_large_list[i]+increase_large_list[i]*increase_less_list[i];
    }

    return total;
}