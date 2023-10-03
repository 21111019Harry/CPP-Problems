#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void intersection(int *prr, int *brr, int length);
int main()
{
    int size = 0, x = 0;
    int *arr = NULL;
    int *prr = NULL;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int[size];

    prr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter first element:-";
        cin>>prr[i];
        cout<< "Enter second element:-";
        cin>>arr[i];
    }
    cout<<endl;

    intersection(prr,arr,size);

    delete []arr;
    delete []prr;

    return 0;
}
void intersection(int *crr, int *brr, int length)
{
    int i = 0, j = 0;

    while(i < length && j < length)
    {
        if(crr[i] == brr[j])
        {
            cout<< crr[i] <<endl;
            i++;
            j++;
        }
        else if(crr[i] < brr[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
