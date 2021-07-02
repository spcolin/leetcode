//
// Created by 刘春圃 on 2020/3/30.
//

#include "p696.h"


int Solution_p696::substr_count(int &start_point,string &s) {
    int i=start_point;
    int count_0=0,count_1=0,count=0;
    if(s[i]=='0')
    {
        while(i<s.size())
        {
            if(s[i]=='0')
            {
                ++count_0;
                ++i;
            }
            else
            {
                start_point=i;
                break;
            }
        }
        while(i<s.size())
        {
            if(s[i]=='1')
            {
                ++count_1;
                ++i;
            }
            else
            {
                break;
            }

        }

        if(i>=s.size())
        {
            start_point=s.size();

        }

        if((count_0>1)&&(count_1>1))
        {
            return min(count_0,count_1);

        }
        else if((count_0==0)||(count_1==0))
        {
            return 0;
        }
        else
        {
            return 1;
        }




    }
    else
    {
        while(i<s.size())
        {
            if(s[i]=='1')
            {
                ++count_1;
                ++i;
            }
            else
            {
                start_point=i;
                break;
            }
        }
        while(i<s.size())
        {
            if(s[i]=='0')
            {
                ++count_0;
                ++i;
            }
            else
            {
                break;
            }

        }

        if(i>=s.size())
        {
            start_point=s.size();

        }

        if((count_0>1)&&(count_1>1))
        {
           return min(count_0,count_1);
        }
        else if((count_0==0)||(count_1==0))
        {
            return 0;
        }
        else
        {
            return 1;
        }




    }
}

int Solution_p696::countBinarySubstrings(string s) {

    int start_point=0;
    int count=0;
    while(start_point<s.size())
    {
        count+=substr_count(start_point,s);
    }


    return count;

}
