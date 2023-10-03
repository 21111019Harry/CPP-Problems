#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void nextgreatest(vector<int> &vec);
int main()
{
    int size = 0;

    cout<< "Enter the size:-";
    cin>> size;

    vector<int> arr(size);

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter the element:-";
        cin>>arr[i];
    }

    nextgreatest(arr);

    return 0;
}
void nextgreatest(vector<int> &vec)
{
    vector<int> v(vec.size());

    stack<int> st;

    for(int i = 0; i < vec.size(); i++)
    {
        if((!st.empty()) && (vec[i] < vec[st.top()]))
        {
            v[st.top()]  = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        v[st.top()] = -1;
        st.pop();
    }

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == -1)
        {
            cout<< -1 <<" ";
        }
        else
        {
            cout<< vec[v[i]] <<" ";
        }
    }
    cout<<endl;
}
