#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void pairsum(int brr[], int crr[], int length, int target);
int main()
{
    int *arr = NULL;
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>> size;
    cout<< "Enter the no:-";
    cin>>no;

    arr = new int[size];
    int prr[size];

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter first array:-";
        cin>>arr[i];
        cout<< "Enter second array:-";
        cin>>prr[i];
    }
    cout<<endl;

    pairsum(arr,prr,size,no);

    delete []arr;

    return 0;
}
void pairsum(int brr[], int crr[], int length, int target)
{
    sort(brr,brr+length);
    sort(crr,crr+length);

//    vector<pair<int,int>> v;

    int i = 0, j = length-1;
    while((i < length) && (j >= 0))
    {
        if(brr[i] + crr[j] == target)
        {
            cout<<brr[i] <<" "<< crr[j] <<endl;
       //     v.push_back({brr[i], crr[j]});
            i++;
            j--;
        }
        else if(brr[i] + crr[j] > target)
        {
            j--;
        }
        else 
        {
            i++;
        }
    }
}
