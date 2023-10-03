#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void non(int *brr, int length);
int main()
{
    int size = 0;
    int *arr = NULL;

    cout<<"Enter the size:-";
    cin>>size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    non(arr,size);

    delete []arr;
    return 0;
}
void non(int *brr, int length)
{
/*    unordered_map<int,int> m;

    for(int i = 0; i < length; i++)
    {
        m[brr[i]]++;
    }
    for(auto &i : m)
    {
        if(i.second == 1)
        {
            cout<<i.first<<endl;
        }
    }*/
    int ans = 0;
    for(int i = 0; i < length; i++)
    {
        ans = ans^brr[i];
    }

    cout<<ans<<endl;
}
