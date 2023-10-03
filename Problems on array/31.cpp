#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void productminmax(int brr[], int crr[], int length);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int[size];
    int brr[size];

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter first array:-";
        cin>>arr[i];
        cout<< "Enter second array:-";
        cin>>brr[i];
    }

    productminmax(arr,brr,size);

    delete [] arr;

    return 0;
}
void productminmax(int brr[], int crr[], int length)
{
    sort(brr,brr+length,greater<int>());
    sort(crr,crr+length);

    int product = brr[0] * crr[0];

    cout<< product <<endl;
//  int product = max_element(brr,brr+length) * min_element(crr,crr+length);
}
