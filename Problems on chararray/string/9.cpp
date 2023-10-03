#include<iostream>
#include<bits/stdc++.h>

//remove all adjacent duplicate in string
//i/p :- abbaca  o/p :- aaca , o/p :- ca

using namespace std;
void duplicate(string &str);
int main()
{
    string str;

    cout<< "Enter the string:-";
    getline(cin,str);

    duplicate(str);

    return 0;
}
void duplicate(string &str)
{
    int i = 0;
    while(str[i] != '\0')
    { 
        int j = i+1;
        if(str[i] == str[j])
        {
            str.erase(i,j);
        }
        i++;
        j++;
    }
    cout<< str <<endl;
}
