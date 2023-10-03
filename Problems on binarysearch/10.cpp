#include<iostream>
#include<bits/stdc++.h>

///painter partition problem

using namespace std;

int painterpartition(int *brr, int length, int target);
int isPossible(int *crr, int size, int target, int mid1);
int main()
{
    int size = 0, no = 0;
    int *arr = NULL;

    cout<< "Entsr the sizze:-";
    cin>>size;
    cout<< "Enter the no:-";
    cin>>no;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    painterpartition(arr,size,no);

    delete []arr;

    return 0;
}
int painterpartition(int *brr, int length, int target)
{
    int s = 0, sum = 0;

    for(int i = 0; i < length; i++)
    {
        sum = sum + brr[i];
    }

    int e = sum;
    int mid = s+(e-s)/2;
    int ans = 0;

    while(s <= e)
    {
        if(isPossible(brr,length,target,mid))
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
    cout<< ans <<endl;
}
int isPossible(int *crr, int size, int target, int mid1)
{
    int painter = 1;
    int bordsum = 0;
    
    for(int i = 0; i < size; i++)
    {
        if(bordsum + crr[i] <= mid1)
        {
            bordsum = bordsum + crr[i];
        }
        else
        {
            painter++;

            if(painter > target || crr[i] > mid1)
            {
                return false;
            }
            bordsum = crr[i];
        }
    }
    return true;
}
