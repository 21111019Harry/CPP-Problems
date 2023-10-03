#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void intersection(int brr[], int crr[], int length);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int[size];

    int brr[size];

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter the 1 element:-";
        cin>>arr[i];
        cout<< "Enter the 2 element:-";
        cin>>brr[i];
    }

    intersection(arr,brr,size);

    delete [] arr;

    return 0;
}
void intersection(int brr[], int crr[], int length)
{
/*    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length; j++)
        {
            if(brr[i] < crr[j])
            {
                break;
            }
            if(brr[i] == crr[j])
            {
                cout<< brr[i] <<endl;
                break;
            }
        }
    }*/

    int i = 0, j = 0;

    while((i < length) && (j < length))
    {
        if(brr[i] == crr[j])
        {
           cout<< brr[i] <<endl;
           i++;
           j++;
        }
        else if(brr[i] < crr[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

}
