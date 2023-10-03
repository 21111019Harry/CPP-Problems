#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void smallerandsecond(int brr[],int length);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter the element:-";
        cin>>arr[i];
    }
    
    smallerandsecond(arr,size);

    delete arr;

    return 0;
}
void smallerandsecond(int brr[], int length)
{
    map<int,int> m;

    for(int i = 0; i < length; i++)
    {
        m[brr[i]]++;
    }
    int cnt = 0;
    for(auto i : m)
    {
        cnt ++;
        cout<< i.first <<endl;
        if(cnt == 2)
        {
            break;
        }
    }
}
