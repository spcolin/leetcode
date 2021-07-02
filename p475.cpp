//
// Created by 刘春圃 on 2020/6/11.
//

#include "p475.h"

int Solution_p475::findRadius(vector<int> &houses, vector<int> &heaters) {


    sort(heaters.begin(), heaters.end());
    int res = 0;
    for(auto& house : houses){
        int l = 0, r = heaters.size()-1, diff = INT_MAX;
        while(l <= r){
            int mid = l + (r-l)/2;
            diff = min(diff, abs(heaters[mid] - house));
            if( heaters[mid] < house){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        res = max(res, diff);
    }
    return res;


}