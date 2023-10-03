#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void findunique(int brr[], int length);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    findunique(arr,size);

    delete [] arr;
}
void findunique(int brr[], int length)
{
    for(int i = 0; i < length; i++)
    {
        bool flag = true;
        for(int j = 0; j < length; j++)
        {
            if((i != j) && brr[i] == brr[j])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<< brr[i] <<endl;
        }
    }
/*    int ans = 0;
    for(int i = 0; i < length; i++)   
    {
        ans = ans^brr[i];
    }
    cout<< ans <<endl;*/
    

/*    unordered_set<int> s;

    for(int i = 0; i < length; i++)
    {
        s.insert(brr[i]);
    }

    for(auto &i : s)
    {
          cout<< i <<endl;
          break;
    }*/
}
