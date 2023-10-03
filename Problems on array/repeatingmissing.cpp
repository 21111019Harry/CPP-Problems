#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void repeatingmissing(int *brr, int length);

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

    repeatingmissing(arr,size);

    delete []arr;

    return 0;
}
void repeatingmissing(int *brr, int length)
{
/*    sort(brr,brr+length);

    int j = 1;

    for(int i = 0; i < length; i++)
    {
        if(brr[i] == brr[j])
        {
            cout<<brr[i]<<endl;
        }
        j++;
    }*/

    int temp[length] = {0};

    for(int i = 0; i < length; i++)
    {
        int num = brr[i];
        if(num >= 0 && num <= length)
        {
            temp[num - 1]++;
        }
    }
    int miss = -1;
    int rep = -1;

    for(int i = 0; i < length; i++)
    {
        if(temp[i] == 0)
        {
            miss = i + 1;
        }
        else if(temp[i] == 2)
        {
            rep = i + 1;
        }
    }

    cout<<miss<<endl;
    cout<<rep<<endl;
}
