#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void reverseposition(int *brr, int length, int target);
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

    reverseposition(arr,size,no);

    delete []arr;

    return 0;
}
void reverseposition(int *brr, int length, int target)
{
    int i = target+1, j = length-1;

    while(i <= j)
    {
        swap(brr[i], brr[j]);
        i++;
        j--;
    }

    for(int i = 0; i < length; i++)
    {
        cout<< brr[i] <<" ";
    }
    cout<<endl;
}
