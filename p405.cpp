//
// Created by Administrator on 2021/5/19.
//

#include "p405.h"

string Solution_p405::pos_toHex(int num) {

    string hex_code="";
    int rest=0;
    while(num!=0)
    {
        rest=num%16;
        if(rest==10)
        {
            hex_code+='a';
        }
        else if(rest==11)
        {
            hex_code+='b';
        }
        else if(rest==12)
        {
            hex_code+='c';
        }
        else if(rest==13)
        {
            hex_code+='d';
        }
        else if(rest==14)
        {
            hex_code+='e';
        }
        else if(rest==15)
        {
            hex_code+='f';
        }
        else
        {
            hex_code+=to_string(rest);
        }

        num/=16;
    }

    reverse(hex_code.begin(),hex_code.end());

    return hex_code;
}

string Solution_p405::toHex(int num) {

    if(num<0)
    {
        int pos_num=-num;
        string bi_code="";
        while (pos_num!=0)
        {
            bi_code+= to_string(pos_num%2);
            pos_num/=2;
        }
        reverse(bi_code.begin(),bi_code.end());

        

        string inv_code="";
        for(auto i:bi_code)
        {
            if(i=='1')
            {
                inv_code+='0';
            }
            else
            {
                inv_code+='1';
            }
        }

        if(*(inv_code.end()-1)=='0')
        {
            *(inv_code.end()-1)=1;
        }
        else
        {
            for(auto i=inv_code.rbegin();i!= inv_code.rend();++i)
            {

                    if(*i=='0')
                    {
                        *i='1';
                        break;
                    }
                    else
                    {
                        *i='0';
                        if (i==inv_code.rend()-1)
                        {
                            inv_code='1'+inv_code;
                            break;
                        }
                    }

            }
        }

        int inv_length=inv_code.size();
        int sum=0;
        for(int i=0;i<inv_length;++i)
        {
            sum+= pow(2,inv_length-i);
        }

        return pos_toHex(sum);
    }
    else
    {
        return pos_toHex(num);
    }

}