#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void swapalternate(int brr[], int length);
int main()
{
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    cout<<endl;

    swapalternate(arr,size);

    return 0;
}
void swapalternate(int brr[], int length)
{
    for(int i = 0; i < length; i+=2)
    {
        if(i+1 < length)
        {
            swap(brr[i], brr[i+1]);
        }
    }
    for(int i = 0; i < length; i++)
    {
        cout<< brr[i] <<" ";
    }
    cout<<endl;
}
