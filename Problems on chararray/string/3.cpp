#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char maxcharcount(string str);
int main()
{
    string str;

    cout<< "Enter the string:-";
    getline(cin,str);

    cout<< "Max char is:-"<< maxcharcount(str)<<endl;
    return 0;
}
char maxcharcount(string str)
{
/*    char arr[26] = {0};

    for(int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    int ans = 0, max = 0;
    for(int j = 0; j < 26; j++)
    {
        if(max < arr[j])
        {
            ans = j;
            max = arr[j];
        }
    }
    
    char finalans = 'a' + ans;
    return finalans;*/

    unordered_map<char,int> m;

    for(auto &i : str)
    {
        m[str[i]]++;
        if(m[str[i]] == 2)
        {
            return i;
        }
    }
}
