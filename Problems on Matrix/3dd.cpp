#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int first = 0, second = 0, third = 0;
    int **arr = NULL;
    
    cout<< "Enter the first no:-";
    cin>>first;
    cout<< "Enter the second no:-";
    cin>>second;
    cout<< "Enter the third no:-";
    cin>>third;

    arr = new int[first];

    for(int i = 0; i < first; i++)
    {
        arr[i] = new int[second];
    }

    for(int i = 0; i < first; i++)
    {
        for(int j = 0; j < second; j++)
        {
            arr[i] = new int[third];
        }
    }

    for(int i = 0; i < first; i++)
    {
        for(int j = 0; j < second; j++)
        {
            for(int k = 0; k < third; k++)
            {
                cin>>arr[i][j][k];
            }
        }
    }
    cout<<endl;
}
