//
// Created by 刘春圃 on 2020/2/27.
//

#include "p532.h"


//int Solution_p532::findPairs(vector<int> &nums, int k) {
//
//    set<vector<int >> pairset = {};
//    sort(nums.begin(), nums.end());
//
//    for (int i = 0; i < nums.size(); ++i) {
//        for (int j = nums.size() - 1; j > i; --j) {
//            if (abs(nums[j] - nums[i]) < k) {
//                break;
//            }
//            if (abs(nums[j] - nums[i]) == k) {
//                pairset.insert(vector<int>{nums[i], nums[j]});
//            }
//        }
//    }
//
//
////    for (auto i = pairset.begin(); i != pairset.end(); ++i)
////    {
////        cout<<(*i)[0]<<"|"<<(*i)[1]<<endl;
////    }
//    return pairset.size();
//
//
//
//}


int Solution_p532::findPairs(vector<int> &nums, int k) {

    if( k < 0 || nums.size() <= 1 ) return 0 ;
    sort( nums.begin(), nums.end() ) ;
    int a, n = nums.size(), i = 0, j = 1, ans = 0 ;
    while( i < n || j < n ){
        a = abs( nums[i] - nums[j] ) ;
        if( a > k )
            i++ ;
        else if( a < k )
            j++ ;
        else{
            ans++ ;
            i++, j++ ;
            while( i < n && nums[i] == nums[i-1] ) i++ ;
            while( j < n && nums[j] == nums[j-1] ) j++ ;
        }
        if( i == j ) j++ ;
    }
    return ans ;



}





