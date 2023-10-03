#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void findnorepeating(int brr[], int length);
int main()
{
    int size = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    findnorepeating(arr,size);

    delete []arr;

    return 0;
}
void findnorepeating(int brr[], int length)
{
    unordered_set<int> s;

    for(int i = 0; i < length; i++)
    {
        s.insert(brr[i]);
    }
    for(auto &i : s)
    {
        cout<< i <<" ";
        break;
    }
    cout<<endl;
/*    unordered_map<int,int> m;

    for(int i = 0; i < length; i++)
    {
        m[brr[i]]++;
    }
    for(auto &i : m)
    {
        cout<< i.second <<endl;
        break;
    }*/
}
