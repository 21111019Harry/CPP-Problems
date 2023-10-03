#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fact(int no1);
int main()
{
    int no = 0, ret = 0;
    cout<<"Enter the no:-";
    cin>>no;

    ret = fact(no);
    cout<<ret<<endl;
}
int fact(int no1)
{
    if(no1==1)
    {
        return 1;
    }

    return no1*fact(no1-1);
}
