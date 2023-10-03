#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void uniquetotalfind(vector<int> &v);
int main()
{
    int size = 0, n = 0;

    cout<< "Enter the size:-";
    cin>>size;

    vector<int> v;

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter the element:-";
        cin>>n;
        v.push_back(n);
    }
    cout<<endl;

    uniquetotalfind(v);

    return 0;
}
void uniquetotalfind(vector<int> &v)
{
    unordered_map<int,int> m1,m2;

    for(int i = 0; i < v.size(); i++)
    {
        m1[v[i]]++;
    }

    for(auto &i : m1)
    {
        m2[i.second]++;

        if(m2[i.second] > 1)
        {
            cout<< "False:"<<endl;
            return ;
        }
    }
    cout<< "True:"<<endl;
}
