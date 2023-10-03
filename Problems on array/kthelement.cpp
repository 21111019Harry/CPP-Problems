#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void kth(int *brr, int *crr, int length, int target);
int main()
{
    int *arr = NULL, *brr = NULL;
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the no you find:-";
    cin>>no;

    arr = new int;
    brr = new int;

    for(int i = 0; i < size; i++)
    {

        cout<< "Enter First array element:-";
        cin>>arr[i];
        cout<< "Enter Second array element:-";
        cin>>brr[i];
    }

    kth(arr,brr,size,no);

    delete []arr;
    delete []brr;

    return 0;
}
void kth(int *brr, int *crr, int length, int target)
{
    int narr[10];
    int i = 0, j = 0, k = 0;
    while(i < length && j < length)
    {
        if(brr[i] < crr[j])
        {
            narr[k] = brr[i];
            k++;
            i++;
        }
        else
        {
            narr[k] = crr[j];
            k++;
            j++;
        }
    }

    while(i < length)
    {
        narr[k] = brr[i];
        k++;
        i++;
    }
    while(j < length)
    {
        narr[k] = crr[j];
        k++;
        j++;
    }

    for(int i = 0; i < 10; i++)
    {
        if(narr[i] == target)
        {
            cout<<narr[i]<<" ";
        }
    }
    cout<<endl;
}
