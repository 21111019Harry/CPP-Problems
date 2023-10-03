#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void check(string strf, string strft);
int main()
{
    string str, str1;
    cout<< "Enter the string:-";
    getline(cin,str);
    cout<< "Enter the string:1-";
    getline(cin,str1);

    check(str,str1);
    return 0;
}
void check(string strf, string strft)
{
    int i = 0;
    while(*strf != '\0')
    {
        if(strf[i] == strft[i])
        {
            strft++;
        }
        strf++;
        i++;
    }
    if(*strft = '\0')
    {
        cout<< "NO:" <<endl;
    }
    else
    {
        cout<< "YES:" <<endl;
    }
}
