//
// Created by 刘春圃 on 2020/5/17.
//

#include "p852.h"
int Solution_p852::peakIndexInMountainArray(vector<int> &A) {

    auto pos=max_element(A.begin(),A.end());
    return distance(A.begin(),pos);


}