#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void findsqrt(int target);
int main()
{
    int no = 0;

    cout<< "Enter the target:-";
    cin>>no;

    cout<<endl;

    findsqrt(no);

    return 0;
}
void findsqrt(int target)
{
    int s = 0, e = target;
    int mid = s+(e-s)/2;
    int ans = 0;

    while(s <= e)
    {
        int squre = mid*mid;

        if(squre == target)
        {
            cout<< mid <<endl;
            return ;
        }
        if(squre < target)
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
}
