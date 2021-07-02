//
// Created by 刘春圃 on 2020/2/18.
//

#include "p167.h"


vector<int> Solution_p167::twoSum(vector<int> &numbers, int target) {


    vector<int> ret(2);
    int low=0,high=numbers.size()-1;
    while(low<high)
    {
        if((numbers[low]+numbers[high])==target)
        {
            ret[0]=low+1;
            ret[1]=high+1;
            break;
        }
        else if((numbers[low]+numbers[high])>target)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return ret;


}