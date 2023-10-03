#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int Aggressivecow(int *brr, int length, int target);
int isPossible(int *crr, int size, int target, int mid1);
int main()
{
    int size = 0, no = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the target:-";
    cin>>no;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    Aggressivecow(arr,size,no);

    delete []arr;

    return 0;
}
int Aggressivecow(int *brr, int length, int target)
{
    sort(brr,brr+length);
    int s = 0;
    int sum = 0;

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
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    cout<< ans <<endl;
}
int isPossible(int *crr, int size, int target, int mid1)
{
    int cow = 1;
    int lastpos = crr[0];

    for(int i = 0; i < size; i++)
    {
        if(crr[i] - lastpos >= mid1)
        {
            cow++;

            if(cow == target)
            {
                return true;
            }
            lastpos = crr[i];
        }
    }
    return false;
}
