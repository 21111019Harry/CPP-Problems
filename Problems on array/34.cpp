#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void check(int crr[], int prr[], int length, int no);
int main()
{
    int size = 0, no = 0;
    int *arr = NULL;
    
    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the target:-";
    cin>>no;

    arr = new int[size];
    int brr[size];

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter first array:-";
        cin>>arr[i];
        cout<< "Enter second array:-";
        cin>>brr[i];
    }

    check(arr,brr,size,no);

    delete []arr;

    return 0;
}
void check(int crr[], int prr[], int length, int sum)
{
    sort(crr,crr+length);
    sort(prr,prr+length,greater<int>());

    int i = 0, j = 0;
    while((i < length) && (j < length))
    {
        if(crr[i] + prr[j] == sum)
        {
            cout<< crr[i] <<" "<< prr[j] <<endl;
            i++;
            j++;
        }
        else if(crr[i] + prr[j] > sum)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
}
