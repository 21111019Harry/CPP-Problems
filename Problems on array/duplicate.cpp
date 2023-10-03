#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int duplicate(int *brr, int length);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cout<<duplicate(arr,size)<<endl;

    delete []arr;

    return 0;
}
int duplicate(int *brr, int length)
{
/*       int sum = 0;
            for(int i = 0; i < length; i++)
            {
                sum = sum^brr[i];
            }
            for(int i = 0; i < length; i++)
            {
                sum = sum^i;
            }

            cout<<sum<<endl;
            */
    unordered_map<int,int> m;

    for(int i = 0; i < length; i++)
    {
        m[brr[i]]++;
    }

    for(auto &i : m)
    {
        if(i.second == 2)
        {
            return i.first;
        }
        
    }
    return -1;
}
