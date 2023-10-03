#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void margearray(int *crr, int *prr, int length);
int main()
{
    int size = 0;
    int *arr = NULL;
    int *brr = NULL;

    cout<< "Enter the size:-";
    cin>>size;
    
    arr = new int[size];
    brr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter the first array:-";
        cin>>arr[i];
        cout<< "Enter the second array:-";
        cin>>brr[i];
    }
    cout<<endl;

    margearray(arr,brr,size);

    delete []arr;

    delete []brr;

    return 0;
}
void margearray(int *crr, int *prr, int length)
{
    int i = 0, j = 0, k = 0;
    int ans[10];

    while(i < length && j < length)
    {
        if(crr[i] < prr[j])
        {
            ans[k] = crr[i];
            k++;
            i++;
        }
        else 
        {
            ans[k] = prr[j];
            k++;
            j++;
        }
    }

    for(int i = 0; i < 10; i++)
    {
        cout<< ans[i] <<" ";
    }
    cout<<endl;
}
