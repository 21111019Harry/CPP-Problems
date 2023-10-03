#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool uniqueoccurance(vector<int> &vec);
int main()
{
    vector<int> vec;

    int size = 0;
    bool ires = 0;
    cout<<"Enter the size:-";
    cin>>size;

    for(int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<<endl;

    ires = uniqueoccurance(vec);

    return 0;
}
bool uniqueoccurance(vector<int> &vec)
{
        vector<int> vec;

        int res = 0;
        for(int i = 0; i < v.size(); i++)
        {
            if(res == 0)
            {
                res = count(vec.begin,vec.end(),i);
            }
        }
}
