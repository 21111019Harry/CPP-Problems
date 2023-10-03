#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void keypair(vector<int> &v, int length, int target);
int main()
{
    vector<int> v;
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the target:-";
    cin>>no;

    for(int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<endl;

    keypair(v,size,no);

    return 0;
}
void keypair(vector<int> &v, int length, int target)
{
    int i = 0, j = v.size()-1;

/*    for(int i = 0; i < length; i++)
    {
        for(int j = i+1; j < length; j++)
        {
            if(v[i] + v[j] == target)
            {
                cout<< i <<" "<< j <<endl;
                return ;
            }
        }
    }*/

    sort(v.begin(),v.end());

    while(i < j)
    {
        if(v[i] + v[j] == target)
        {
            cout<< i << " " << j <<endl;
            return ;
        }
        else if(v[i] + v[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}
