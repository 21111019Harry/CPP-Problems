#include<iostream>
#include<bits/stdc++.h>


using namespace std;

vector<int> duplicate(vector<int> &vec);
int main()
{
    vector<int> vec;

    int size = 0;
    cout<< "Enter the size:-";
    cin>>size;

    for(int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<<endl;

    vector<int> v = duplicate(vec);

    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector<int> duplicate(vector<int> &vec)
{
    vector<int> v1;
    unordered_map<int,int> m;

    for(int i = 0; i < vec.size(); i++)
    {
        m[vec[i]]++;
    }

    for(auto &i : m)
    {
        if(i.second == 2)
        {
            cout<< i.first <<" ";
            v1.push_back(i.first);
        }
    }

    return v1;
}
