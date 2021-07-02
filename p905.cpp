//
// Created by 刘春圃 on 2020/1/24.
//

#include "p905.h"

//bool Solution_p905::isEven(int &target) {
//    if(target%2==0)
//        return true;
//    else
//        return false;
//}
//
//vector<int> Solution_p905::sortArrayByParity(vector<int> &A) {
//
//    int swap_pos=0,current_pos=1;
//    while(current_pos<A.size())
//    {
//        if((isEven(A[swap_pos])==false)&&(isEven(A[current_pos])== false))
//        {
//            ++current_pos;
//        }
//        else if((isEven(A[swap_pos])==false)&&(isEven(A[current_pos])== true))
//        {
//            swap(A[swap_pos],A[current_pos]);
//            ++swap_pos;
//            ++current_pos;
//        }
//        else if((isEven(A[swap_pos])==true)&&(isEven(A[current_pos])== false))
//        {
//            ++swap_pos;
//            ++current_pos;
//        }
//        else
//        {
//            ++swap_pos;
//        }
//    }
//
//    return A;
//}

vector<int> Solution_p905::sortArrayByParity(vector<int> &A) {
    int swap_pos=0,current_pos=1;
    while((current_pos<A.size())&&(swap_pos<A.size()))
    {
        if((A[swap_pos]%2!=0)&&(A[current_pos]%2!=0))
        {
            ++current_pos;
        }
        else if((A[swap_pos]%2!=0)&&(A[current_pos]%2==0))
        {
            swap(A[swap_pos],A[current_pos]);
            ++swap_pos;
            ++current_pos;
        }
        else if((A[swap_pos]%2==0)&&(A[current_pos]%2!=0))
        {
            ++swap_pos;
            ++current_pos;
        }
        else
        {
            ++swap_pos;
            ++current_pos;
        }
    }

    return A;
}
