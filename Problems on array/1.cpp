#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void frequencycheck(int brr[], int length, int value);
int main()
{
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter no you check:-";
    cin>>no;
    
    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    cout<<endl;

    frequencycheck(arr,size,no);
    return 0;
}
void frequencycheck(int brr[], int length, int value)
{
    int iCnt = 0;
    for(int i = 0; i < length; i++)
    { 
        if(brr[i] == value)
        {
            iCnt++;
        }
    }
    if(iCnt>0)
    {
        cout<< iCnt <<endl;
    }
    else if(iCnt == 0)
    {
        cout<< "No element in array:-" <<endl;
    }
}
