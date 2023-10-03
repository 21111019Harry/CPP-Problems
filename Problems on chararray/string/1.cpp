#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str = "ab\0cd";

    str.pop_back();
    str.push_back('s');

//    cout<< "Enter the string:-";
//    getline(cin,str);                //he string sathi ahe

    char str1[20] = "ab\0cd";

//    cout<< "Enter the string:-";
//    cin.getline(str1,sizeof(str1));  //he character array sathi ahe
    
    cout<< str << str1 <<endl;
}
