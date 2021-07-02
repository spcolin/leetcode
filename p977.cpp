//
// Created by 刘春圃 on 2020/1/28.
//

#include "p977.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


vector<int> Solution_p977::sortedSquares(vector<int> &A) {

    for(auto &i:A)
    {
        i*=i;
    }

    sort(A.begin(),A.end(),less<int>());

    return A;

}
//
//vector<int> Solution_p977::sortedSquares(vector<int> &A) {
//
//    int i=0,j=A.size()-1;
//    vector<int> B;
//    while(i<=j)
//    {
//        int num1=A[i]*A[i];
//        int num2=A[j]*A[j];
//        if(num1>num2)
//        {
//            B.push_back(num1);
//            ++i;
//
//        }
//        else
//        {
//            B.push_back(num2);
//            --j;
//        }
//
//    }
//
//    reverse(B.begin(),B.end());
//
//    return B;
//
//}