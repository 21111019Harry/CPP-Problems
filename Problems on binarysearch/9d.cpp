#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int book(int *brr, int length);
int main()
{
    int size = 0, no = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the student no:-";
    cin>>no;

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cout<<book(arr,size,no)<<endl;
    return 0;
}
int book(int *brr, int length, int student)
{
    int s = 0, sum = 0;

    for(int i = 0; i < length; i++)
    {
        sum  = sum + arr[i];
    }
    int e = sum;
    int ans = 0;
    int mid = s+(e-s)/2;

    if(ispossible(brr,length,student,mid))
    {
        ans = mid;
        e = mid-1;
    }
    else
    {
        s = mid+1;
    }

    mid = s+(e-s)/2;
}
int ispossible(int *crr, int size, int target, int mid1)
{
    int student = 1;
    int pagesum = 0;

    for(int i = 0; i < size; i++)
    {
        if(pagesum + crr[i] <= mid1)
        {
            
        }
    }
}
