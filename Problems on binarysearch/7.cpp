#include<iostream>
#include<bits/stdc++.h>

///  book allocation problem

using namespace std;

void check(int *brr, int length, int target);
int main()
{
    int *arr = NULL;
    int size = 0, no = 0;

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

    check(arr,size,no);

    delete []arr;

    return 0;
}
void check(int *brr, int length, int target)
{
        
}
