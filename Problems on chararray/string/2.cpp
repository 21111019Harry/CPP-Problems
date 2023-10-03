#include<iostream>
#include<bits/stdc++.h>

//reverse the word in place
//i/p :- Hello World  o/p :- olleH dlroW

using namespace std;

int wordrev(string str);
bool valid(char ch);
int main()
{
    string str;

    cout<< "Enter the string:-";
    getline(cin,str);

    wordrev(str);
    return 0;
}
int wordrev(string str)
{
    int i = 0, j = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
             j = i-1;
             while(j >= 0 && str[j] != ' ')
             {
                cout<< str[j];
                j--;
             }
             cout<<" ";
        }
        i++;
    }
    j = i-1;
    while(j >= 0 && str[j] != ' ')
    {
        cout<< str[j];
        j--;
    }
    cout<<endl;
}
