//
// Created by 1 on 2021/7/13.
//

#include "p1387.h"

bool Solution_p1387::cmp(vector<int> a, vector<int> b) {

    if(a[1]!=b[1])
    {
        return a[1]<b[1];
    }
    else
    {
        return a[0]<b[0];
    }

}

int Solution_p1387::transToOne(int num, map<int, int> &ref) {

    vector<int> tmp;
    int step=0;

    while(num!=1)
    {
        auto pos=ref.find(num);
        if(pos!=ref.end())
        {
            step=step+ref[num];
            break;
        }
        tmp.push_back(num);
        if(num%2==0)
        {
            num=num/2;
        }
        else
        {
            num=3*num+1;
        }

        ++step;
    }

    for(int i=0;i<static_cast<int>(tmp.size())-1;++i)
    {
        ref[tmp[i]]=step-i;
    }

    return step;
}

int Solution_p1387::getKth(int lo, int hi, int k) {

    map<int,int> ref;
    ref[1]=0;
    vector<vector<int>> rst;

    for(int i=lo;i<=hi;++i)
    {
        rst.push_back(vector<int>{i, transToOne(i,ref)});
    }

    sort(rst.begin(),rst.end(), cmp);

//    for(int i=0;i<rst.size();++i)
//    {
//        cout<<rst[i][0]<<"---"<<rst[i][1]<<endl;
//    }

    return rst[k-1][0];


}