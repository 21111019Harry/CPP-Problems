#include<iostream>
#include<bits/stdc++.h>

//string compare using inbuilt compare function

using namespace std;

int main()
{
    string str, str1;

    cout<< "Enter the string:-";
    getline(cin,str);

    cout<< "Enter the string:-";
    getline(cin,str1);

    int res = str.compare(str1);

    if(res == 0)
    {
        cout<< "Str is equal to str1:" <<endl;
    }
    else if(res < 0)
    {
        cout<< "Str is less than str1:" <<endl;
    }
    else
    {
        cout<< "Str is greater than str1:" <<endl;
    }
    
}
