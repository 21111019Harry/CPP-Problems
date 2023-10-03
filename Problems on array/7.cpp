#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void maxproduct(int brr[], int length);
int main()
{
    int size = 0;
    int *arr = NULL; 

    cout<< "Enter the size:-";
    cin>> size;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }

    maxproduct(arr,size);

    delete arr;

    return 0;
}
void maxproduct(int brr[], int length)
{
/*    sort(brr,brr+length,greater<int>());
    int mult = 1;
    for(int i = 0; i < length; i++)
    {
        mult = brr[i]*brr[i+1];
        break;
    }
    cout<< mult <<endl;*/
    int i = 0, j = length-1, max = 0;
    while(i < j)
    {
        if(i < j)
        {
            if(i < j && max < brr[i]*brr[j])
            {
                max = brr[i]*brr[j];
            }
            i++;
            j--;
        }
    }
    cout<< max <<endl;
}
