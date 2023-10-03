#include<iostream>
#include<bits/stdc++.h>

///find pivot element in array 

using namespace std;

void pivotelement(int *brr, int length);
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

    pivotelement(arr,size);

    delete []arr;

    return 0;
}
void pivotelement(int *brr, int length)
{
/*    int min = INT_MAX;

    for(int i = 0; i < length; i++)           // o(n)  using linear search approch
    {
        if(brr[i] < min)
        {
            min = brr[i];
        }
    }
    cout<< min <<endl;*/

    int s = 0, e = length-1;
    int mid = s+(e-s)/2;

    while(s < e)                                 // o(log n)  using binary search approch
    {
        if(brr[mid] >= brr[0])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    cout<< s <<endl;
}
