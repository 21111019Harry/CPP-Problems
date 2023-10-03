#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void maxoddno(int brr[], int length);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    
    maxoddno(arr,size);

    delete [] arr;

    return 0;
}
void maxoddno(int brr[], int length)
{
    unordered_map<int,int> m;

    for(int i = 0; i < length; i++)
    {
        m[brr[i]]++;
    }
    for(auto &i : m)   //when we use range based loop then i.first,i.second this syntax is valid i->first,i->second this syntax not valid   
    {
        if((i.second % 2) != 0)
        {
            cout<< i.first <<endl;
        }
    }
}
