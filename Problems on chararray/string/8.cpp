#include<iostream>
#include<bits/stdc++.h>

//permutation of string 
//i/p :- eidbaooo  s1 :- ab s1 reverse is ba and ba is present in i/p so o/p is true

using namespace std;

bool permutation(string &str, string &part);
bool check(int a[26], int b[26]);
int main()
{
    string str,part;

    cout<< "Enter the string:-";
    getline(cin,str);
    cout<< "Enter the tsring:-";
    getline(cin,part);
    
    cout<<permutation(str,part)<<endl;
    return 0;
}
bool permutation(string &str, string &part)
{
    int arr[26] = {0};
    for(int i = 0; i < str.length(); i++)
    {
        int number = 0;
        number = str[i] - 'a';
        arr[number]++;
    }
    
    int i = 0;
    int windowsize = str.length();
    int count[26] = {0};

    while(i < windowsize && i < part.length())
    {
        int index = part[i] - 'a';
        count[index]++;
        i++;
    }

    if(check(arr,count))
    {
        return 1;
    }

    while(i < part.length())
    {
        char newch = part[i];
        int index = newch - 'a';
        part[index]++;


        char oldch = part[i-windowsize];
        index = oldch - 'a';
        part[index]--;
        i++;

        if(check(arr,count))
        {
            return 1;
        }
    }

    return 0;
}
bool check(int a[26], int b[26])
{
    for(int i = 0; i < 26; i++)
    {
        if(a[i] != b[i])
        {
            return 0;
        }
        return 1;
    }
}
