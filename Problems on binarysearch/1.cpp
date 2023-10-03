#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int findelement(int brr[], int length, int target);
int main()
{
    int *arr = NULL;
    int size = 0;
    int no = 0;

    cout<< "Enter the size:-";
    cin>>size;

    cout<< "Enter the no:-";
    cin>>no;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    
    int res = findelement(arr,size,no);

    cout<< res <<endl;

    return 0;
}
int findelement(int brr[], int length, int target)
{
    int start = 0;
    int end = length-1;
    int mid = start + (end - start)/2;

    while(start <= end)
    {
        if(brr[mid] == target)
        {
            return mid;
        }
        if(brr[mid] < target)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = start + (end - start)/2;   //here we update mid bcz in upper 2 if case we change start or end thats why we change mid here. 
    }
    return -1;
}
