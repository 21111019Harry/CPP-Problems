#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void duplicate(int brr[], int length, int value);
int main()
{
    int *arr = NULL;
    int size = 0, ino = 0;

    cout<< "Enter the size:-";
    cin>> size;
    cout<< "Enter the no you want:-";
    cin>> ino;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    cout<<endl;

    duplicate(arr,size,ino);

    delete arr;

    return 0;
}
void duplicate(int brr[], int length, int value)
{
 /*   int iCnt = 0 ;
    for(int i = 0; i < length; i++)
    {
        for(int j = i+1; j < length; j++)
        {
            if(brr[i] == brr[j])
            {
                iCnt ++;
                cout<< brr[i] <<endl;
                break;
            }
        }
    }
    if(iCnt == 0)
    {
        cout<< "-1" <<endl;
    }*/

   unordered_map<int,int> m;

    for(auto i = 0; i < length; i++)
    {
//        m[brr[i]];    //ya syntax ne fkt brr array madhle element map madhe insert zale
        m[brr[i]]++;  // ya syntax ne brr array madhle element insert zale aani map madhli key chi value pn increase zali ji bidifault zero aste
    }

    for(auto &i : m)
    {
   //     if(i.first == value)    // ith fkt map madhli key compair krtoy value sobat key mahnje first no or string or etc
        if(i.second == value)
        {
            cout<< i.first <<endl;
        }
    }
}
