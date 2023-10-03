#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int compair(string &str, string &str1);
int main()
{
    string str;
    string str1;

    cout<< "Enter the string:-";
    getline(cin,str);
    cout<< "Enter the string:-";
    getline(cin,str1);

    cout<<compair(str,str1)<<endl;

    return 0;
}
int compair(string &str, string &str1)
{
    int i = 0;
    while(str[i] != '\0' && str1[i] != '\0')
    {
        if(str[i] != str1[i])
        {
            return 0;
        }
        i++;
    }
    return 1;

/*    int ans = strcmp(str,str1);
    if(ans != 0)
    {
        return 0;
    }
    return 1;*/
}
