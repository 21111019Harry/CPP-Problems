#include<iostream>
#include<bits/stdc++.h>

//string concatenated using append function 
//string con catenated using concatenated function

using namespace std;

void con(string &str, string &str1);
int main()
{
    string str, str1;

    cout<< "Enter the string:-";
    getline(cin,str);

    cout<< "Enter the string:-";
    getline(cin,str1);
    
    str.append(" ");
    str.append(str1);

    cout<< "String:-" << str <<endl;

    con(str,str1);
    return 0;
}
void con(string &str, string &str1)
{
    string concatenated = str +" "+ str1;

    cout<< "String:-" << concatenated <<endl;
}
