//
// Created by Administrator on 2021/6/7.
//

#include "p1641.h"


//void Solution_p1641::generateStr(string str, int n, vector<string> &total) {
//
//    if(n>0)
//    {
//        if(*(str.end()-1)=='a'||str.size()==0)
//        {
//            generateStr(str+'a',n-1,total);
//            generateStr(str+'e',n-1,total);
//            generateStr(str+'i',n-1,total);
//            generateStr(str+'o',n-1,total);
//            generateStr(str+'u',n-1,total);
//        }
//        else if(*(str.end()-1)=='e')
//        {
//            generateStr(str+'e',n-1,total);
//            generateStr(str+'i',n-1,total);
//            generateStr(str+'o',n-1,total);
//            generateStr(str+'u',n-1,total);
//        }
//        else if(*(str.end()-1)=='i')
//        {
//            generateStr(str+'i',n-1,total);
//            generateStr(str+'o',n-1,total);
//            generateStr(str+'u',n-1,total);
//        }
//        else if(*(str.end()-1)=='o')
//        {
//            generateStr(str+'o',n-1,total);
//            generateStr(str+'u',n-1,total);
//        }
//        else
//        {
//            generateStr(str+'u',n-1,total);
//        }
//    }
//    else
//    {
//        total.push_back(str);
//    }
//
//
//}
//
//int Solution_p1641::countVowelStrings(int n) {
//
//    if(n==0)
//    {
//        return 0;
//    }
//
//
//    vector<string> totalStr={};
//
//    generateStr("",n,totalStr);
//
//    return totalStr.size();
//
//
//}

int Solution_p1641::countVowelStrings(int n) {

    int a=1,e=1,i=1,o=1,u=1;
    for(int k=1;k<n;++k)
    {
        u=a+e+i+o+u;
        o=a+e+i+o;
        i=a+e+i;
        e=a+e;
        a=a;
    }

    return a+e+i+o+u;



}