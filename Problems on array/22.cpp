#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void findtwiceno(int brr[], int length);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    cout<<endl;

    findtwiceno(arr,size);

    delete [] arr;

    return 0;
}
void findtwiceno(int brr[], int length)
{
/*    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length; j++)
        {
            if((i != j) && brr[i] == brr[j])
            {
                cout<< brr[i] <<endl;
            }
        }
    }*/

    unordered_map<int,int> m;

    for(int i = 0; i < length; i++)
    {
        m[brr[i]]++;
    }
    for(auto &i : m)
    {
        if(i.second == 2)
        {
            cout<< i.first <<endl;
        }
    }
}
