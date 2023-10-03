#include<iostream>
#include<bits/stdc++.h>


///allocate minimum number of pages.

using namespace std;

int bookallocation(int *brr, int length, int student);
int isPossible(int *crr, int size, int target, int mid1);
int main()
{
    int size = 0, no = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the student no:-";
    cin>>no;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    bookallocation(arr,size,no);

    delete []arr;

    return 0;
}
int bookallocation(int *brr, int length, int student)
{
    int s = 0, sum = 0;
    
    for(int i = 0; i < length; i++)
    {
        sum = sum + brr[i];
    }

    int e = sum;
    int ans = 0;
    int mid = s+(e-s)/2;

    while(s < e)
    {
        if(isPossible(brr,length,student,mid))
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
    int student = 1;
    int pagesum = 0;

    for(int i = 0; i < size; i++)
    {
        if(pagesum + crr[i] <= mid1)
        {
            pagesum = pagesum + crr[i];
            
        }
        else
        {
            student++;

            if(student > target || crr[i] > mid1)
            {
                return false;
            }
            pagesum = crr[i];
        }
    }
    return true;
}
