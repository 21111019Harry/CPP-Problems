#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void immediatesmaller(int brr[], int length);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    immediatesmaller(arr,size);

    delete []arr;

    return 0;
}
void immediatesmaller(int brr[], int length)
{
    for(int i = 0; i < length-1; i++)
    {
        if(brr[i] > brr[i+1])
        {
            brr[i] = brr[i+1];
        }
        else
        {
            brr[i] = -1;
        }
    }
    brr[length-1] = -1;

    for(int i = 0; i < length; i++)
    {
        cout<< brr[i] <<" ";
    }
    cout<<endl;
/*    vector<int> v;

    int temp = brr[0];

    for(int i = 1; i < length; i++)
    {
        if(temp > brr[i])
        {
            temp = brr[i];
            v.push_back(temp);
        }
        else
        {
            v.push_back(-1);
            temp = brr[i];
        }
    }
    v.push_back(-1);

    for(int i = 0; i < v.size(); i++)
    {
        cout<< v[i] <<" ";
    }
    cout<<endl;*/
}
