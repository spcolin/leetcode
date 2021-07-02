//
// Created by 刘春圃 on 2020/3/16.
//

#include "p824.h"


string Solution_p824::toGoatLatin(string S) {

    int former=0,latter=0;
    string goated_str="";
    int count=1;
    while(latter<S.size())
    {

        if(S[latter]==' ')
        {

            if(count!=1)
            {
                goated_str+=" ";
            }
            goated_str+=goatedWord(former,latter-1,count,S);
            former=latter+1;
            ++count;

        }
        ++latter;

    }

    if(count==1)
    {
     goated_str+=" ";
    }

    goated_str+=goatedWord(former,latter-1,count,S);

    return goated_str;

}

string Solution_p824::goatedWord(int former, int latter, int count, string &s) {

    if(s[former]=='a'||s[former]=='e'||s[former]=='i'||s[former]=='o'||s[former]=='u'||
            s[former]=='A'||s[former]=='E'||s[former]=='I'||s[former]=='O'||s[former]=='U')
    {
        string goated_word="";
        for(int i=former;i<=latter;++i)
        {
            goated_word+=s[i];
        }
        goated_word+="ma";
        for(int j=0;j<count;++j)
        {
            goated_word+='a';
        }
        return goated_word;

    }
    else
    {
        string goated_word="";
        for(int i=former+1;i<=latter;++i)
        {
            goated_word+=s[i];
        }
        goated_word+=s[former];
        goated_word+="ma";

        for(int j=0;j<count;++j)
        {
            goated_word+='a';
        }
        return goated_word;
    }

}