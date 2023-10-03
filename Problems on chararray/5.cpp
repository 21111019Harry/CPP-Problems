#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void reverse(char *str1);
int main()
{
/*    string str;

    cout<< "Enter the string:-";
    getline(cin,str);*/

    char str[20];

    cout<< "Enter the string:-";
    cin.getline(str,sizeof(str));

    reverse(str);

    cout<<str<<endl;
}
void reverse(char *str1)
{
    char *start = str1;
    char *end = str1;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start <= end)
    {
        char temp = '\0';
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
