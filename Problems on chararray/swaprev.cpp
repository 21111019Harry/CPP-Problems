#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void rev(string &str);
int main()
{
    string str;

    cout<< "Enter the string:-";
    getline(cin,str);

    rev(str);
    return 0;
}
void rev(string &str)
{
    int i = 0;
    int j = str.length()-1;

    while(i < j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<< str <<endl;
}
