#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void reverse(int **brr, int row, int col);
int main()
{
    int **arr = NULL;
    int irow = 0, icol = 0;

    cout<< "Entert the row:-";
    cin>>irow;
    cout<< "Enter the col:-";
    cin>>icol;

    arr = new int*[irow];

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

    for(int i = 0; i < irow; i++)
    {
        for(int j = 0; j < icol; j++)
        {
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    reverse(arr,irow,icol);

    for(int i = 0; i < irow; i++)
    {
        delete []arr[i];
    }

    delete []arr;

    return 0;
}
void reverse(int **brr, int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<< brr[j][i] <<" ";
        }
        cout<<endl;
    }
}
