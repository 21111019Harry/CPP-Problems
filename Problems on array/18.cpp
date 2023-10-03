#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void removeduplicate(int brr[], int length);
int main()
{
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    removeduplicate(arr,size);
    
    return 0;
}
void removeduplicate(int brr[], int length)
{
    int ans = 0;
    for(int i = 0; i < length; i++)
    {
        ans = ans ^ brr[i];
    }
    for(int i = 1; i < length; i++)
    {
        ans = ans ^ i;
    }
    cout<< ans <<endl;
/*    map<int,int> m;

    for(int i = 0; i < length; i++)
    {
        m[brr[i]]++;
    }

    for(auto &i : m)
    {
        cout<< i.first <<endl;
    }*/
}
