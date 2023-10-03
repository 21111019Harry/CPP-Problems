#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void leftrightindex(vector<int> &v, int target);
int main()
{
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the no:-";
    cin>>no;
    
    vector<int> v;

    for(int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;

    leftrightindex(v,no);

    return 0;
}
void leftrightindex(vector<int> &v, int target)
{
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == target)
        {
            cout<< i <<endl;
            break;
        }
    }
    for(int j = v.size(); j >= 0; j--)
    {
        if(v[j] == target)
        {
            cout<< j <<endl;
            break;
        }
    }
/*    int i = 0, j = v.size()-1;

    while(i < j)
    {
        if(v[i] == target)
        {
            cout<< i <<endl;
            i++;
        }
        else if(v[j] == target)
        {
            cout<< j <<endl;
            j--;
            break;
        }
        else
        {
            i++;
            j--;
        }

    }*/
}
