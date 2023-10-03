#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void spiral(int **brr, int row, int col);
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

    spiral(arr,irow,icol);

    for(int i = 0; i < irow; i++)
    {
        delete []arr[i];
    }
    delete []arr;
    return 0;
}
void spiral(int **brr, int row, int col)
{
   int count = 0;
   int total = row*col;

   int startingrow = 0;
   int startingcol = 0;
   int endingrow = row-1;
   int endingcol = col-1;

   while(count < total) 
   {
       //starting Row
       for(int i = startingcol; count < total && i <= endingcol; i++)
       {
           cout<<brr[startingrow][i]<<" ";
           count++;
       }
       startingrow++;

       //ending Col
       for(int i = startingrow; count < total && i <= endingrow; i++)
       {
           cout<<brr[i][endingcol]<<" ";
           count++;
       }
       endingcol--;

       //ending Row
       for(int i = endingcol; count < total && i >= startingcol; i--)
       {
           cout<<brr[endingrow][i]<<" ";
           count++;
       }
       endingrow--;

       //starting Col
       for(int i = endingrow; count < total && i >= startingrow; i--)
       {
           cout<<brr[i][startingcol]<<" ";
           count++;
       }
       startingcol++;
   }
   cout<<endl;
}
