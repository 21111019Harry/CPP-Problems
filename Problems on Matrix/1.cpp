#include<iostream>
#include<bits/stdc++.h>

//wave print problem 
//i/p :-  1 2 3   o/p :-  1 4 7 8 5 2 3 6 9
//        4 5 6 
//        7 8 9   

using namespace std;
int wave(int **brr, int irow, int icol);
int main()
{
    int **arr = NULL;
    int row = 0, col = 0;

    cout<< "Enter the row:-";
    cin>>row;
    cout<< "Enter the col:-";
    cin>>col;

    arr = new int *[row];

    for(int i = 0; i < row; i++)
    {
        arr[i] = new int [col];
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin>> arr[i][j];
        }
    }
    cout<<endl;

    wave(arr,row,col);

    for(int i = 0; i < row; i++)
    {
        delete []arr[i];
    }
    delete []arr;
    return 0;
}
int wave(int **brr, int irow, int icol)
{
    for(int i = 0; i < icol; i++)
    {
        if(i&1)
        {
            for(int j = irow-1; j >= 0; j--)
            {
                cout<< brr[i][j];
            }
        }
        else
        {
            for(int j = 0; j < irow; j++)
            {
                cout<<brr[i][j];
            }
        }
    }
}
