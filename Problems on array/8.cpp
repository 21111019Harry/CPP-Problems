#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>


using namespace std;

void evenoddarray(int brr[], int length);
int main()
{
    int *arr = NULL;
    int size = 0;
    cout<< "Enter the size:-";
    cin>> size;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter the element:-";
        cin>>arr[i];
    }

    evenoddarray(arr,size);

    delete arr;

    return 0;
}
void evenoddarray(int brr[], int length)
{
    int mid = length/2;

    int i = 0, j = length - 1;
    while(i < j)
    {
        while((i < length) && (brr[i] % 2 == 0))
        {
            i++;
        }
        while((j>=0) && (brr[i] % 2 != 0))
        {
            j--;
        }
        if(i<j)
        {
            swap(brr[i],brr[j]);
        }
    }

    sort(brr,brr+mid);
    sort(brr+mid,brr+length);
    for(int i = 0 ; i < length; i++)
    {
        cout<< brr[i] <<" ";
    }
    cout<<endl;
}
