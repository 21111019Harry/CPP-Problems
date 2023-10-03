#include<iostream>
#include<bits/stdc++.h>

///find k rotation in array

using namespace std;

int pivot(int *brr, int length);
int binarysearch(int *brr, int start, int end, int target);
int main()
{
    int size = 0, k = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the target:-";
    cin>>k;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    int pvot = pivot(arr,size);

    cout<< "Pivot no is:-" <<pvot<<endl;

    if(k >= arr[pvot] && k <= arr[size-1])
    {
        int res = binarysearch(arr, pvot, size-1, k);
        cout<< "Rotated element is:-" <<res<<endl;
    }
    else
    {
        int res1 = binarysearch(arr, 0, pvot-1, k);
        cout<< "Rotated element is:-" <<res1<<endl;
    }

    delete []arr;

    return 0;
}
int pivot(int *brr, int length)
{
    int s = 0, e = length-1;
    int mid = s+(e-s)/2;

    while(s < e)
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
    return s;
}
int binarysearch(int *brr, int start, int end, int target)
{

    int mid = start+(end-start)/2;

    while(start <= end)
    {
        if(brr[mid] == target )
        {
            return mid;
       }
        else if(brr[mid] < target )
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}
