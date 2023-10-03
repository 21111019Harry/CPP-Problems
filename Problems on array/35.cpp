#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void allzeroend(int brr[], int length);
int main()
{
    int size = 0;
    
    cout<< "Enter the size:-";
    cin>>size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    allzeroend(arr,size);

    return 0;
}

void allzeroend(int brr[], int length)
{
    int i = 0, j = length-1;

    while(i < j)
    {
        if((brr[i] == 0) && (brr[j] != 0))
        {
            swap(brr[i],brr[j]);
            i++;
            j--;
        }
        else if(brr[i] != 0)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    for(int i = 0; i < length; i++)
    {
        cout<< brr[i] <<" ";
    }
    cout<<endl;
}
