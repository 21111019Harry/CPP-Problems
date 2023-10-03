#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool Palindrome(char *str);
int main()
{
    char arr[20];

    cout<< "Enter the string:-";
    cin.getline(arr,sizeof(arr));

    cout<<"Palindrome or Not:-"<<Palindrome(arr)<<endl;
    return 0;
}
bool Palindrome(char *str)
{
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start <= end)
    {
        if(*start != *end)
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
