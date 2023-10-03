#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void leaderelement(int brr[], int length);
int main()
{
    int size = 0;

    cout<< "Enter the size:-";
    cin>> size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    cout<<endl;

    leaderelement(arr,size);

    return 0;
}
void leaderelement(int brr[], int length)
{
    vector<int> v;

    int leader = brr[length-1];
    v.push_back(leader);

    for(int i = length-2; i >= 0; i--)
    {
        if(brr[i] >= leader)
        {
            leader = brr[i];
            v.push_back(leader);
        }
    }
    for(auto i = v.rbegin(); i != v.rend(); i++)
    {
        cout<< (*i) <<endl;
    }
}

//leader element means first max element in array then that array starting to max position is skip and next max element find till last.
//eg 12 17 4 3 5 2  o/p 17 5 2
