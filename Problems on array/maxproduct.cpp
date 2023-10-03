#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void maxproduct(int *brr,int length);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int;

    for(int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    maxproduct(arr,size);

    delete []arr;

    return 0;
}
void maxproduct(int *brr, int length)
{
    long long int product = 1;
    long long int max1 = INT_MIN;

    for(int i = 0; i < length; i++)
    {
        product = product * brr[i];

        max1 = max(max1,product);

        if(product == 0)
        {
            product = 1;
        }
    }

    product = 1;

    for(int i = length-1; i >= 0; i--)
    {
        product = product * brr[i];

        max1 = max(max1,product);

        if(product == 0)
        {
            product = 1;
        }
    }

    cout<<max1<<endl;
}
