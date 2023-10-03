#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int palin(char *brr);
int main()
{
    char arr[20];

    cout<< "Enter the string:-";
    cin.getline(arr,sizeof(arr));

    cout<< palin(arr) <<endl;
    return 0;
}
int palin(char *brr)
{
    int i = 0;
    int j = strlen(brr)-1;

    while(i < j)
    {
        if(brr[i] != brr[j])
        {
            return -1;
        }
        i++;
        j--;
    }
    return 0;
}
