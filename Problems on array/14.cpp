#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void reversearray(int brr[], int length);
int main()
{
    int n = 0;

    cout<< "Enter the size:-";
    cin>> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    
    reversearray(arr,n);

    return 0;
}
void reversearray(int brr[], int length)
{
    int j = length-1;
    for(int i = 0; i < length; i++)
    {
        if(i < j)
        {
            swap(brr[i] , brr[j]);
        }
        j--;
    }

    for(int i = 0; i < length; i++)
    {
        cout<< brr[i] <<" ";
    }
    cout<<endl;
}
