#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void kthlarg(int brr[], int length, int ino);
int main()
{
    int *arr = NULL;
    int size = 0, no = 0;

    cout<<"Enter the size:-";
    cin>>size;
    cout<< "Enter the no:-";
    cin>> no;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    kthlarg(arr,size,no);

    delete arr;

    return 0;
}
void kthlarg(int brr[], int length, int ino)
{
    set<int> s;

    for(auto i = 0; i < length; i++)
    {
        s.insert(brr[i]);
    }
    auto it = s.rbegin();

    advance(it,ino-1);

    if(it != s.rend())
    {
        cout<< (*it) <<endl;
    }
}
