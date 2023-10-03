#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void keypair(int brr[], int length, int target);

int main()
{
    int size = 0, no = 0;
    int *arr = NULL;

    cout<< "Enter the  size:-";
    cin>>size;
    cout<< "Enter the target:-";
    cin>>no;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    keypair(arr,size,no);

    delete []arr;

    return 0;
}
void keypair(int brr[], int length, int target)
{
    sort(brr,brr+length);

    int i = 0, j = length-1;

    while(i < j)
    {
        if(brr[i] + brr[j] == target)
        {
            cout<< "YES:-" <<endl;
            break;
        }
        else if(brr[i] + brr[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}
