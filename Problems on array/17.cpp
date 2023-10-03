#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void rotatearray(int brr[], int length, int position);
int main()
{
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>> size;
    cout<< "Enter the position:-";
    cin>>no;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<endl;

    rotatearray(arr,size,no);

    return 0;
}
void rotatearray(int brr[],int length, int position)
{
    int temp[length];

    for(int i = 0; i < length; i++)
    {
        temp[i] = brr[i];
    }
    for(int i = 0; i < length; i++)
    {
        brr[i] = temp[(i+position) % length];
    }

    for(int i = 0; i < length; i++)
    {
        cout<< brr[i] <<" ";
    }
    cout<<endl;

}
