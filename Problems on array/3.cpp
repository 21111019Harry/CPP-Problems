#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void repetedoddno(int brr[], int length);
int main()
{
    int size = 0;

    cout<< "Enter the size:-";
    cin>> size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin>> arr[size];
    }

    repetedoddno(arr,size);
    return 0;
}
void repetedoddno(int brr[], int length)
{
/*    for(int i = 0; i < length; i++)
    {
        for(int j = i+1; j < length; j++)
        {
            if(brr[i] == brr[j])
            {
                if(brr[i] % 2 != 0)
                {
                    cout<< brr[i] <<endl;
                }
            }
        }
    }*/
    
    for(int i = 0; i < length; i++)
    {
        int iCnt = 0;
        for(int j = i+1; j < length; j++)
        {
            if(brr[i] == brr[j])
            {
                iCnt++;
            }
        }
        if(iCnt % 2 != 0)
        {
            cout<< brr[i] <<endl;
        }
    }
}
