#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void kthsmallest(int brr[], int length, int ino);
int main()
{
    int *arr = NULL;
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the k value:-";
    cin>>no;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    kthsmallest(arr,size,no);

    delete arr;

    return 0;
}
void kthsmallest(int brr[], int length, int ino)
{
    vector<int> v;

    for(int i = 0; i < length; i++)
    {
        v.push_back(brr[i]);
    }

    sort(v.begin(),v.end());

    cout<< v[ino-1] <<endl;
}
