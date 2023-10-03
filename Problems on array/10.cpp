#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void balancedbracket(string str);
map<char,int> m = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
int main()
{
    string str;

    cout<< "Enter the string:";
    getline(cin,str);

    balancedbracket(str);
    return 0;
}
void balancedbracket(string str)
{
    stack<char> st;
    for(char i : str)
    {
        if(m[i] < 0)
        {
            st.push(i);
        }
        else
        {
            if(st.empty())
            {
                cout<< "NO" <<endl;
                return ;
            }
            char top = st.top();
            st.pop();
            if(m[top] +m[i] != 0)
            {
                cout<< "NO:" <<endl;
                return ;
            }
        }
    }
    if(st.empty())
    {
        cout<< "Yes:" <<endl;
    }
    else
    {
        cout<< "NO:" <<endl;;
    }
}
