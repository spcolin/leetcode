//
// Created by 刘春圃 on 2020/4/29.
//

#include "p929.h"


int Solution_p929::numUniqueEmails(vector<string> &emails) {

    set<string> email_set;
    for(auto i=emails.begin();i!=emails.end();++i)
    {
        string email="";
        int mark=0;
        for(auto j=(*i).begin();j!=(*i).end();++j)
        {
            if(mark==0)
            {

                if((*j)=='+')
                {
                    mark=1;
                }
                else if((*j)=='@')
                {
                    while(j!=(*i).end())
                    {
                        email.push_back((*j));
                        ++j;
                    }

                    break;
                }
                else
                {
                    if((*j)!='.')
                    {
                        email.push_back((*j));
                    }
                }
            }
            else
            {
                if((*j)=='@')
                {
                    while(j!=(*i).end())
                    {
                        email.push_back((*j));
                        ++j;
                    }

                    break;
                }

            }


        }


        email_set.insert(email);

    }

    return email_set.size();



}