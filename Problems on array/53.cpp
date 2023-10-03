#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:";
    cin>>size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    rotated(arr,size);

    delete []arr;
}
void rotated(int *brr, int length)
{
    int icnt = 0;

    for(int i = 0; i < length; i++)
    {
        temp[(i%length)] = 
    }
}
