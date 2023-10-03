#include<iostream>
#include<bits/stdc++.h>

//remove all occurrences of substring 
//i/p :- daabcbaabcbc ,part :- abc  ,o/p :-dab 

using namespace std;

string erasestring(string str1, string part1);
int main()
{
    string str,part;

    cout<< "Enter the string:-";
    getline(cin,str);
    cout<< "Enter the part of string:-";
    getline(cin,part);

    cout<<erasestring(str,part)<<endl;

    return 0;
}
string erasestring(string str1, string part1)
{
    while(str1.length() != '\0' && str1.find(part1) < str1.length())
    {
        str1.erase(str1.find(part1), part1.length());
    }
    return str1;
}
