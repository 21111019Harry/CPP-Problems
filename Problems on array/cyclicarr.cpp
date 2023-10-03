#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void cyclic(int *brr, int length, int target);
int main()
{
    int *arr = NULL;
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the target:-";
    cin>>no;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cyclic(arr,size,no);

    delete []arr;

    return 0;
}
void cyclic(int *brr, int length, int target)
{
    int temp[length];
    temp[0] = brr[length-1];

    int j = 0;
    for(int i = 0; i < length; i++)
    {
        temp[i] = brr[j++];
    }

    for(int i = 0; i < length; i++)
    {
        brr[i] = temp[i];
    }
    cout<<endl;

    for(int i = 0; i < length; i++)
    {
        cout<<temp[i]<<endl;
    }
}
