#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void sum2array(int *i, int *j, int length);
int main()
{
    int size = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>>size;

    int brr[size];

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter first:-";
        cin>>arr[i];
        cout<< "Enter second:-";
        cin>>brr[i];
    }
    cout<<endl;

    sum2array(arr,brr,size);

    delete []arr;

    return 0;
}
void sum2array(int *i, int *j, int length)
{
    
}
