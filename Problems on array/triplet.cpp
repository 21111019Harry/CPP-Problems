#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int triplet(int *brr, int length, int target);
int main()
{
    int *arr = NULL;
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the target:-";
    cin>>no;
    
    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cout<<triplet(arr,size,no)<<endl;

    delete []arr;

    return 0;
}
int triplet(int *brr, int length, int target)
{
    sort(brr,brr+length);

    for(int i = 0; i < length; i++)
    {
        int y = target - brr[i];
        int low = i+1, high = length-1;
        while( low < high )
        {
            if(brr[low] + brr[high] == y)
            {
                return 1;
            }
            else if(brr[low] + brr[high]> y)
            {
                high--;
            }
            else if(brr[low] + brr[high] < y)
            {
                low++;
            }
        }
    }
    return 0;
}
