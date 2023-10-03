#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void firstnegativeno(int brr[], int size);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the szie:-";
    cin>>size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    firstnegativeno(arr,size);

    delete []arr;

    return 0;
}
void firstnegativeno(int brr[], int length)
{
    for(int i = 0; i <= length; i++)
    {
        int j = i+1;
        if(brr[j] <= length)
        {
            if(brr[i] < 0)
            {
          //      cout<< i <<endl;
                cout<< brr[i] <<" ";
            }
            else if(brr[j] < 0)
            {
          //      cout<< j <<endl;
                cout<< brr[j] <<" ";
            }
            else
            {
                cout<< 0 <<" ";
            }
        }
    }
    cout<<endl;
}
