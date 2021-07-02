//
// Created by Administrator on 2021/6/4.
//

#include "p395.h"


int Solution_p395::subStrLen(string s, int start, int end, int k) {

    if(start>end)
    {
        return 0;
    }
    vector<int> letter_count(26);
    for(int i=start;i<=end;++i)
    {
        ++letter_count[int(s[i])-int('a')];
    }

    for(int i=start;i<=end;++i)
    {
        if(letter_count[int(s[i])-int('a')]>0&&letter_count[int(s[i])-int('a')]<k)
        {
            return max(subStrLen(s,start,i-1,k), subStrLen(s,i+1,end,k));
        }
    }

    return end-start+1;



}


int Solution_p395::longestSubstring(string s, int k) {


    return subStrLen(s,0,s.size()-1,k);

}