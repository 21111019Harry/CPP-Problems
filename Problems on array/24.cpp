#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void pairsum(int brr[], int length,int value);
int main()
{
    int *arr = NULL;
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the no:-";
    cin>>no;

    arr = new int[size];
    
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    pairsum(arr,size,no);

    delete [] arr;

    return 0;
}
void pairsum(int brr[], int length, int value)
{
/*    for(int i = 0; i < length; i++)
    {
        for(int j = i+1; j < length; j++)
        {
            if(brr[i] + brr[j] == value)
            {
                if(brr[i] < brr[j])
                {
                    cout<< brr[i] <<" "<<brr[j] <<" ";
                }
                else

                    cout<< brr[j] <<" "<<brr[i] <<" ";
            }
            cout<<endl;
        }
    }*/

    sort(brr,brr+length);
    int i = 0, j = length-1;
    bool flag = false;
    while(i < j)
    {
        if(brr[i] + brr[j] == value)
        {
            flag = true;
            cout<< brr[i] <<" "<< brr[j] <<endl;
            break;
        }
        else if(brr[i] + brr[j] < value)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    if(flag)
    {
        cout<< "YES:"<<endl;
    }
    else
        cout<<"NO:"<<endl;
}
