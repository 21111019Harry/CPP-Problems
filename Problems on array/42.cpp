#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void sparsematrix(int **brr, int row, int col);
int main()
{
    int irow = 0, icol = 0;
    int **arr = NULL;

    cout<< "Enter the row:-";
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

    sparsematrix(arr,irow,icol);

    for(int i = 0; i < irow; i++)
    {
        delete [] arr [i];
    }

    delete [] arr;

    return 0;
}
void sparsematrix(int **brr, int row, int col)
{
    int last = (row*col)/2;
    int icnt = 0;

    for(int i = 0; (i < row) && (last > icnt); i++)
    {
        for(int j = 0; (j < col) && (last > icnt); j++)
        {
            if(brr[i][j] == 0)
            {
                icnt++;
            }
        }
    }
    if(icnt >= last)
    {
        cout<< "YES:-" <<endl;;
    }
    else
    {
        cout<< "NO:-" <<endl;
    }
}
