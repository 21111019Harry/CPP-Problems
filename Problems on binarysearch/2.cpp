#include<iostream>
#include<bits/stdc++.h>

/// find first occure and last occure in array and total occure count time complexity o(log n):

using namespace std;

int firstoccur(int *brr, int length, int target);
int lastoccur(int *brr, int length, int target);
int totaloccur(int a, int b);
int main()
{
    int *arr = NULL;
    int size = 0, key = 0;
    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter your key:-";
    cin>>key;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    int start = firstoccur(arr,size,key);

    int end = lastoccur(arr,size,key);

    int sum = totaloccur(start,end);

    cout<< "first occur is:-"<<start<<endl;
    cout<< "last occur is:-"<<end<<endl;
    cout<< "total occur is:-"<<sum<<endl;

    delete []arr;

    return 0;
}
int firstoccur(int *brr, int length, int target)
{
    int s = 0;
    int e = length-1;
    int mid = s +(e-s)/2;
    int ans = 0;

    while(s <= e)
    {
        if(brr[mid] == target)
        {
            ans = mid;
            e = mid-1;
        }
        else if(brr[mid] < target)
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
//    cout<< ans <<endl;
    return ans;
}
int lastoccur(int *brr, int length, int target)
{
    int s = 0, e = length-1, ans = 0;
    int mid = s+(e-s)/2;

    while(s <= e)
    {
        if(brr[mid] == target)
        {
            ans = mid;
            s = mid+1;
        }
        else if(brr[mid] < target)
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
  //  cout<< ans <<endl;
    return ans;
}
int totaloccur(int a, int b)
{
     int sum = (b - a)+1;
     return sum;
}
