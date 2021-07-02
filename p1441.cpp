//
// Created by colin on 2021/1/5.
//

#include "p1441.h"


vector<string> Solution_p1441::buildArray(vector<int> &target, int n) {

    vector<string> ans;
    for(int i=1, j=0; j<target.size() && i<=n; ++i){
        if(target[j] == i){
            ans.push_back("Push");
            ++j;
        }
        else{
            ans.push_back("Push");
            ans.push_back("Pop");
        }
    }
    return ans;
}