#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void rotatearray(int *brr, int length, int target);
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

    rotatearray(arr,size,no);

    delete []arr;

    return 0;
}
void rotatearray(int *brr, int length, int target)
{
    int temp[length];

    for(int i = 0; i < length; i++)
    {
        temp[(i+target)%length] = brr[i];
    }

    for(int i = 0; i < length; i++)
    {
        cout<< temp[i] <<" ";
    }
    cout<<endl;
}
