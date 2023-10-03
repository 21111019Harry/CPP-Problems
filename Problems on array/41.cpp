#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void identitymatrix(int **brr, int row, int col);
int main()
{
    int irow = 0, icol = 0, size = 0;
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
    cout<<endl;

    for(int i = 0; i < irow; i++)
    {
        for(int j = 0; j < icol; j++)
        {
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    identitymatrix(arr,irow,icol);

    for(int i = 0; i < irow; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;

    return 0;
}
void identitymatrix(int **brr, int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i == j)
            {
                if(brr[i][j] != 1)
                {
                    cout<< "NO:-" <<endl;
                    return ;
                }
            }
            else
            {
                if(brr[i][j] != 0)
                {
                    cout<< "NO:-" <<endl;
                    return ;
                }
            }
        }
    }
    cout<< "YES:-";
}
