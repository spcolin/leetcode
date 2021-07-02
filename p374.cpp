//
// Created by 刘春圃 on 2020/5/30.
//

//#include "p374.h"
//int guessNumber(int num)
//{
//    return 0;
//}
//
//int Solution_p374::guessNumber(int n) {
//
//    long int head=1,tail=n;
//    long int mid=(head+tail)/2;
//    int mark=guess(mid);
//    while(mark!=0)
//    {
//        if(mark==-1)
//        {
//            tail=mid-1;
//        }
//        else if(mark==1)
//        {
//            head=mid+1;
//        }
//        else
//        {
//            break;
//        }
//        mid=(head+tail)/2;
//        mark=guess(mid);
//    }
//
//    return mid;
//
//}