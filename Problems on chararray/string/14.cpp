#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str, str1;

    cout<< "Enter the string:-";
    getline(cin,str);

    cout<< "Enter the string:-";
    getline(cin,str1);

    str1.assign(str);  //here we copy str into str1

    cout<< "String:" << str <<endl;
    cout<< "String :-" << str1 <<endl;
}
