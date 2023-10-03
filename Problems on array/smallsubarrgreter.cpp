#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void subarray(int * brr, int length, int target);
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

    subarray(arr,size,no);

    delete []arr;

    return 0;
}
void subarray(int *brr, int length, int target)
{
    int curr_sum = 0, min_len = length + 1;

    int start = 0, end = 0;

    while(end < length)
    {
        while(curr_sum <= target && end < length)
        {
            curr_sum = curr_sum + brr[end++];
        }
        while(curr_sum > target && start < target)
        {
            if(end - start < min_len)
            {
                min_len = end - start;
            }
            else
            {
                curr_sum = curr_sum - brr[start++];
            }
        }
    }
    cout<<min_len<<endl;
}
