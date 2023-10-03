#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void givennorotate(int brr[], int length, int value);
int main()
{
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>> size;
    cout<< "Enter no you want:-";
    cin>> no;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    cout<<endl;

    givennorotate(arr,size,no);
    return 0;
}
void givennorotate(int brr[], int length, int value)
{
    for(int i = 0; i < length; i++)
    {
        if(brr[i] == value)
        {
            int temp = brr[i];
            while(brr[i] != brr[0])
            {
                brr[i] = brr[i-1];
                i--;
            }
            brr[0] = temp;
            break;
        }
    }
    for(int i = 0; i < length; i++)
    {
        cout<< brr[i] <<" ";
    }
    cout<<endl;
}
