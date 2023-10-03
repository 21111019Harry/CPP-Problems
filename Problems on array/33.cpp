#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void productexceptitself(vector<int> &v);
int main()
{
    vector<int> v;

    int size = 0;

    cout<< "Enter the size:-";
    cin>> size;

    for(int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;

    productexceptitself(v);

    return 0;
}
void productexceptitself(vector<int> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        int mult = 1;
        for(int j = 0; j < v.size(); j++)
        {
            if(i != j)
            {
                mult = mult * v[j];
            }
        }
        cout<< mult <<" ";
        cout<<endl;
    }
}
