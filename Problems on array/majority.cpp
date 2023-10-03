#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void majority(int *brr, int length);
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

    majority(arr,size);

    delete []arr;

    return 0;
}
void majority(int *brr, int length)
{
    int target = length/2;
    unordered_map<int,int> m;

    for(int i = 0; i < length; i++)
    {
        m[brr[i]]++;
    }

    for(auto &i : m)
    {
        if(i.second > target)
        {
            cout<<i.second<<endl;
        }
    }
}
