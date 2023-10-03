#include<iostream>
#include<bits/stdc++.h>

//reverse the string

using namespace std;

int main()
{
    string str;

    cout<< "Enter the string:-";
    getline(cin,str);

    reverse(str.begin(),str.end());

    cout<< str <<endl;
    return 0;
}
