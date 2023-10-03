#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void wave(int *brr, int length);
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

    wave(arr,size);

    delete []arr;

    return 0;
}
void wave(int *brr, int length)
{
    int j = 1;
    for(int i = 0; i < length; i = i+2)
    {
        if(brr[i] < brr[j])
        {
            swap(brr[i], brr[j]);
            j = j+2;
        }
    }
    for(int i = 0; i < length; i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
}
