//
// Created by 刘春圃 on 2020/3/4.
//

#include "p804.h"



int Solution_p804::uniqueMorseRepresentations(vector<string> &words) {

    map<char,string> char_dict={{'a',".-"},{'b',"-..."},{'c',"-.-."},{'d',"-.."},{'e',"."},{'f',"..-."},{'g',"--."},{'h',"...."},
                        {'i',".."},{'j',".---"},{'k',"-.-"},{'l',".-.."},{'m',"--"},{'n',"-."},{'o',"---"},{'p',".--."},
                        {'q',"--.-"},{'r',".-."},{'s',"..."},{'t',"-"},{'u',"..-"},{'v',"...-"},{'w',".--"},{'x',"-..-"}
            ,{'y',"-.--"},{'z',"--.."}};

    set<string> translated_list={};

    for(auto i:words)
    {
        string translated_string="";
        for(int j=0;j<i.size();++j)
        {
            translated_string=translated_string+char_dict[i[j]];
        }

        translated_list.insert(translated_string);
    }

    return translated_list.size();


}