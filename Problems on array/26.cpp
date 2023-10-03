#include<iostream>
#include<bits/stdc++.h>


// given random 1 and 0 element int array we sort the array like all 0 are in left sizd and all 1 are in right side.
using namespace std;

void sort01(int brr[], int length);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int [size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    sort01(arr,size);

    delete [] arr;

    return 0;
}
void sort01(int brr[], int length)
{
    int i = 0, j = length-1;
    while(i < j)
    {
        if(i < j)
        {
            swap(brr[i],brr[j]);
            i++;
            j--;
        }
        while(i < j && brr[i] == 0)
        {
            i++;
        }
        while(i < j && brr[j] == 1)
        {
            j--;
        }
    }

    for(int i = 0; i < length; i++)
    {
        cout<< brr[i] <<" ";
    }
    cout<<endl;
}
