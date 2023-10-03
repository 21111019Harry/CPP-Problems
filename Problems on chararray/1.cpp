#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void strcount(string str1);
int main()
{
    string str;

    cout<< "Enter the string:-";
    getline(cin,str);

    strcount(str);
    return 0;
}
void strcount(string str1)
{
    int icnt = 0, i = 0;
    char *start = str1;
    char *end = str1;
    char temp = '\0';

    while(str1[i] != '\0')
    {
        end++;
        icnt++;
        i++;
    }
    end--;

    while(start <= end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
//    cout<< str <<endl;
    cout<< icnt <<endl;
}
