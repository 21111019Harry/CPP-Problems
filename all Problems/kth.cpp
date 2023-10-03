#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void kth(int *brr, int length , int target);
int main()
{
    int size = 0, no = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the target:-";
    cin>>no;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    kth(arr,size,no);

    delete [] arr;

    return 0;
}
void kth(int *brr, int length, int target)
{
    sort(brr,brr+length);

    cout<< brr[target-1] <<endl;
    
/*    for(int i = 0; i < length; i++)
    {
        if(i == target)
        {
            cout<< brr[i-1] <<endl;
            break;
        }
    }*/
}
