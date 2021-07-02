//
// Created by 刘春圃 on 2020/5/30.
//

#include "p367.h"


bool Solution_p367::isPerfectSquare(int num) {

    if (num == 1) return true;
    double x = num / 2;
    while (x * x > num) {
        x /= 2;
    }
    for (double i = (int)x; i < x * 2; ++i) {
        if (i * i == num) return true;
        if (i * i > num) return false;
    }
    return false;




}