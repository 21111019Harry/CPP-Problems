#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void triplate(int brr[], int length, int target);
int main()
{
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the no:-";
    cin>>no;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    
    triplate(arr,size,no);

    return 0;
}
void triplate(int brr[], int length, int target)
{
/*    for(int i = 0; i < length; i++)
    {
        for(int j = i+1; j < length; j++)
        {
            for(int k = j+1; j < length; j++)
            {
                if(brr[i] + brr[j] + brr[k] == target)
                {
                    cout<< brr[i] <<" "<<brr[j] <<" "<<brr[k] <<endl;
                }
            }
        }
    }*/

    sort(brr,brr[length-1]);
//    int left = brr[0], right = brr[length-1];
//    int middle = length/2;
    
    for(int i = 0; i < length; i++)
    {
        int left = i+1;
        int right = length-1;

        while(left < right)
        {
            int 
        }
    }
}
