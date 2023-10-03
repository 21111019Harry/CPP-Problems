#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void concat(string &str, string &str1);
int main()
{
    string str, str1;

    cout<< "Enter the string:-";
    getline(cin,str);
    cout<< "Enter the string:-";
    getline(cin,str1);

    concat(str,str1);

    return 0;
}
void concat(string &str, string &str1)
{
/*    int i = 0;
    int j = str.length();
    while(str1[i] != '\0')
    {
        str[j] = str1[i];
        j++;
        i++;
    }*/
    str += " ";
    str += str1;
    cout<<str<<endl;
}
