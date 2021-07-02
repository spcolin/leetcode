//
// Created by Administrator on 2021/5/22.
//

#include "p231.h"


bool Solution_p231::isPowerOfTwo(int n) {

    return ((n>0) && (!(n&(n-1))));

}