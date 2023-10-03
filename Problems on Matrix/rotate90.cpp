#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void rotate90(int **brr, int row, int col);
int main()
{
    int **arr = NULL;
    int irow = 0, icol = 0;

    cout<< "Enter the row:-";
    cin>>irow;
    cout<< "Enter the col:-";
    cin>>icol;

    arr = new int *[irow];

    for(int i = 0; i < irow; i++)
    {
        arr[i] = new int[icol];
    }

    for(int i = 0; i < irow; i++)
    {
        for(int j = 0; j < icol; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    rotate90(arr,irow,icol);

    for(int i = 0; i < irow; i++)
    {
        delete []arr[i];
    }

    delete []arr;
    return 0;
}
void rotate90(int **brr, int row, int col)
{
    
}
