//
// Created by 刘春圃 on 2020/3/4.
//

#include "p557.h"


string Solution_p557::reverseWords(string s) {

    auto head=s.begin(),tail=s.begin();
    for(auto i=s.begin();i!=s.end();++i)
    {
        if((*i)==' ')
        {
            tail=i;
            reverse(head,tail);
            head=i+1;

        }


    }

    reverse(head,s.end());

    return s;
}