#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void zerocount(int brr[], int length);
int main()
{
    int size = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>> size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    zerocount(arr,size);

    delete []arr;

    return 0;
}
void zerocount(int brr[], int length)
{
    unordered_map<int,int> m;

    for(int i = 0; i < length; i++)
    {
        m[brr[i]]++;
    }
    for(auto &i : m)
    {
        if(i.first == 0)
        {
            cout<< i.second <<endl;
        }
    }
}
