#include<iostream>
#include<bits/stdc++.h>

////peak mountain element problem using binary search

using namespace std;

void peakelement(int *brr, int length);
int main()
{
    int size = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    peakelement(arr,size);

    delete []arr;

    return 0;
}
void peakelement(int *brr, int length)     // peak element means maximum element in array
{
/*    for(int i = 0; i < length; i++)    // o(n) using linear search approch
    {
        if(brr[i] > max)
        {
            max = brr[i];
        }
        cout<<endl;
    }*/

    int s = 0, e = length-1;
    int mid = s+(e-s)/2;

    while(s < e)                        // o(log n)  using binary search approch
    {
        if(brr[mid] < brr[mid+1])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    cout<< mid <<endl;
}
