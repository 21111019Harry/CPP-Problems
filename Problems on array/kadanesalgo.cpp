#include<iostream>
#include<bits/stdio.h>

using namespace std;

long long kadanes(int *brr, int length);

int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int;
    
    for(int i = 0; i < size; i++)
    {
        cout<< "Enter the element:";
        cin>>arr[i];
    }

    cout<< kadanes(arr,size) <<endl;

    delete []arr;

    return 0;
}
long long kadanes(int *brr, int length)
{
    long long int sum = 0;
    long long int max1 = brr[0];
    for(int i = 0; i < length; i++)
    {
        sum = sum + brr[i];

        max1 = max(max1,sum);

        if(sum < 0)
        {
            sum = 0;
        }
        return max1;
    }
}
