#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void kthlarge(int *brr, int length, int target);

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

    kthlarge(arr,size,no);

    delete []arr;

    return 0;
}
void kthlarge(int *brr, int length, int target)
{
    sort(brr,brr+length,greater<int>());

    for(int i = 0; i < target; i++)
    {
        cout<<brr[i] <<" ";
    }
    cout<<endl;
}
