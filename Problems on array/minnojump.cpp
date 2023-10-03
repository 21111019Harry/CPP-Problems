#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int jump(int *brr, int length);
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
    cout<<endl;

    cout<<jump(arr,size)<<endl;

    delete []arr;

    return 0;
}
int jump(int *brr, int length)
{
    if(length <= 1)
    {
        return 0;
    }
    if(brr[0] == 0)
    {
        return -1;
    }
    int step = brr[0];
    int maxrech = brr[0];
    int jump = 1;

    for(int i = 0; i < length; i++)
    {
        if(i == length - 1)
        {
            return jump;
        }
        maxrech = max(maxrech,i + brr[i]);
        step--;

        if(step == 0)
        {
            jump++;
        }
        if(i >= maxrech)
        {
            return -1;
        }
        step = maxrech - i;
    }
}
