#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void findduplicate(vector<int> &v);
int main()
{
    int size = 0, x = 0;

    cout<< "Enter the size:-";
    cin>>size;

    vector<int> v;

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter the element:-";
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;

    findduplicate(v);

    return 0;
}
void findduplicate(vector<int> &v)
{
    unordered_map<int,int> m;

/*    for(int i : v)        // here m[i] means value or second value or i.second in map  range based for loop
    {
        m[i]++;

        if(m[i] == 2)
        {
            cout<< i <<endl;      // here i means first value or key or i.first
        }

    }*/

/*    for(int i = 0; i < v.size(); i++)   // normal for loop
    {
        m[v[i]]++;

        if(m[v[i]] == 2)
        {
            cout<< v[i] <<endl;
        }
    }
    cout<< -1 <<endl;*/

    int ans = 0;
    for(int i = 0; i < v.size(); i++)
    {
        ans = ans^v[i];
    }
    for(int i = 1; i < v.size(); i++)
    {
        ans = ans^i;
    }
    cout<< ans <<endl;
}
