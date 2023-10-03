#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void side(int *brr, int length);
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

    side(arr,size);

    delete []arr;

    return 0;
}
void side(int *brr, int length)
{
    int i = 0;
    for(int j = 0; j < length; j++)
    {   
        if(brr[j] == 0)
        {
            swap(brr[j],brr[i]);
            i++;
        }
    }
    for(int i = 0; i < length; i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
}
