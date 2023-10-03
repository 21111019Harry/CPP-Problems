#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void movezero(vector<int> &v);
int main()
{
    int size = 0, x = 0;

    vector<int> v;

    cout<< "Enter the size:-";
    cin>>size;

    for(int i = 0; i < size; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;

    movezero(v);

    return 0;
}
void movezero(vector<int> &v)
{
    int i = 0;

    for(int j = 0; j < v.size(); j++)
    {
        if(v[j] != 0)
        {
            swap(v[j],v[i]);
            i++;
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout<< v[i] <<" ";
    }
    cout<<endl;
} 
