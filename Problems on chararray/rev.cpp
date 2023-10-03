#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cout<< "Enter the string:-";
    getline(cin,str);

    reverse(str.begin(),str.end());

    cout<< str <<endl;
}
