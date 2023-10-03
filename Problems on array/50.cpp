#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void sortedrotated(int *brr, int length);
int main()
{
    int size = 0, no = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    sortedrotated(arr,size);

    delete []arr;

    return 0;
}
void sortedrotated(int *brr, int length)
{
    int icnt = 0;
    for(int i = 1; i < length; i++)
    {
        if(brr[i-1] > brr[i])
        {
            icnt++;
        }
        if(brr[length-1] > brr[0])
        {
            icnt++;
        }
    }
    if(icnt <= 1)
    {
        cout<< "True:" <<endl;
    }
    else
    {
        cout<< "False:"<<endl;
    }
}
