#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int rain(int *brr, int length);

int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    rain(arr,size);

    delete []arr;

    return 0;
}
int rain(int *brr, int length)
{

}
