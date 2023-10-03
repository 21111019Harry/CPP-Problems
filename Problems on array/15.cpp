#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void maxrepeatingno(int brr[], int length);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    cout<<endl;

    maxrepeatingno(arr,size); 

    delete [] arr;

    return 0;
}
void maxrepeatingno(int brr[], int length)
{
    int max = 0;
    int maxrepeat = brr[0];
    unordered_map<int,int> m;

    for(int i = 0; i < length; i++)
    {
        m[brr[i]]++;
    }
    for(auto it = m.begin(); it != m.end(); it++)   //here wehen we use iterator then map key,value print using it->first,it->second not like it.first
    {
        if((it->second) > max)
        {
            max = it->second;
            maxrepeat = it->first;
            cout<<"repeat cout:-" <<it->second<<endl;
        }
    }
/*    for(auto i = 0; i < length; i++) //here i.first,i.second and i->first,i->second is not allowed 
    {
        if(m[brr[i]] > max)
        {
            max = m[brr[i]];
            maxrepeat = brr[i];
            cout<< "repeat count:-" <<m[brr[i]]<<endl;
        }
    }*/
    cout<< maxrepeat <<endl;
}
