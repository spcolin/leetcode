//
// Created by 刘春圃 on 2020/1/24.
//

#include "p1313.h"

vector<int> Solution_p1313::decompressRLElist(vector<int> &nums) {

    vector<int> decompress_list;
    for(auto i=nums.begin();i!=nums.end();i=i+2)
    {
        vector<int> tmp_vector(*i,*(i+1));
        decompress_list.insert(decompress_list.end(),tmp_vector.begin(),tmp_vector.end());
    }

    return decompress_list;

}